/*
 *  OGraph_PD.cpp
 *  
 *
 *  Created by Stanton T. Cady on 06/18/12
 *  Last edited by Stanton T. Cady on 08/02/12
 *
 */



#include "OGraph_PD.h"
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



// LinkedList
// Public mthods
// LinkedList::LinkedList() {
//     _prepareALL(NUM_REMOTE_VERTICES);
// }

// LinkedList::LinkedList(int n) {
//     _prepareALL(n);
// }

// //create a linked list of online neighbors, using their node IDs 
// void LinkedList::_prepareALL(int n) {
//     _head = NULL;
//     _tail = NULL;
//     _inheritor = 1;
//     for (int i = 0; i < n; i++)
//     {
//         node *tmp = new node;
//         tmp->data = i + 1;
//         tmp->mainNext = NULL;

//         if (_head == NULL)
//         {
//             _head = tmp;
//             _tail = tmp;
//         }
//         else
//         {
//             _tail->mainNext = tmp;
//             _tail = tmp;
//         }
//     }
//     _setLLsize (n);
// }

// //create a linked list of online neighbors, using their node IDs 
// void LinkedList::_updateALL(int *p) {
//     int i=0, j=0;
//     _pseudoHead = NULL;
//     node *tmp;
//     tmp = _head;
//     while (tmp != NULL)
//     {
//         if (*(p+i) == 2)
//         {
//             if (_pseudoHead == NULL)
//             {
//                 _pseudoHead = tmp;
//                 _pseudoTail = tmp;
//             }
//             else
//             {
//                 _pseudoTail->next = tmp;
//                 _pseudoTail = tmp;
//             }
//             j++;
//         }
//         tmp = tmp->mainNext;
//         i++;
//     }
//     _pseudoTail->next = NULL;
//     _setLLsize (j);
// }

// //display a linked list
// void LinkedList::_displayALL() {
//     node *tmp;
//     tmp = _pseudoHead;
//     while (tmp != NULL)
//     {
//         Serial << tmp->data << ' ';
//         tmp = tmp->next;
//     }
// }

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
    //_statusP = &_status[0];
    //initialize leaderID and deputyID
    //_leaderID = 0;
    //_deputyID = 0;
    //linkedlist for online neighbors
    //_l = LinkedList();

    //number of neighbors
    _neighborSize = 22;
    //Decision variables for primal dual algorithm
    _p = 0;
    _q = 0;
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

ORemoteVertex::ORemoteVertex(XBeeAddress64 a, uint8_t nodeID, bool inNeighbor) {
	_prepareORemoteVertex(a.getLsb(),nodeID,0,0,inNeighbor);                      //r, x, set to 0 by default i.e. line impedance is not yet known
}

ORemoteVertex::ORemoteVertex(uint32_t aLsb, uint8_t nodeID, bool inNeighbor) {
	_prepareORemoteVertex(aLsb,nodeID,0,0,inNeighbor);
}

ORemoteVertex::ORemoteVertex(XBeeAddress64 a, uint8_t nodeID, long r, long x, bool inNeighbor) {
    _prepareORemoteVertex(a.getLsb(),nodeID,r,x,inNeighbor);
}

ORemoteVertex::ORemoteVertex(uint32_t aLsb, uint8_t nodeID, long r, long x, bool inNeighbor) {
    _prepareORemoteVertex(aLsb,nodeID,r,x,inNeighbor);
}

/// End public methods
/// Private methods
void ORemoteVertex::_prepareORemoteVertex(uint32_t aLsb, uint8_t nodeID, long r, long x, bool inNeighbor) {
    _inNeighbor = inNeighbor;
    _index = nodeID-1;
    _r = r;
    _x = x;
    _fp = 0;
    _fq = 0;
    _lambda = 0; 
    _prepareOVertex(aLsb, nodeID);
}
/// End private methods
//// End ORemoteVertex

//// OGraph_PD
/// Public methods
// Constructors
OGraph_PD::OGraph_PD() {
    _n = 0;
    OLocalVertex s =  OLocalVertex();
    _self = &s;
}

OGraph_PD::OGraph_PD(OLocalVertex * s) {
    _n = 1;
    _self = s;
}

// Local vertex
//OLocalVertex * OGraph_PD::getLocalVertex() {
//    return _self;
//}

bool OGraph_PD::isLocalVertex(uint32_t aLsb) {
    if(aLsb == _self->getAddressLsb())
        return true;
    else
        return false;
}

//bool OGraph_PD::isLocalVertex(XBeeAddress64 a) {
//	return isLocalVertex(a.getLsb());
//}

// Graph properties
//uint8_t OGraph_PD::getN() {
//    return _n;
//}

//uint8_t OGraph_PD::getNumberNonNeighbors() {
//    return _n - _self->getInDegree() - 1;
//}

// Add and remove vertices from in-neighborhood
bool OGraph_PD::addInNeighbor(XBeeAddress64 a, uint8_t nodeID) {
    return addInNeighbor(a.getLsb(),nodeID);
}

bool OGraph_PD::addInNeighbor(uint32_t aLsb, uint8_t nodeID) {
    return addInNeighbor(aLsb,nodeID,0,0);
}

bool OGraph_PD::addInNeighbor(XBeeAddress64 a, uint8_t nodeID, long r, long x) {
    return addInNeighbor(a.getLsb(),nodeID,r,x);
}

bool OGraph_PD::addInNeighbor(uint32_t aLsb, uint8_t nodeID, long r, long x) {
    // make sure we can add another inNeighbor
    if((_self->getInDegree()) < NUM_IN_NEIGHBORS)
        return _addRemoteVertex(aLsb,nodeID,r,x,true);
    return false;
}

bool OGraph_PD::removeInNeighbor(uint8_t nodeID){
    
    ORemoteVertex * neighbor = getRemoteVertex(nodeID-1);
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
bool OGraph_PD::isInNeighbor(XBeeAddress64 a) {
    return isInNeighbor(a.getLsb());
}

bool OGraph_PD::isInNeighbor(uint32_t aLsb) {
    uint8_t i;
    return isInNeighbor(aLsb,i);
}

bool OGraph_PD::isInNeighbor(XBeeAddress64 a, uint8_t &i) {
    return isInNeighbor(a.getLsb(),i);
}

bool OGraph_PD::isInNeighbor(uint32_t aLsb, uint8_t &i) {
    if(_isRemoteVertex(aLsb,i))
        return _remoteVertices[i].isInNeighbor();
    return false;
}

bool OGraph_PD::isInNeighbor(uint32_t aLsb, ORemoteVertex * &v) {
    uint8_t i;
    if(isInNeighbor(aLsb,i)) {
        v = &_remoteVertices[i];
        return true;
    }
    return false;
}

// Add and remove vertices from list of non-neighbors
bool OGraph_PD::addNonNeighbor(XBeeAddress64 a, uint8_t nodeID) {
    return addNonNeighbor(a.getLsb(), uint8_t nodeID);
}

bool OGraph_PD::addNonNeighbor(uint32_t aLsb, uint8_t nodeID) {
    return addNonNeighbor(aLsb,nodeID,0,0);
}

bool OGraph_PD::addNonNeighbor(XBeeAddress64 a, uint8_t nodeID, long r, long x) {
    return addNonNeighbor(a.getLsb(),nodeID,r,x);
}

bool OGraph_PD::addNonNeighbor(uint32_t aLsb, uint8_t nodeID, long r, long x) {
    return _addRemoteVertex(aLsb,nodeID,r,x);
}

// Determine if vertex is non-neighbor
bool OGraph_PD::isNonNeighbor(XBeeAddress64 a) {
    return isNonNeighbor(a.getLsb());
}

bool OGraph_PD::isNonNeighbor(uint32_t aLsb) {
    uint8_t i;
    return isNonNeighbor(aLsb,i);
}

bool OGraph_PD::isNonNeighbor(XBeeAddress64 a, uint8_t &i) {
    return isNonNeighbor(a.getLsb(),i);
}

bool OGraph_PD::isNonNeighbor(uint32_t aLsb, uint8_t &i) {
    if(_isRemoteVertex(aLsb,i))
        return !(_remoteVertices[i].isInNeighbor());
    return false;
}

// Methods to clear various states
void OGraph_PD::clearAllNuTau() {
	_self->clearAllTau();
    _self->clearAllNuMinNuMax();
    for(uint8_t i = 0; i < NUM_REMOTE_VERTICES; i++) {
        _remoteVertices[i].clearAllNuMinNuMax();
    }
}

void OGraph_PD::clearAllYMinYMax() {
    _self->clearYMinYMax();
	for(uint8_t i = 0; i < NUM_REMOTE_VERTICES; i++)
		_remoteVertices[i].clearYMinYMax();
}

void OGraph_PD::clearAllInStates() {
    _self->clearZIn();
    _self->clearYMinInYMaxIn();
	for(uint8_t i = 0; i < NUM_REMOTE_VERTICES; i++)
		_remoteVertices[i].clearYMinInYMaxIn();
}

void OGraph_PD::clearAllBroadcastStates() {
	_self->clearSigma();
    _self->clearMuMinMuMax();
	for(uint8_t i = 0; i < NUM_REMOTE_VERTICES; i++)
		_remoteVertices[i].clearMuMinMuMax();
}

void OGraph_PD::clearAllStates() {
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

OVertex * OGraph_PD::getVertexByAddressLsb(uint32_t aLsb) {
    uint8_t i;
    return getVertexByAddressLsb(aLsb,i);
}

// Methods to pointer to vertex
OVertex * OGraph_PD::getVertexByAddressLsb(uint32_t aLsb, uint8_t &i) {
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

OVertex * OGraph_PD::getVertexByAddress(XBeeAddress64 a) {
	return getVertexByAddressLsb(a.getLsb());
}

OVertex * OGraph_PD::getVertexByUniqueID(uint8_t i) {
	if(i == 0) {
		return dynamic_cast<OVertex*> (_self);
	} else if(i >= 1 && i <= NUM_REMOTE_VERTICES) {
		return dynamic_cast<OVertex*> (&_remoteVertices[i-1]);
	}
}

ORemoteVertex * OGraph_PD::getRemoteVertex(uint8_t nodeID) {
    if(nodeID < NUM_REMOTE_VERTICES)
        return &_remoteVertices[nodeID-1];
    return 0x0;
}

/// End public methods
/// Private methods


uint8_t OGraph_PD::_getRemoteVertexIndex(XBeeAddress64 a) {
	return _getRemoteVertexIndex(a.getLsb());
}

uint8_t OGraph_PD::_getRemoteVertexIndex(uint32_t aLsb) {
	for(uint8_t i = 0; i < NUM_REMOTE_VERTICES; i++) {
		if(_remoteVertices[i].getAddressLsb() == aLsb)
			return i;
	}
	return INVALID_ARRAY_INDEX;
}

bool OGraph_PD::_isRemoteVertex(uint32_t aLsb) {
    uint8_t i = _getRemoteVertexIndex(aLsb);
    return _isRemoteVertex(aLsb,i);
}

bool OGraph_PD::_isRemoteVertex(uint32_t aLsb, uint8_t &i) {
    i = _getRemoteVertexIndex(aLsb);
    if(i != INVALID_ARRAY_INDEX)
        return true;
    return false;
}

bool OGraph_PD::_addRemoteVertex(uint32_t aLsb, uint8_t nodeID, long r, long x, bool inNeighbor) {
    // determine index for new neighbor
    uint8_t index = nodeID - 1;
	// check if another vertex can be stored
	if(s+1 <= NUM_REMOTE_VERTICES) {
		// there is room for one more non-neighbor in array
		// check if vertex is already stored in array
        if(!_isRemoteVertex(aLsb)) {
            // if vertex is an in-neighbor, increment local vertex in-degree variable
            if(inNeighbor) {
                _self->incrementInDegree();
            }
        	// create new instance of OVertex object and store in array
            _remoteVertices[index] = ORemoteVertex(aLsb,nodeID,r,x,inNeighbor);
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
//// End OGraph_PD