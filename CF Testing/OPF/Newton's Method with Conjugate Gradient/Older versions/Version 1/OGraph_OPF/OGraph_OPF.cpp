/*
 *  OGraph_OPF.cpp
 *  
 *
 *  Created by Stanton T. Cady on 06/18/12
 *  Last edited by Stanton T. Cady on 08/02/12
 *
 */



#include "OGraph_OPF.h"
#include "Streaming.h"



//// OVertex
/// Public methods
// Constructors
OVertex::OVertex() {
    _prepareOVertex(0x0,0);
}

OVertex::OVertex(uint32_t aLsb) {
	_prepareOVertex(aLsb,0);
}

OVertex::OVertex(XBeeAddress64 a) {
	_prepareOVertex(a.getLsb(),0);
}




void OVertex::updateYMinYMax(uint8_t weight) {
    setYMinYMax(_yMin/weight+_yMinIn,_yMax/weight+_yMaxIn);
}
//
//// incoming states yMinIn and yMaxIn
//void OVertex::setYMinIn(long yMinIn) {
//    _yMinIn = yMinIn;
//}
//
//void OVertex::setYMaxIn(long yMaxIn) {
//    _yMaxIn = yMaxIn;
//}
//
//void OVertex::setYMinInYMaxIn(long yMinIn, long yMaxIn) {
//    setYMinIn(yMinIn);
//    setYMaxIn(yMaxIn);
//}
//
//void OVertex::addToYMinIn(long increment) {
//    _yMinIn += increment;
//}
//
//void OVertex::addToYMaxIn(long increment) {
//    _yMaxIn += increment;
//}
//
//void OVertex::addToYMinInYMaxIn(long incrementYMinIn, long incrementYMaxIn) {
//    addToYMinIn(incrementYMinIn);
//    addToYMaxIn(incrementYMaxIn);
//}
//
//void OVertex::clearYMinInYMaxIn() {
//    setYMinInYMaxIn(0,0);
//}

// Broadcast states muMin and muMax
//void OVertex::setMuMin(long muMin) {
//    _muMin = muMin;
//}

//void OVertex::setMuMax(long muMax) {
//    _muMax = muMax;
//}
//
//void OVertex::setMuMinMuMax(long muMin, long muMax) {
//    setMuMin(muMin);
//    setMuMax(muMax);
//}

//long OVertex::getMuMin() {
//    return _muMin;
//}

//long OVertex::getMuMax() {
//    return _muMax;
//}
//
//void OVertex::getMuMinMuMax(long &muMin, long &muMax) {
//    muMin = getMuMin();
//    muMax = getMuMax();
//}
//
//void OVertex::clearMuMinMuMax() {
//    setMuMinMuMax(0,0);
//}

void OVertex::updateMuMinMuMax(uint8_t weight) {
    setMuMinMuMax(_muMin+_yMin/weight,_muMax+_yMax/weight);
}

// Robust algorithm states nuMin and nuMax
bool OVertex::setNuMin(uint8_t i, long nuMin) {
    if(i < NUM_IN_NEIGHBORS) {
        _nuMin[i] = nuMin;
        return true;
    }
    return false;
}

bool OVertex::setNuMax(uint8_t i, long nuMax) {
    if(i < NUM_IN_NEIGHBORS) {
        _nuMax[i] = nuMax;
        return true;
    }
    return false;
}

long OVertex::getNuMin(uint8_t i) {
    if(i < NUM_IN_NEIGHBORS)
        return _nuMin[i];
    return LONG_ERROR;
}

long OVertex::getNuMax(uint8_t i) {
    if(i < NUM_IN_NEIGHBORS)
        return _nuMax[i];
    return LONG_ERROR;
}

bool OVertex::clearNuMinNuMax(uint8_t i) {
    if(i < NUM_IN_NEIGHBORS) {
        _nuMin[i] = 0;
        _nuMax[i] = 0;
        return true;
    }
    return false;
}

void OVertex::clearAllNuMinNuMax() {
    for(uint8_t i = 0; i < NUM_IN_NEIGHBORS; i++) {
        _nuMin[i] = 0;
        _nuMax[i] = 0;
    }        
}

/// End public methods
/// Private methods
// Helper functions
void OVertex::_prepareOVertex(uint32_t aLsb, uint8_t nodeID) {
    _aLsb = aLsb;
    _nodeID = nodeID;
    _yMin   = 0;
    _yMax   = 0;
    _yMinIn = 0;
    _yMaxIn = 0;
    _muMin  = 0;
    _muMax  = 0;
    clearAllNuMinNuMax();
}
/// End private methods
//// End OVertex



//LinkedList
//Public mthods
LinkedList::LinkedList() { 
    _prepareLinkedList(NUM_REMOTE_VERTICES);
}

LinkedList::LinkedList(int n) {
    _prepareLinkedList(n);
}

//create a linked list of online neighbors, using their node IDs 
void LinkedList::_prepareLinkedList(int n) {
    _head = NULL;
    _tail = NULL;
    _pseudoHead = NULL;
    _pseudoTail = NULL;
    _codedHead = NULL;
    _codedTail = NULL;
    _size = 1;
    _numCodedLinks = 0;

    for (uint8_t i = 0; i < n; i++)
    {
        node *tmp = new node;
        tmp->data = i + 1;
        tmp->mainNext = NULL;

        if (_head == NULL)
        {
            _head = tmp;
            _tail = tmp;
        }
        else
        {
            _tail->mainNext = tmp;
            _tail = tmp;
        }
    }
}

//create a linked list of online neighbors, using their node IDs 
void LinkedList::updateLinkedList(uint8_t *r) {
    uint8_t i=0, j=1;
    _pseudoHead = NULL;
    node *tmp;
    tmp = _head;
    while (tmp != NULL)
    {
        if (*(r+i) >= 2)
        {
            if (_pseudoHead == NULL)
            {
                _pseudoHead = tmp;
                _pseudoTail = tmp;
            }
            else
            {
                _pseudoTail->next = tmp;
                _pseudoTail = tmp;
            }
            if (*(r+i) == 3)
                j++;
            // Serial <<"counter updated to "<<j<<endl;
            // delay(5);
        }
        tmp = tmp->mainNext;
        i++;
    }
    _pseudoTail->next = NULL;
    setLLsize(j);
}

//resets the status of all neighbors from 3 to 2 
void LinkedList::resetLinkedListStatus(uint8_t *r) {
    uint8_t i=0;
    node *tmp;
    tmp = _pseudoHead;
    while (tmp != NULL)
    {
        i = tmp->data;
        if (*(r+i-1) == 3)
        {
            *(r+i-1) = 2;
            // Serial<< "Status of node "<<i<<" changed from 3 to "<<*(r+i)<<endl;
            // delay(5);
        }
        tmp = tmp->next;
    }
    setLLsize(1);
}

//display a linked list
void LinkedList::displayLinkedList() {
    node *tmp;
    tmp = _pseudoHead;
    while (tmp != NULL)
    {
        Serial << tmp->data << " ";
        tmp = tmp->next;
    }
}

//display coded linked lists
void LinkedList::displayCodedLinkedList(ORemoteVertex *n) {
    node *tmp;
    tmp = _codedHead;
    uint8_t i = 0, actCode = 0;
    while (tmp != NULL)
    {
        i = tmp->data;   
        //Serial << i << " is a coded link with actcode "<< (n+i-1)->getLinkActCode() <<endl;
        tmp = tmp->codedNext;
    }
}

//find an uncoded communication link and return the ID of its associated neighbor, return 0 if all links are coded
uint8_t LinkedList::findUncodedLink(ORemoteVertex *n) {
    node *tmp;
    tmp = _pseudoHead;
    uint8_t i = 0, actCode = 0;

    while (tmp != NULL)
    {
        i = tmp->data;
        actCode = (n+i-1)->getLinkActCode();
        // Serial << actCode << " is the actcode of the link to node " << i << endl;
        // delay(10);
        if (actCode == 0)
            return i;
        tmp = tmp->next;
    }
    return 0;
}

void LinkedList::unlinkCodedLink(uint8_t neighborID) {
    if (_codedHead->data == neighborID)
    {
        _codedHead = _codedHead->codedNext;
        return;
    }

    node *tmp1, *tmp2;
    tmp1 = _codedHead;
    tmp2 = tmp1->codedNext;

    while (tmp2 != NULL)
    {
        if (tmp2->data == neighborID)
        {
            tmp1->codedNext = tmp2->codedNext;
            return;
        }
        else
        {
            tmp1 = tmp2;
            tmp2 = tmp1->codedNext;
        }
    }
}

uint8_t LinkedList::getMaxActCode(ORemoteVertex *n) {
    node *tmp;
    tmp = _codedHead;
    uint8_t i = 0, actCode = 0, maxActCode = 0;

    while (tmp != NULL)
    {
        i = tmp->data;
        actCode = (n+i-1)->getLinkActCode();
        if (maxActCode < actCode)
            maxActCode = actCode;
        tmp = tmp->codedNext;
    }
    return actCode;
}

bool LinkedList::isCodedLinkAvailable(uint8_t neighborID) {
    node *tmp;
    tmp = _codedHead;

    while (tmp != NULL)
    {
        if (tmp->data == neighborID)
            return true;
        tmp = tmp->codedNext;
    }
    return false;
}

bool LinkedList::isActCodeAvailable(uint8_t code, ORemoteVertex *n, bool &flag) {
    node *tmp;
    tmp = _codedHead;
    uint8_t i = 0, actCode = 0;
    flag = true;                                        //set flag to true if the candidate actCode is greater than the observed actCode
    while (tmp != NULL)
    {
        i = tmp->data;                                  //get ID of neighbor
        actCode = (n+i-1)->getLinkActCode();            //get activation code of link associated with the neighbor
        if (actCode > code)
            flag = false;                               //set flag to false if the candidate actCode is less than or equal to the observed actCode
        if (actCode == code)
        {
            flag = false;
            return false;
        }
        tmp = tmp->codedNext;
    }
    // Serial << "candactcode found" <<endl;
    // delay(10);
    return true;
}

uint8_t LinkedList::isActCodeUsed(uint8_t code, ORemoteVertex *n) {
    node *tmp;
    tmp = _codedHead;
    uint8_t i = 0, actCode = 0;
    while (tmp != NULL)
    {
        i = tmp->data;                                  //get ID of neighbor
        actCode = (n+i-1)->getLinkActCode();            //get activation code of link associated with the neighbor
        if (actCode == code)
        {
            return i;
        }
        tmp = tmp->codedNext;
    }
    return 0;
}

uint8_t LinkedList::addActiveFlows(ORemoteVertex *n) {
    node *tmp;
    tmp = _codedHead;
    uint8_t i = 0, fp = 0;
    while (tmp != NULL)
    {
        i = tmp->data;                                  //get ID of neighbor
        fp = fp + ((n+i-1)->getActiveFlow());           //get active flow of link associated with neighbor
        tmp = tmp->codedNext;
    }
    return fp;
}

uint8_t LinkedList::addReactiveFlows(ORemoteVertex *n) {
    node *tmp;
    tmp = _codedHead;
    uint8_t i = 0, fq = 0;
    while (tmp != NULL)
    {
        i = tmp->data;                                  //get ID of neighbor
        fq = fq + ((n+i-1)->getReactiveFlow());         //get reactive flow of link associated with neighbor
        tmp = tmp->codedNext;
    }
    return fq;
}

uint8_t LinkedList::addLambdas(ORemoteVertex *n) {
    node *tmp;
    tmp = _codedHead;
    uint8_t i = 0, lambda = 0;
    while (tmp != NULL)
    {
        i = tmp->data;                                  //get ID of neighbor
        lambda = lambda + ((n+i-1)->getLambda());       //get lambda of link associated with neighbor
        tmp = tmp->codedNext;
    }
    return lambda;
}

//update the linked list of coded links
void LinkedList::updateCodedLinks(ORemoteVertex *n) {
    uint8_t i=0, j=0;
    _codedHead = NULL;
    node *tmp;
    tmp = _pseudoHead;
    while (tmp != NULL)
    {
        i = tmp->data;                                  //get ID of neighbor
        if ((n+i-1)->getLinkActCode() != 0)           //check if the link associated with the neighbor has an activation code
        {
            if (_codedHead == NULL)
            {
                _codedHead = tmp;
                _codedTail = tmp;
            }
            else
            {
                _codedTail->codedNext = tmp;
                _codedTail = tmp;
            }
            j++;
        }
        tmp = tmp->next;
    }
    _codedTail->codedNext = NULL;
    setNumCodedLinks(j);
}

//unlink the first node the linkedlist points to and return its data
uint8_t LinkedList::unlinkLinkedListNodes() {
    node *tmp;
    tmp = _pseudoHead;
    if (tmp != NULL)
    {
        _pseudoHead = tmp->next;
        return tmp->data;
    }
    else
        return 0;
}

// //get node ID of inheritor
// void LinkedList::_setInheritorID() {
//     node *tmp;
//     tmp = _pseudoHead;
//     int ID = 0;
//     int index;

//     if (tmp == NULL)
//     {
//         return;
//     }
//     else
//     {
//         // randomly choose an online neighbor to be inheritor
//         srand (getLLsize());   
//         index = rand () % getLLsize ();
//         for (int i = 0; i <= index; i++)
//         {
//             ID = tmp->data;
//             tmp = tmp->next;
//         }
//         _inheritor = ID;
//     }
// }


/// End private methods
//// End LinkedList





//// OLocalVertex
/// Public methods
// Constructors
OLocalVertex::OLocalVertex() {
    _prepareOLocalVertex(0x0,0,0,0,0,0,0,100000);
}

OLocalVertex::OLocalVertex(uint32_t aLsb, uint8_t nodeID, long min, long max, long alpha, long beta, uint8_t Dout, long base) {
    _prepareOLocalVertex(aLsb,nodeID,min,max,alpha,beta,Dout,base);
}

OLocalVertex::OLocalVertex(XBeeAddress64 a, uint8_t nodeID, long min, long max, long alpha, long beta, uint8_t Dout, long base) {
    _prepareOLocalVertex(a.getLsb(),nodeID,min,max,alpha,beta,Dout,base);
}


// Robust algorithm state tau
bool OLocalVertex::setTau(uint8_t i, long tau) {
    if(i < NUM_IN_NEIGHBORS) {
        _tau[i] = tau;
        return true;
    }
    return false;
}

long OLocalVertex::getTau(uint8_t i) {
    if(i < NUM_IN_NEIGHBORS)
        return _tau[i];
    return LONG_ERROR;
}

void OLocalVertex::clearAllTau() {
    for(uint8_t i = 0; i < NUM_IN_NEIGHBORS; i++)
        setTau(i,0);
}

/// End public methods
/// Private methods
// Helper functions
void OLocalVertex::_prepareOLocalVertex(uint32_t aLsb, uint8_t nodeID, long min, long max, long alpha, long beta, uint8_t Dout, long base) {
    // set base
    _base = base;
    // initialize states
    _z 		= 0;
    _zIn 	= 0;
    _sigma 	= 0;
    clearAllTau();
    // set limits
    _min = min;
    _max = max;
    _alpha = alpha;
    _beta = beta;
    // set graph out-degree
    _inDegree = 0;
    _outDegree = Dout;
    //initialize status vector to zero i.e. all other nodes are not neighbors
    for(int i=0; i< NUM_REMOTE_VERTICES; i++)
    {
        _status[i] = 0;
    }
    _statusP = &_status[0];
    //initialize leaderID and deputyID
    //_leaderID = 0;
    //_deputyID = 0;

    //number of neighbors
    _neighborSize = 22;

    //Decision variables for primal dual algorithm
    _p = 0;
    _q = 0;
    _OPF = 0;
    _qd = 0;
    _sqV = 0;
    _mu = 0;
    _nu = 0;

    //weights for primal dual algorithm
    _Wv = 0;  //voltage weight
    _Wp = 0; //active power balance weight
    _Wq = 0; //reactive power balance weight
    _Dp = 0; //active power injection weight
    _Dq = 0; //reactive power injection weight
    _prepareOVertex(aLsb, nodeID);
}


// Inheritor ID selection
// int OLocalVertex::chooseInheritor() {
//     //Update linked list based on updated neghbor status, and choose inheritor
//     _l._updateALL(_statusP);
//     _l._setInheritorID();
//     setNeighborSize(_l.getLLsize());

//     return _l.getInheritorID();
// }


// Optimal dispatch functions
long OLocalVertex::_computeLambda(long limit) {
	float b = float(_base);
    long rslt = long(b*(float(limit - _alpha)/float(_beta)));
    if(rslt > 0)
        return rslt;
    else
        return LONG_ERROR;
}

/// End private methods
//// End OLocalVertex

//// OLocalReserveVertex
/// Public methods
// Constructors
OLocalReserveVertex::OLocalReserveVertex() {
	_prepareOLocalReserveVertex(0x0,0,0,0,0,0,100000);
}

OLocalReserveVertex::OLocalReserveVertex(uint32_t aLsb, long min, long max, long alpha, long beta, uint8_t Dout, long base) {
	_prepareOLocalReserveVertex(aLsb,min,max,alpha,beta,Dout,base);
}

OLocalReserveVertex::OLocalReserveVertex(XBeeAddress64 a, long min, long max, long alpha, long beta, uint8_t Dout, long base) {
	_prepareOLocalReserveVertex(a.getLsb(),min,max,alpha,beta,Dout,base);
}
/// End public methods
/// Private methods
void OLocalReserveVertex::_prepareOLocalReserveVertex(uint32_t aLsb, long min, long max, long alpha, long beta, uint8_t Dout, long base) {
    _reserveMin = min;
    _reserveMax = max;
	_limitExceeded = false;
	_limitGamma = 1;
    _prepareOLocalVertex(aLsb,min,max,alpha,beta,Dout,base,0);
}

/// End private methods
//// End OLocalVertexReserve

//// OInNeighbor
/// Public methods
// Constructors
ORemoteVertex::ORemoteVertex() {
    _prepareORemoteVertex();
}

ORemoteVertex::ORemoteVertex(XBeeAddress64 a, uint8_t neighborID, bool inNeighbor) {
	_prepareORemoteVertex(a.getLsb(),neighborID,0,0,inNeighbor);                      //r, x, set to 0 by default i.e. line impedance is not yet known
}

ORemoteVertex::ORemoteVertex(uint32_t aLsb, uint8_t neighborID, bool inNeighbor) {
	_prepareORemoteVertex(aLsb,neighborID,0,0,inNeighbor);
}

ORemoteVertex::ORemoteVertex(XBeeAddress64 a, uint8_t neighborID, float r, float x, bool inNeighbor) {
    _prepareORemoteVertex(a.getLsb(),neighborID,r,x,inNeighbor);
}

ORemoteVertex::ORemoteVertex(uint32_t aLsb, uint8_t neighborID, float r, float x, bool inNeighbor) {
    _prepareORemoteVertex(aLsb,neighborID,r,x,inNeighbor);
}

/// End public methods
/// Private methods
void ORemoteVertex::_prepareORemoteVertex(uint32_t aLsb, uint8_t neighborID, float r, float x, bool inNeighbor) {
    _inNeighbor = inNeighbor;
    _index = neighborID-1;
    _r = r;
    _x = x;
    _fp = 0;
    _fq = 0;
    _lambda = 0;
    _linkActCode = 0;
    _linkParent = 0;
    _prepareOVertex(aLsb, neighborID);
}
/// End private methods
//// End ORemoteVertex

//// OGraph_OPF
/// Public methods
// Constructors
OGraph_OPF::OGraph_OPF() {
    _n = 0;
    OLocalVertex s =  OLocalVertex();
    _self = &s;
    //linkedlist for online neighbors
    LinkedList _l = LinkedList();
    _list = &_l;
}

OGraph_OPF::OGraph_OPF(OLocalVertex * s) {
    _n = 1;
    _self = s;
    //linkedlist for online neighbors
    LinkedList _l = LinkedList();
    _list = &_l;
}

OGraph_OPF::OGraph_OPF(OLocalVertex * s, LinkedList * l) {
    _n = 1;
    _self = s;
    //linkedlist for online neighbors
    _list = l;
}

// Local vertex
//OLocalVertex * OGraph_OPF::getLocalVertex() {
//    return _self;
//}

bool OGraph_OPF::isLocalVertex(uint32_t aLsb) {
    if(aLsb == _self->getAddressLsb())
        return true;
    else
        return false;
}

//bool OGraph_OPF::isLocalVertex(XBeeAddress64 a) {
//	return isLocalVertex(a.getLsb());
//}

// Graph properties
//uint8_t OGraph_OPF::getN() {
//    return _n;
//}

//uint8_t OGraph_OPF::getNumberNonNeighbors() {
//    return _n - _self->getInDegree() - 1;
//}

// Add and remove vertices from in-neighborhood
bool OGraph_OPF::addInNeighbor(XBeeAddress64 a, uint8_t neighborID) {
    return addInNeighbor(a.getLsb(),neighborID);
}

bool OGraph_OPF::addInNeighbor(uint32_t aLsb, uint8_t neighborID) {
    return addInNeighbor(aLsb,neighborID,0,0);
}

bool OGraph_OPF::addInNeighbor(XBeeAddress64 a, uint8_t neighborID, float r, float x) {
    return addInNeighbor(a.getLsb(),neighborID,r,x);
}

bool OGraph_OPF::addInNeighbor(uint32_t aLsb, uint8_t neighborID, float r, float x) {
    // make sure we can add another inNeighbor
    if((_self->getInDegree()) < NUM_IN_NEIGHBORS)
        return _addRemoteVertex(aLsb,neighborID,r,x,true);
    return false;
}

bool OGraph_OPF::removeInNeighbor(uint8_t neighborID){
    
    ORemoteVertex * neighbor = getRemoteVertex(neighborID-1);
    uint32_t aLsb = neighbor->getAddressLsb();

    if(isInNeighbor(aLsb))
    {
        uint8_t i = _getRemoteVertexIndex(aLsb);
        _self->decrementInDegree(); 

        //_n = _n - 1;        // _n is the number of nodes in the network
                            //since one neighbor is no longer in the network, the number of nodes reduces by 1
        
        //_n is used as the reference when adding new neighbors so as long as that is reduced the addInNeigbor() works as expected

        uint8_t Dout = _self->getOutDegree();  //since we assume it is a bidirectional graph, InDegree is equivalent to OutDegree
        _self->setOutDegree(Dout - 1);

        return true;
    }
    
        return false;
}

// Determine if vertex is in in-neighborhood
bool OGraph_OPF::isInNeighbor(XBeeAddress64 a) {
    return isInNeighbor(a.getLsb());
}

bool OGraph_OPF::isInNeighbor(uint32_t aLsb) {
    uint8_t i;
    return isInNeighbor(aLsb,i);
}

bool OGraph_OPF::isInNeighbor(XBeeAddress64 a, uint8_t &i) {
    return isInNeighbor(a.getLsb(),i);
}

bool OGraph_OPF::isInNeighbor(uint32_t aLsb, uint8_t &i) {
    if(_isRemoteVertex(aLsb,i))
        return _remoteVertices[i].isInNeighbor();
    return false;
}

bool OGraph_OPF::isInNeighbor(uint32_t aLsb, ORemoteVertex * &v) {
    uint8_t i;
    if(isInNeighbor(aLsb,i)) {
        v = &_remoteVertices[i];
        return true;
    }
    return false;
}

// Add and remove vertices from list of non-neighbors
bool OGraph_OPF::addNonNeighbor(XBeeAddress64 a, uint8_t neighborID) {
    return addNonNeighbor(a.getLsb(),neighborID);
}

bool OGraph_OPF::addNonNeighbor(uint32_t aLsb, uint8_t neighborID) {
    return addNonNeighbor(aLsb,neighborID,0,0);
}

bool OGraph_OPF::addNonNeighbor(XBeeAddress64 a, uint8_t neighborID, float r, float x) {
    return addNonNeighbor(a.getLsb(),neighborID,r,x);
}

bool OGraph_OPF::addNonNeighbor(uint32_t aLsb, uint8_t neighborID, float r, float x) {
    return _addRemoteVertex(aLsb,neighborID,r,x);
}

// Determine if vertex is non-neighbor
bool OGraph_OPF::isNonNeighbor(XBeeAddress64 a) {
    return isNonNeighbor(a.getLsb());
}

bool OGraph_OPF::isNonNeighbor(uint32_t aLsb) {
    uint8_t i;
    return isNonNeighbor(aLsb,i);
}

bool OGraph_OPF::isNonNeighbor(XBeeAddress64 a, uint8_t &i) {
    return isNonNeighbor(a.getLsb(),i);
}

bool OGraph_OPF::isNonNeighbor(uint32_t aLsb, uint8_t &i) {
    if(_isRemoteVertex(aLsb,i))
        return !(_remoteVertices[i].isInNeighbor());
    return false;
}

// Methods to clear various states
void OGraph_OPF::clearAllNuTau() {
	_self->clearAllTau();
    _self->clearAllNuMinNuMax();
    for(uint8_t i = 0; i < NUM_REMOTE_VERTICES; i++) {
        _remoteVertices[i].clearAllNuMinNuMax();
    }
}

void OGraph_OPF::clearAllYMinYMax() {
    _self->clearYMinYMax();
	for(uint8_t i = 0; i < NUM_REMOTE_VERTICES; i++)
		_remoteVertices[i].clearYMinYMax();
}

void OGraph_OPF::clearAllInStates() {
    _self->clearZIn();
    _self->clearYMinInYMaxIn();
	for(uint8_t i = 0; i < NUM_REMOTE_VERTICES; i++)
		_remoteVertices[i].clearYMinInYMaxIn();
}

void OGraph_OPF::clearAllBroadcastStates() {
	_self->clearSigma();
    _self->clearMuMinMuMax();
	for(uint8_t i = 0; i < NUM_REMOTE_VERTICES; i++)
		_remoteVertices[i].clearMuMinMuMax();
}

void OGraph_OPF::clearAllStates() {
    _self->clearZInSigma();
    _self->setZ(0);
    _self->clearAllTau();
    _self->clearYMinYMax();
    _self->clearYMinInYMaxIn();
    _self->clearMuMinMuMax();
    _self->clearAllNuMinNuMax();
    for(uint8_t i = 0; i < NUM_REMOTE_VERTICES; i++) {
        _remoteVertices[i].clearYMinYMax();
        _remoteVertices[i].clearYMinInYMaxIn();
        _remoteVertices[i].clearMuMinMuMax();
        _remoteVertices[i].clearAllNuMinNuMax();
    }    
}

OVertex * OGraph_OPF::getVertexByAddressLsb(uint32_t aLsb) {
    uint8_t i;
    return getVertexByAddressLsb(aLsb,i);
}

// Methods to pointer to vertex
OVertex * OGraph_OPF::getVertexByAddressLsb(uint32_t aLsb, uint8_t &i) {
	uint8_t j;	// index of in-neighbor or non-neighbor
	if(isLocalVertex(aLsb)) {
        // vertex id of local vertex is 0
        i = 0;
		return dynamic_cast<OVertex*> (_self);
	} else if(_isRemoteVertex(aLsb,j)) {
        // vertex id of in-neighbor is index of inNeighbor + 1
        i = j + 1;
		return dynamic_cast<OVertex*> (&_remoteVertices[j]);
	}
}

OVertex * OGraph_OPF::getVertexByAddress(XBeeAddress64 a) {
	return getVertexByAddressLsb(a.getLsb());
}

OVertex * OGraph_OPF::getVertexByUniqueID(uint8_t i) {
	if(i == 0) {
		return dynamic_cast<OVertex*> (_self);
	} else if(i >= 1 && i <= NUM_REMOTE_VERTICES) {
		return dynamic_cast<OVertex*> (&_remoteVertices[i-1]);
	}
}

ORemoteVertex * OGraph_OPF::getRemoteVertex(uint8_t neighborID) {
    if(neighborID < NUM_REMOTE_VERTICES)
        return &_remoteVertices[neighborID-1];
    return 0x0;
}

/// End public methods
/// Private methods


void OGraph_OPF::configureLinkedList() {
    _list->updateLinkedList(_self->getStatusP());
}

uint8_t OGraph_OPF::_getRemoteVertexIndex(XBeeAddress64 a) {
    return _getRemoteVertexIndex(a.getLsb());
}

uint8_t OGraph_OPF::_getRemoteVertexIndex(uint32_t aLsb) {
	for(uint8_t i = 0; i < NUM_REMOTE_VERTICES; i++) {
		if(_remoteVertices[i].getAddressLsb() == aLsb)
			return i;
	}
	return INVALID_ARRAY_INDEX;
}

bool OGraph_OPF::_isRemoteVertex(uint32_t aLsb) {
    uint8_t i = _getRemoteVertexIndex(aLsb);
    return _isRemoteVertex(aLsb,i);
}

bool OGraph_OPF::_isRemoteVertex(uint32_t aLsb, uint8_t &i) {
    i = _getRemoteVertexIndex(aLsb);
    if(i != INVALID_ARRAY_INDEX)
        return true;
    return false;
}

bool OGraph_OPF::_addRemoteVertex(uint32_t aLsb, uint8_t neighborID, float r, float x, bool inNeighbor) {
    // determine index for new neighbor
    uint8_t index = neighborID - 1;
	// check if another vertex can be stored
    if(_n <= NUM_REMOTE_VERTICES) {
		// there is room for one more non-neighbor in array
		// check if vertex is already stored in array
        if(!_isRemoteVertex(aLsb)) {
            // if vertex is an in-neighbor, increment local vertex in-degree variable
            if(inNeighbor) {
                _self->incrementInDegree();
            }
        	// create new instance of OVertex object and store in array
            _remoteVertices[index] = ORemoteVertex(aLsb,neighborID,r,x,inNeighbor);
            _self->setStatus(neighborID, 2);
            // increment total number of vertices current initialized
            _n++;
#ifdef VERBOSE
            Serial << _MEM(PSTR("Vertex with address lsb 0x")) << _HEX(aLsb) << _MEM(PSTR(" added array of remote vertices.")) << endl;
#endif
            return true;
        } else {
#ifdef VERBOSE
            Serial << _MEM(PSTR("Vertex not added. A vertex with the same address is already in the array of remote vertices.")) << endl;
#endif
        }
	} else {
#ifdef VERBOSE
        Serial << _MEM(PSTR("No room to add another vertex to array of remote vertices.")) << endl;
#endif
    }
	return false; // anything that comes here is an error /// End private methods
}
//// End OGraph_OPF