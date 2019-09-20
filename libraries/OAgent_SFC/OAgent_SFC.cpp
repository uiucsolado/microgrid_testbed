/*
 *  OAgent_SFC.cpp
 *  
 *
 *  Created by Stanton T. Cady on 06/15/12
 *  Edited by Laura Haller on 01/11/13
 *  Last edited by Stanton T. Cady on 01/16/13
 *
 */



#include "OAgent_SFC.h"
#include "Streaming.h"
//#define VERBOSE

//// Public methods
/// Constructors
OAgent_SFC::OAgent_SFC() {

    XBee temp1 = XBee();
    ZBRxResponse temp2 = ZBRxResponse();
    OGraph_SFC temp3 = OGraph_SFC();
    _prepareOAgent_SFC(&temp1,&temp2,&temp3);
    //setRS(0);
}

OAgent_SFC::OAgent_SFC(XBee * xbee, OGraph_SFC * G, bool leader, bool quiet) {
     ZBRxResponse temp = ZBRxResponse();
    _prepareOAgent_SFC(xbee,&temp,G,leader,quiet);
    //setRS(0);
}

OAgent_SFC::OAgent_SFC(XBee * xbee, ZBRxResponse * rx, OGraph_SFC * G, bool leader, bool quiet) {
    _prepareOAgent_SFC(xbee,rx,G,leader,quiet);
    //setRS(0);
}

// OAgent_SFC::OAgent_SFC(XBee * xbee, ZBRxResponse * rx, OGraph_SFC * G, bool leader, bool quiet, int RS) {
//     _prepareOAgent_SFC(xbee,rx,G,leader,quiet);  
// }

/// End Constructors

/// Methods to get private elements
//OGraph_SFC * OAgent_SFC::getGraph() {
//    return _G;
//}
//
//void OAgent_SFC::setLeader(bool leader) {
//    _leader = leader;
//}
//
//bool OAgent_SFC::isLeader() {
//    return _leader;
//}
//
//void OAgent_SFC::setQuiet(bool quiet) {
//    _quiet = quiet;
//}
//
//bool OAgent_SFC::isQuiet() {
//    return _quiet;
//}
/// End methods to get private elements

/// Ratio-consensus
// Fair splitting
float OAgent_SFC::fairSplitRatioConsensus(long y, long z, uint8_t iterations, uint16_t period) {  //,uint8_t round
    OLocalVertex * s = _G->getLocalVertex(); // store pointer to local vertex 
    float Dout = float(s->getOutDegree() + 1);    // store out degree, the +1 is to account for the self loops
    _initializeFairSplitting(s,y,z);      // initialize state variables                           
    unsigned long start;                // create variable to store iteration start time
    bool txDone;                        // create variable to keep track of broadcasts
    bool mucheck = 0;
    bool sigmacheck = 0;
    //srand(analogRead(0)); //put this instruction in both the leader and nonleader consensus functions
    uint16_t txTime;       //_genTxTime(period,10,analogRead(0));   // get transmit time; 
    long inY;                           // incoming state variable
    long inZ;
    int count = 3;
    //uint8_t no_of_nodes = _G->getN() - 1;  //number of in-neighbors (in this case)
    int node_check[NUM_REMOTE_VERTICES]; //checker for each neighbor whether data is received or not per iteration
    //int step_counter = 0;        //used when adjusting vertex array to account for offline neigbors
    uint32_t aLsb;

    for(int i=0; i < NUM_REMOTE_VERTICES; i++)
    {
        node_check[i] = 0;
        //Serial <<"\n"<<"For Node "<<s->getID()<<", from Node"<<i<<", Y[0]= "<< getneighborY0(i) << "\n ";
        //Serial <<"\n"<<"For Node "<<s->getID()<<", from Node"<<i<<", Z[0]= "<< getneighborZ0(i) << "\n ";
    }
 
    int frame = 35;
    


   

    //if(txTime <= 0 || txTime > period)
     //   txTime = 25;                      //25 milliseconds

    for(uint8_t k = 0; k < iterations; k++) {
    	srand(analogRead(0));
    	txTime =  (rand() % (period - 2*frame)) + frame;  //determines the time window in which a payload is transmitted
        txDone = false;     // initialize toggle to keep track of broadcasts
        start = millis();   // initialize timer
        // clear in y and in z
        inY = 0;
        inZ = 0;
            
        //Serial << "iteration: ";
        //Serial << k;
        //Serial << "\n";
        uint8_t i;
        while(uint16_t(millis()-start) < period) {
            if(_fairSplitPacketAvailable()) {                                   // robust, coordinate value packet available
                                                                      // index of remote device in graph in-neighborhood
                aLsb = _rx->getRemoteAddress64().getLsb();
                if(_G->isInNeighbor(aLsb,i)) {    // check if remote device is in in-neighborhood
                    long inMu = _getMuFromPacket();                             // store incoming value of mu
                    long inSigma = _getSigmaFromPacket();                       // store incoming value of sigma
                    int neighbor_id = _getneighborIDFromPacket();
                    int inheritor_id = _getinheritorIDFromPacket();

                    int node_id = s->getID();


                    if(s->getStatus(neighbor_id-1) == 1)
                    {
                    	s->setStatus(neighbor_id-1, 2);
                    	uint8_t dout = s->getOutDegree();
                    	s->setOutDegree(dout + 1);
                    }
                    else if(s->getStatus(neighbor_id-1) == 0)
                    	s->setStatus(neighbor_id-1, 2);


                    //Serial << "Address of neighbor: "; 
                	//Serial  << _HEX(_rx->getRemoteAddress64().getLsb());
                	//Serial << "\n";   
                    
                    long Mudiff = inMu - s->getNuMin(i); 
                    long sigdiff =  inSigma - s->getTau(i);
                        if(k==0)
                            {
                            	setneighborY0( (neighbor_id-1), Mudiff+( Mudiff*(inheritor_id==node_id) ) );
                                //Serial <<"\n"<<"Y0 element "<<i<<" is: "<< getneighborY0(i) << "\n ";
                            	setneighborZ0( (neighbor_id-1), sigdiff+( sigdiff*(inheritor_id==node_id) ) );
                                //Serial <<"\n"<<"Z0 element "<<i<<" is: "<< getneighborZ0(i) << "\n " ;
                            }
                    inY += Mudiff;                               // add mu from incoming device and subtract last received value
                    s->setNuMin(i,inMu);                                        // save received mu as new nu (nuMin)
                    inZ += sigdiff;                              // add sigma from incoming device and subtract last received value
                    s->setTau(i,inSigma);                                       // save received sigma as new tau
             		
                    node_check[neighbor_id -1] = 1;                      //data was received from a neighbor at this iteration
                    
                }
            }

            if((int((millis() - start)) >= txTime) && !txDone) {
                txDone = true; // toggle txDone
                _broadcastFairSplitPacket(s);
                
            }
        }

        if(!_quiet) {
           
            delay(10);
        } else {
            delay(25);
        }

        s->setYMin(long(float(s->getYMin())/Dout) + inY);             //problem is here (if inY is zero then this is set to zero)
        s->setMuMin(s->getMuMin() + long(float(s->getYMin())/Dout));
        s->setZ(long(float(s->getZ())/Dout) + inZ);
        s->addToSigma(long(float(s->getZ())/Dout));

        _buffer[count] = float(s->getYMin())/float(s->getZ()); //add kth iterate to buffer
        _bufferY[count] = float(s->getYMin()); //add kth iterate to buffer
        _bufferZ[count] = float(s->getZ()); //add kth iterate to buffer
        //Serial << "Every Iteration Y";
        //Serial << _buffer[count];
        //Serial << "\n";
        count++; 

        //CODE TO IMPROVE RESILIENCY

		       	
        for(int j=0;j < NUM_REMOTE_VERTICES; j++)
        {
            if(node_check[j] == 0 && node_counter[j] >= 0)
                node_counter[j] += 1;
            else if(node_check[j] == 1 ) 
				node_counter[j] = 0;
            

            
            //Serial << "node_counter ";
            //Serial << j;
            //Serial << " : ";
            //Serial << node_counter[j];
            //Serial << "\n";
            

            if(node_counter[j] >= int(iterations/2) )
            {
                s->setStatus(j, 1);
                s->decrementInDegree();
                uint8_t dout = s->getOutDegree();              //since we assume it is a bidirectional graph, InDegree is equivalent to OutDegree
                s->setOutDegree(dout - 1); 
                node_counter[j] = -1;                          //set counter to -1 when limit reached to indicate offline link status    
            }
            node_check[j] = 0;                                 //reset node_check after each iteration
        }

		/*  old approach
        step_counter = 0;

        for(int j=0;j < no_of_nodes; j++)
        {
            if(online[j])
            {
                if(step_counter > 0)
                {
                     node_counter[j - step_counter] = node_counter[j];
                     _G->AdjustVertexArray(j,step_counter);
                } 
            }
            else
            {
                _G->removeInNeighbor(j);
                step_counter++;
            }
        }
        no_of_nodes = no_of_nodes - step_counter;
        
        */
    }

    if(s->getZ() != 0)
        _buffer[0] = float(s->getYMin())/float(s->getZ()); 

    _buffer[1] = s->getOutDegree();
    _buffer[2] = _G->getN() - 1;

    
    //Serial << "RC from Library";
    //Serial << float(s->getYMin())/float(s->getZ());
    //Serial <<"\n";  
    return float(s->getYMin())/float(s->getZ());
}


// Resilient Fair splitting RC (added in by Olaolu)
float OAgent_SFC::ratiomaxminConsensus(long y, long z, uint8_t iterations, uint16_t period) {  //,uint8_t round
    OLocalVertex * s = _G->getLocalVertex(); // store pointer to local vertex 
    float Dout = float(s->getOutDegree() + 1);    // store out degree, the +1 is to account for the self loops
    _initializeFairSplitting_RSL(s,y,z);      // initialize state variables                           
    unsigned long start;                // create variable to store iteration start time
    bool txDone;                        // create variable to keep track of broadcasts
    bool mucheck = 0;
    bool sigmacheck = 0;
    //srand(analogRead(0)); //put this instruction in both the leader and nonleader consensus functions
    uint16_t txTime;       //_genTxTime(period,10,analogRead(0));   // get transmit time; 
    long inY;                           // incoming state variable
    long inZ;
    int count = 3;
    //uint8_t no_of_nodes = _G->getN() - 1;  //number of in-neighbors (in this case)
    int node_check[NUM_REMOTE_VERTICES]; //checker for each neighbor whether data is received or not per iteration
    //int step_counter = 0;        //used when adjusting vertex array to account for offline neigbors
    uint32_t aLsb;

    for(int i=0; i < NUM_REMOTE_VERTICES; i++)
    {
        node_check[i] = 0;
        //Serial <<"\n"<<"For Node "<<s->getID()<<", from Node"<<i<<", Y[0]= "<< getneighborY0(i) << "\n ";
        //Serial <<"\n"<<"For Node "<<s->getID()<<", from Node"<<i<<", Z[0]= "<< getneighborZ0(i) << "\n ";
    }
 
    int frame = 35;
    


   

    //if(txTime <= 0 || txTime > period)
     //   txTime = 25;                      //25 milliseconds

    for(uint8_t k = 0; k < iterations; k++) {
        srand(analogRead(0));
        txTime =  (rand() % (period - 2*frame)) + frame;  //determines the time window in which a payload is transmitted
        txDone = false;     // initialize toggle to keep track of broadcasts
        start = millis();   // initialize timer
        // clear in y and in z
        inY = 0;
        inZ = 0;
            
        //Serial << "iteration: ";
        //Serial << k;
        //Serial << "\n";
        uint8_t i;
        while(uint16_t(millis()-start) < period) {
            if(_fairSplitPacketAvailable()) {                                   // robust, coordinate value packet available
                                                                      // index of remote device in graph in-neighborhood
                aLsb = _rx->getRemoteAddress64().getLsb();
                if(_G->isInNeighbor(aLsb,i)) {    // check if remote device is in in-neighborhood
                    long inMu = _getMuFromPacket();                             // store incoming value of mu
                    long inSigma = _getSigmaFromPacket();                       // store incoming value of sigma
                    int neighbor_id = _getneighborIDFromPacket();
                    int inheritor_id = _getinheritorIDFromPacket();
                    int leader_id = _getleaderIDFromPacket();
                    int deputy_id = _getdeputyIDFromPacket();

                    int node_id = s->getID();

                    //find out id this node is the inheritor for node i
                    if(s->getStatus(neighbor_id-1) == 1)
                    {
                        s->setStatus(neighbor_id-1, 2);
                        uint8_t dout = s->getOutDegree();
                        s->setOutDegree(dout + 1);
                    }
                    else if(s->getStatus(neighbor_id-1) == 0)
                        s->setStatus(neighbor_id-1, 2);


                    //Serial << "Address of neighbor: "; 
                    //Serial  << _HEX(_rx->getRemoteAddress64().getLsb());
                    //Serial << "\n";   
                    
                    long Mudiff = inMu - s->getNuMin(i); 
                    long sigdiff =  inSigma - s->getTau(i);
                        if(k==0)
                        {
                            setneighborY0( (neighbor_id-1), Mudiff+( Mudiff*(inheritor_id==node_id) ) );
                            //Serial <<"\n"<<"Y0 element "<<i<<" is: "<< getneighborY0(i) << "\n ";
                            setneighborZ0( (neighbor_id-1), sigdiff+( sigdiff*(inheritor_id==node_id) ) );
                            //Serial <<"\n"<<"Z0 element "<<i<<" is: "<< getneighborZ0(i) << "\n " ;
                        }
                    inY += Mudiff;                               // add mu from incoming device and subtract last received value
                    s->setNuMin(i,inMu);                                        // save received mu as new nu (nuMin)
                    inZ += sigdiff;                              // add sigma from incoming device and subtract last received value
                    s->setTau(i,inSigma);                                       // save received sigma as new tau
                    

                    //Using min and max consensus, choose a leader and deputy for begining fair split ratio consensus
                    //min consensus
                    if (leader_id < s->getleaderID())
                    {
                        s->setleaderID(leader_id);
                    }
                    //max consensus
                    if (deputy_id > s->getdeputyID())
                    {
                        s->setdeputyID(deputy_id);
                    }


                    node_check[neighbor_id -1] = 1;                      //data was received from a neighbor at this iteration
                    
                }
            }

            if((int((millis() - start)) >= txTime) && !txDone) {
                txDone = true; // toggle txDone
                _broadcastFairSplitPacket_RSL(s);
                
            }
        }

        if(!_quiet) {
           
            delay(10);
        } else {
            delay(25);
        }

        s->setYMin(long(float(s->getYMin())/Dout) + inY);             //problem is here (if inY is zero then this is set to zero)
        s->setMuMin(s->getMuMin() + long(float(s->getYMin())/Dout));
        s->setZ(long(float(s->getZ())/Dout) + inZ);
        s->addToSigma(long(float(s->getZ())/Dout));

        _buffer[count] = float(s->getYMin())/float(s->getZ()); //add kth iterate to buffer
        _bufferY[count] = float(s->getYMin()); //add kth iterate to buffer
        _bufferZ[count] = float(s->getZ()); //add kth iterate to buffer
        //Serial << "Every Iteration Y";
        //Serial << _buffer[count];
        //Serial << "\n";
        count++; 

        //CODE TO IMPROVE RESILIENCY

                
        for(int j=0;j < NUM_REMOTE_VERTICES; j++)
        {
            if(node_check[j] == 0 && node_counter[j] >= 0)
                node_counter[j] += 1;
            else if(node_check[j] == 1 ) 
                node_counter[j] = 0;
            

            
            //Serial << "node_counter ";
            //Serial << j;
            //Serial << " : ";
            //Serial << node_counter[j];
            //Serial << "\n";
            

            if(node_counter[j] >= int(iterations/2) )
            {
                s->setStatus(j, 1);
                s->decrementInDegree();
                uint8_t dout = s->getOutDegree();              //since we assume it is a bidirectional graph, InDegree is equivalent to OutDegree
                s->setOutDegree(dout - 1); 
                node_counter[j] = -1;                          //set counter to -1 when limit reached to indicate offline link status    
            }
            node_check[j] = 0;                                 //reset node_check after each iteration
        }

        /*  old approach
        step_counter = 0;

        for(int j=0;j < no_of_nodes; j++)
        {
            if(online[j])
            {
                if(step_counter > 0)
                {
                     node_counter[j - step_counter] = node_counter[j];
                     _G->AdjustVertexArray(j,step_counter);
                } 
            }
            else
            {
                _G->removeInNeighbor(j);
                step_counter++;
            }
        }
        no_of_nodes = no_of_nodes - step_counter;
        
        */
    }

    if(s->getZ() != 0)
        _buffer[0] = float(s->getYMin())/float(s->getZ()); 

    _buffer[1] = s->getOutDegree();
    _buffer[2] = _G->getN() - 1;

    
    //Serial << "RC from Library";
    //Serial << float(s->getYMin())/float(s->getZ());
    //Serial <<"\n";  
    return float(s->getYMin())/float(s->getZ());
}


// long OAgent_SFC::computeFairSplitFinalValue(float gamma) {
//     OLocalVertex * s = _G->getLocalVertex();
// 	if(gamma <= 0)
// 		return s->getMin();
//     else if(gamma < 1)
//         // if under maximum system capacity
//          return s->getMin() + long(gamma*float(s->getMax()-s->getMin()));
//     else if(gamma >= 1)
//         return s->getMax();    
// }



long OAgent_SFC::fairSplitRatioConsensus_RSL(long y, long z, uint8_t iterations, uint16_t period) {
    srand(analogRead(7));                    //moved this instruction here from fairSplitRatioConsensus() - Sammy
    OLocalVertex * s = _G->getLocalVertex();
    int leader_id = s->getleaderID();
    int node_id = s->getID();
    float gamma = 0;
    Serial<<"Leader ID is: "<<leader_id<<"\n";

    if( ((leader_id==0) || (s->getdeputyID()==0)) && (isLeader()) ) //if leader/deputy ID has not been set and this is the leader node, keep it as the leader node
    {
        s->setleaderID(node_id);
        s->setdeputyID(node_id);
        Serial<<"Node "<<s->getleaderID()<<" is now leader and deputy\n";
    }
    if(s->getleaderID()==node_id)
    {
        gamma = leaderFairSplitRatioConsensus_RSL(y, z, iterations,period);
    }
    else
    {
        gamma = nonleaderFairSplitRatioConsensus_RSL(y, z, iterations,period);
    }
    if (gamma!=-1)
        return gamma;
    else
        return 0;
}




long OAgent_SFC::leaderFairSplitRatioConsensus_RSL(long y, long z, uint8_t iterations, uint16_t period) {
    unsigned long t0 = myMillis();
    unsigned long startTime = t0 + 1200;
    OLocalVertex * s = _G->getLocalVertex();
    float gamma = 0;
    _broadcastScheduleFairSplitPacket(startTime,iterations,period);
    bool scheduled =_WaitForACKPacket_RSL(ACK_START_HEADER,SCHEDULE_TIMEOUT, startTime, iterations, period);

    bool stat = startTime>myMillis();

    //Serial<<"Leader: Startime= "<<startTime<<", Time= "<<myMillis()<<"\n";

    if (!scheduled) 
    {
        Serial<<"No acknowledgements received from neighbors\n";
        s->setleaderID(s->getdeputyID());
        Serial<<"Node "<<s->getleaderID()<<" is the new leader\n";
        gamma = -1;     //in a rare turn of events, this line could lead to a recursion (Olaolu)
        delay(1000);
    }
    else
    {
        float gamma = 0;
        _buffer[2] = 0;
        if(_waitToStart(startTime,true,1800))
        {
            gamma = ratiomaxminConsensus(y, z, iterations,period);
        }
    }        
    return gamma;
}

long OAgent_SFC::nonleaderFairSplitRatioConsensus_RSL(long y, long z, uint8_t iterations, uint16_t period) {
    unsigned long startTime = 0;
    OLocalVertex * s = _G->getLocalVertex();
    uint8_t id = s->getID();
    float gamma = 0;
    bool scheduled = _waitForScheduleFairSplitPacket_RSL(startTime,iterations,period,id,SCHEDULE_TIMEOUT*3);

    bool stat = startTime>myMillis();
    //Serial<<"Startime > Time? "<<stat<<"\n";

    //Serial<<"NonLeader: Startime= "<<startTime<<", Time= "<<myMillis()<<"\n";

    if(scheduled)
    {
        float gamma = 0;
        if(_waitToStart(startTime,true,1800)) {
            gamma = ratiomaxminConsensus(y, z, iterations,period);
        }
        
        //digitalWrite(48,LOW);
    }
    else
    {
        Serial<<"No schedule received from Node "<<s->getleaderID()<<"\n";
        s->setleaderID(s->getdeputyID());
        Serial<<"Node "<<s->getleaderID()<<" is the new leader\n";
        gamma = -1;
        delay(1000);
    }
    return gamma;
}



long OAgent_SFC::leaderFairSplitRatioConsensus(long y, long z, uint8_t iterations, uint16_t period) {
    srand(analogRead(7));                    //moved this instruction here from fairSplitRatioConsensus() - Sammy
    unsigned long t0 = millis(); 
    unsigned long startTime = t0 + 1200;                         //was 1200 initially
    _broadcastScheduleFairSplitPacket(startTime,iterations,period);
    _WaitForACKPacket(ACK_START_HEADER, t0, startTime, iterations, period);
    float gamma = 0;
    _buffer[2] = 0;
    if(_waitToStart(startTime,false,1800)) {
        gamma = fairSplitRatioConsensus(y, z, iterations,period);
    }
    return gamma;
}

long OAgent_SFC::nonleaderFairSplitRatioConsensus(long y, long z) {
    srand(analogRead(7));
    unsigned long startTime = 0;
    uint8_t iterations = 0;
    uint16_t period = 0;
    OLocalVertex * s = _G->getLocalVertex();
    uint8_t id = s->getID();
    _waitForScheduleFairSplitPacket(startTime,iterations,period,id);
    digitalWrite(48,HIGH);
    // long final = initial;
    
    float gamma = 0;
    if(_waitToStart(startTime,true,1800)) {
        gamma = fairSplitRatioConsensus(y, z, iterations,period);
    }
    digitalWrite(48,LOW);
    return gamma;
}


// End fair splitting
/// End ratio-consensus
/// Optimal dispatch
long OAgent_SFC::optimalDispatch(long x, uint8_t iterations, uint16_t period) {
 	OLocalVertex * s = _G->getLocalVertex();           // store pointer to local vertex object
    uint8_t Dout = s->getOutDegree() + 1;       // store out degree
    //Serial << "Out-degree: " << _DEC(Dout) << endl;
    _initializeOptimalDispatch(s,x);            // initialize state variables
    delay(20);
    bool txDone;                                // create variable to keep track of broadcasts
    uint16_t txTime = _genTxTime(period,5);     // time to broadcast packet
    for(uint8_t k = 0; k < iterations; k++) {
        // initialize toggle to keep track of broadcasts
        txDone = false;  
        // initialize timer   
        _start_millis = millis();   
        // do for iteration period
        while(uint16_t(millis()-_start_millis) < period) {
            // look for optimal dispatch packet
            if(_optimalDispatchPacketAvailable()) {
            	// index of in-neighbor packet received from
            	uint8_t i;
                // check if sender is in-neighbor
                uint32_t rv = _rx->getRemoteAddress64().getLsb();
                if(_G->isInNeighbor(rv,i)) {
                    // process optimal dispatch packet
					//Serial << _MEM(PSTR("packet from: ")) << _DEC(i) << endl;
                    _processOptimalDispatchPacket(s,_G->getRemoteVertex(i)->getIndex());
                }
            // check if time to transmit and if transmit has already occured
            } else if(_timeToTransmit(_start_millis,txTime) && !txDone) {
                // toggle txDone
                txDone = true; 
                // broadcast optimal dispatch packet
                _broadcastOptimalDispatchPacket(s);
            }
            delay(5);
        }
#ifdef VERBOSE
        if(!_quiet) {
            _printStates(s,k,true);
            //delay(30);
        } else {
            delay(15);
        }
#endif
		delay(15);
        // update all states (z = z/Dout + zIn, etc)
        _updateOptimalDispatchStates(s,Dout);
        // clear all incoming states before next iteration
        _G->clearAllInStates();
    }
#ifdef VERBOSE
    uint8_t states = 2*(_G->getN());
    float ratios[states];
    _computeFinalOptimalDispatchRatios(s,ratios);
    if(!_quiet)
        _printRatios(ratios,states);
	_printStates(s,iterations,false);
	_printLambdas(s);
#endif
    long lambdaStar = _findLambdaStar(s);
	delay(15);
    //Serial << _MEM(PSTR("lambda* = ")) << _DEC(lambdaStar) << endl;
    return s->g(lambdaStar);
}


/// End optimal dispatch
/// Synchronization methods
bool OAgent_SFC::sync(uint8_t attempts) {
    
    if(_leader) {
    	//Serial << "in sync";
		for(uint8_t i = 0; i < attempts; i++) {
			if(_leaderSync()) {
                _synced = true;
				return true;
			}
			delay(SYNC_RETRY_PERIOD); //SYNC_RETRY_PERIOD = 250ms
		}    
    } else {
    	//Serial << " in sync";
    	unsigned long tTwo;
    	int i = _waitForSyncBeginPacket(tTwo); //it will wait here until it receives a sync or resync packet 
     	if(i == 1) {
            //Serial << "Sync Begin packet received \n";
    		if(_isTargetNode())
            {
                //Serial << "Target Node \n";
    			return _targetSync(tTwo);
            }
    		else
    			return _nonTargetSync(tTwo);
    	}
    	else if(i == 2)
    	{
    		uint8_t ptr = 2;
    	    long global_offset = _getLongFromPacket(ptr);   //offset between synced node and leader node
    		unsigned long nodeid = _getUint32_tFromPacket(ptr); //node id of synced node
    		unsigned long period = _getUint32_tFromPacket(ptr);

    		unsigned long start = millis();

    		while(millis() - start < period)
    		{
    			//JUST WAIT UNTIL PERIOD IS OVER
    		}
    		//Serial << "Recieved ID: ";
    		//Serial << nodeid;
    		//Serial << "\n";
    		//Serial << "Response packet sent";
    		//Serial << "\n";

    		_broadcastResyncResponsePacket(tTwo,nodeid);

    		if(_waitForResyncFinalPacket(RESYNC_TOTAL_TIME)) {
			// T = t + d + t2 - t2'
    		//Serial << "Final Packet received";
    		//Serial << "\n";
        	uint8_t ptr = 2;
        	long local_offset = _getLongFromPacket(ptr);
			_offset = global_offset + local_offset;
            //Serial<<"Offset= "<<getoffsetdata()<<"\n";
            //_offset = local_offset; //SN Debug to just see local offset
			_synced = true;
			return true;
			}
    	}
    }
    return false;
}

//////////////////////////* RESYNC CODE*//////////////////////////////

bool OAgent_SFC::resync(){
	OLocalVertex * s = _G->getLocalVertex(); // store pointer to local vertex 
	unsigned long nodeid = s->getID();
	unsigned long start_time = millis();
    unsigned long t = millis() - start_time; 
    bool transmit = false;
    int txtime;
    unsigned long t4;
    unsigned long t1;

    txtime = rand()%RESYNC_BROADCAST_TIME;

	while(t < RESYNC_BROADCAST_TIME)
	{
		

		t = millis() - start_time;
		
		if(t >= txtime && transmit == false)
		{
			transmit = true;
			t1 = _broadcastResyncBeginPacket(RESYNC_BROADCAST_TIME - t);  //period to wait before responding, t1 is the time packet was sent
			//Serial << "Time broadcasted: ";
			//Serial << t;
			//Serial << "\n";
		}
	}

	if(_waitForResyncPacketResponse(t4, RESYNC_TOTAL_TIME - RESYNC_BROADCAST_TIME))   //t4 is the time the response packet was received, waiting timeout
	{	
		
		uint8_t ptr = 2;
		unsigned long t2 = _getUint32_tFromPacket(ptr);
		unsigned long received_id =  _getUint32_tFromPacket(ptr);  //ptr updates by 4 (4 bytes have been read) within _getUint32_tFromPacket()
		unsigned long t3 = _getUint32_tFromPacket(ptr);
		//Serial << "ID: ";
		//Serial << received_id;
		//Serial << "\n";
		if(nodeid == received_id)
		{
			//Serial << "Received Response & broadcasted final packet";
			//Serial << "\n";
			long local_offset = long(t2 + t3 - t1 - t4)/long(2);
            /*SN Debug
            Serial <<"t1 :"; 
            Serial << t1;
            Serial << "\n";
            Serial <<"t2 :"; 
            Serial << t2;
            Serial << "\n";
            Serial <<"t3 :"; 
            Serial << t3;
            Serial << "\n";
            Serial <<"t4 :"; 
            Serial << t4;
            Serial << "\n";
            
            //SN Debug */
            Serial << "long Local offset \n";
			Serial << local_offset;
            Serial << "\n";
            _broadcastResyncFinalPacket(local_offset);
			return true;	
		}
		
	}

	return false;

}


unsigned long OAgent_SFC::_broadcastResyncBeginPacket(unsigned long period){

	uint16_t payload[7];
	long offset = _offset;
	OLocalVertex * s = _G->getLocalVertex(); // store pointer to local vertex 
	unsigned long id = s->getID();

	payload[0] = RESYNC_HEADER;
	_addUint32_tToPayload(uint32_t(offset),((uint8_t * )(&payload)),2);
	_addUint32_tToPayload(uint32_t(id),((uint8_t * )(&payload)),6);
	_addUint32_tToPayload(uint32_t(period),((uint8_t * )(&payload)),10);

	_zbTx = ZBTxRequest(_broadcastAddress,((uint8_t *)(&payload)),sizeof(payload));
    // send packet without timestamp and return time packet was sent
    return _xbee->sendTwo(_zbTx,false,true);

}


void OAgent_SFC::_broadcastResyncResponsePacket(unsigned long t2, unsigned long received_id){

	uint16_t payload[5];
	payload[0] = RESYNC_RESPONSE_HEADER;
	_addUint32_tToPayload(uint32_t(t2),((uint8_t * )(&payload)),2);
	_addUint32_tToPayload(uint32_t(received_id),((uint8_t * )(&payload)),6);

	_zbTx = ZBTxRequest(_broadcastAddress,((uint8_t *)(&payload)),sizeof(payload));
    // send packet without timestamp and return time packet was sent
    _xbee->sendTwo(_zbTx,true,false);

}


bool OAgent_SFC::_waitForResyncPacketResponse(unsigned long &rxTime, uint16_t timeout){

	return _waitForPacket(RESYNC_RESPONSE_HEADER, rxTime, true, timeout);      //assuming response is broadcasted from unsynced not
}

bool OAgent_SFC::_waitForResyncFinalPacket(unsigned long timeout){

	return _waitForPacket(RESYNC_HEADER_FINAL, false, timeout);
}

void OAgent_SFC::_broadcastResyncFinalPacket(long offset){

	uint16_t payload[3];
	payload[0] = RESYNC_HEADER_FINAL;
	_addUint32_tToPayload(uint32_t(offset),((uint8_t * )(&payload)),2);
	_zbTx = ZBTxRequest(_rx->getRemoteAddress64(),((uint8_t *)(&payload)),sizeof(payload));

    return _xbee->send(_zbTx);

}

////////////////////////////////////////////////

unsigned long OAgent_SFC::myMillis() { 
	return millis() - (unsigned long)_offset; 
}

void OAgent_SFC::_initializeFairSplitting(OLocalVertex * s, long y, long z) {
    _G->clearAllStates();                   // clear everything
    uint8_t Dout = s->getOutDegree() + 1;   // store out degree

    // added in by Olaolu. If a node i is out, forloop adds (1/Dout_i) of its initial value
    for (int i=0; i< NUM_REMOTE_VERTICES; i++){
    	if ((s->getStatus(i)) == 1){
    		y = y + getneighborY0(i);
            z = z + getneighborZ0(i);
    	}
    }   
    s->setYMin(y - s->getMin());            // set initial y value (using yMin) [y - min]
    //Serial << "\nNode "<<s->getID()<<"'s' Y[0] is: "<<s->getYMin()<<"\n";
    s->setMuMin(s->getYMin()/Dout);         // Initialize mu = y/
    s->setZ(z - s->getMin());     // set initial z value [z - min]
    //Serial << "\nNode "<<s->getID()<<"'s' Z[0] is: "<<s->getZ()<<"\n";
    s->setSigma(s->getZ()/Dout);            // Initialize sigma = z/Dout
}

// Resilient version
void OAgent_SFC::_initializeFairSplitting_RSL(OLocalVertex * s, long y, long z) {
    _G->clearAllStates();                   // clear everything
    uint8_t Dout = s->getOutDegree() + 1;   // store out degree

    for (int i=0; i< NUM_REMOTE_VERTICES; i++){
        if ((s->getStatus(i)) == 1){
            y = y + getneighborY0(i);
            z = z + getneighborZ0(i);
        }
    }   
    s->setYMin(y - s->getMin());            // set initial y value (using yMin) [y - min]
    s->setMuMin(s->getYMin()/Dout);         // Initialize mu = y/
    s->setZ(z - s->getMin());     // set initial z value [z - min]
    s->setSigma(s->getZ()/Dout);            // Initialize sigma = z/Dout

    //initialize min and max consensus. Min consensus is used to choose leader, max consensus is used to choose deputy
    s->setleaderID(s->getID());
    s->setdeputyID(s->getID());
}

void OAgent_SFC::_broadcastFairSplitPacket(OLocalVertex * s) {   
    uint16_t payload[7];           
    long mu    = s->getMuMin();
    long sigma = s->getSigma();
    uint16_t id = s->getID();
    uint16_t inheritorID = s->chooseInheritor();

    payload[0] = FAIR_SPLITTING_HEADER;
    payload[1] = mu;
    payload[2] = mu >> 16;
    payload[3] = sigma;
    payload[4] = sigma >> 16;
    payload[5] = id;
    payload[6] = inheritorID;   //added in by Olaolu

    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload)); // create zigbee transmit class
    unsigned long txTime = _xbee->sendTwo(_zbTx,false,true); // transmit with time stamp
#ifdef VERBOSE
    Serial << _MEM(PSTR("Transmit time: ")) << txTime << endl;
#endif
}

//leaderfailure-resilient version (Olaolu)
void OAgent_SFC::_broadcastFairSplitPacket_RSL(OLocalVertex * s) {   
    uint16_t payload[9];           
    long mu    = s->getMuMin();
    long sigma = s->getSigma();
    uint16_t id = s->getID();
    uint16_t inheritorID = s->chooseInheritor();
    uint16_t leaderID = s->getleaderID();
    uint16_t deputyID = s->getdeputyID();

    payload[0] = FAIR_SPLITTING_HEADER;
    payload[1] = mu;
    payload[2] = mu >> 16;
    payload[3] = sigma;
    payload[4] = sigma >> 16;
    payload[5] = id;
    payload[6] = inheritorID;   //added in by Olaolu
    payload[7] = leaderID;   //added in by Olaolu
    payload[8] = deputyID;   //added in by Olaolu

    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload)); // create zigbee transmit class
    unsigned long txTime = _xbee->sendTwo(_zbTx,false,true); // transmit with time stamp
#ifdef VERBOSE
    Serial << _MEM(PSTR("Transmit time: ")) << txTime << endl;
#endif
}

long OAgent_SFC::_getMuFromPacket() {
    uint8_t ptr = 2;
    return _getUint32_tFromPacket(ptr);
}

long OAgent_SFC::_getSigmaFromPacket() {
    uint8_t ptr = 6;
    return _getUint32_tFromPacket(ptr);
}

/// End fair splitting ratio-consensus methods

/// Optimal dispatch methods
void OAgent_SFC::_initializeOptimalDispatch(OLocalVertex * s, long x) {
    // clear all algorithm states (yMin, yMax, z)
    // clear all robust states (nuMin, nuMax, tau)
    // clear all incoming states (yMinIn, yMaxIn and zIn)
    // clear all broadcast states (muMin, muMax and sigma)
    // clear all remote vertex lambdaMin and lambdaMax
    _G->clearAllStates();
    // initialize ymin and ymax of local vertex
    s->initializeYMinYMax();
    // initialize muMin and muMax of local vertex
    s->initializeMuMinMuMax();
    // initialize z     
    s->setZ(x);
    // initialize sigma
    s->initializeSigma();
	// cheat by initializing assuming we have all lambdas
	for(uint8_t i=1; i < _G->getN(); i++) {
		OVertex * r = _G->getVertexByUniqueID(i);
		//Serial << _DEC(r->getLambdaMin()) << endl;
		//Serial << _DEC(r->getLambdaMax()) << endl;
		r->setYMinYMax(s->g(r->getLambdaMin()),s->g(r->getLambdaMax()));
		r->setMuMinMuMax(r->getYMin()/(s->getOutDegree()+1),r->getYMax()/(s->getOutDegree()+1));
	}
}

void OAgent_SFC::_updateOptimalDispatchStates(OLocalVertex * s, uint8_t Dout) {
    // update 
    s->updateZ();
    s->updateSigma();
    // update yMin and yMax for each remote vertex
    for(uint8_t i = 0; i < _G->getN(); i++) {
    	_G->getVertexByUniqueID(i)->updateYMinYMax(Dout);
    	_G->getVertexByUniqueID(i)->updateMuMinMuMax(Dout);
    }
}

long OAgent_SFC::_findLambdaStar(OLocalVertex * s) {
    float min = 0;
    float max = 1000000;
    long lambdaMinus;
    long lambdaPlus;
	//float base = s->getBase();
    long z = s->getZ();
    for(uint8_t i = 0; i < _G->getN(); i++)
        _updateLambdaMinLambdaMax(_G->getVertexByUniqueID(i),z,min,max,lambdaMinus,lambdaPlus);
	//Serial << "+:" << _DEC(lambdaPlus) << ", -:" << _DEC(lambdaMinus) << endl << "max:" << _FLOAT(max,3) << ", min:" << _FLOAT(min,3) << endl;

	return lambdaPlus - long((max-float(1))*(float(lambdaPlus-lambdaMinus))/(max-min));
	// Serial << "lambdaStar: " << _DEC(lambdastar) << endl;
	//     return lambdaPlus - long((max-float(1))*float((lambdaPlus-lambdaMinus)/s->getBase())/(max-min))*s->getBase();
}

void OAgent_SFC::_updateLambdaMinLambdaMax(OVertex * v, long &z, float &min, float &max, long &lambdaMinus, long &lambdaPlus) {
    uint8_t rsp;
    rsp = _checkRatio(min,max,_computeRatio(v->getYMin(),z));
    if(rsp == 1)
        lambdaMinus = v->getLambdaMin();
    else if(rsp == 2)
        lambdaPlus = v->getLambdaMin();
    rsp = _checkRatio(min,max,_computeRatio(v->getYMax(),z));
    if(rsp == 1)
        lambdaMinus = v->getLambdaMax();
    else if(rsp == 2)
        lambdaPlus = v->getLambdaMax();
}

uint8_t OAgent_SFC::_checkRatio(float &min, float &max, float ratio) {
    if(ratio < 1 && ratio > min) {
        min = ratio;
        return 1;
    } else if(ratio > 1 && ratio < max) {
        max = ratio;
        return 2;
    }
    return 0;
}

void OAgent_SFC::_computeFinalOptimalDispatchRatios(OLocalVertex * s, float ratios[]) {
    long z = s->getZ();
    for(uint8_t i = 0; i < _G->getN(); i++) {
        ratios[2*i]   = _computeRatio(_G->getVertexByUniqueID(i)->getYMin(),z);
        ratios[2*i+1] = _computeRatio(_G->getVertexByUniqueID(i)->getYMax(),z);;
    }
}

//float OAgent_SFC::_computeRatio(long num, long dem) {
//    return float(num)/float(dem);
//}

void OAgent_SFC::_findMinRatioMaxRatio(float ratios[], uint8_t num, float &min, float &max) {
    min = 0;
    max = 1000000;
    for(uint8_t i = 0; i < num; i++) {
        if(ratios[i] < 1 && ratios[i] > min)
            min = ratios[i];
        else if(ratios[i] > 1 && ratios[i] < max)
            max = ratios[i];
    }
}

void OAgent_SFC::_broadcastOptimalDispatchPacket(OLocalVertex * s) {
    uint8_t p = _getPayloadSize();
    uint8_t payload[p];
#ifdef VERBOSE
    Serial << "packet bytes: " << _DEC(p) << endl;
#endif
    uint8_t ptr = 0;  // pointer to next open position in payload array
    payload[0] = OPTIMAL_DISPATCH_HEADER;
    payload[1] = OPTIMAL_DISPATCH_HEADER >> 8;
    ptr = 2;          // account for header
    // add sigma to payload
    ptr = _addUint32_tToPayload(s->getSigma(),payload,ptr);
    // add broadcast states (muMin and muMax) and (optionally) lamdbaMin and lambdaMax to payload for all vertices
    for(uint8_t i = 0; i < (_G->getN()); i++) {
        ptr = _addDataToPayload(_G->getVertexByUniqueID(i),payload,ptr);
    }
#ifdef VERBOSE
    Serial << "payload: 0x"; 
    for(uint8_t i = 0; i < p; i++) {
        Serial << _HEX(payload[i]);
    }
    Serial << endl;
#endif
    // put payload in zigbee transmit object
    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), p); 
    // transmit packet
    _xbee->send(_zbTx);
}

uint8_t OAgent_SFC::_getPayloadSize() {
	// get total number of devices
    uint8_t n = _G->getN();        
    // get number of lambdas to include in payload
    uint8_t l = _getNumberLambdaMinMax();
	//Serial << _MEM(PSTR("l=")) << _DEC(l) << endl;
    // header + sigma + (address lsb + subheader + muMin + muMax) * devices + (lambda min + lambda max) * lambdas
    return 2 + 4 + (4+1+4+4)*n + (4+4)*l;     
}

/*
 *
 * Returns the number of vertices that have valid lambda min and max that have not
 * yet been broadcasted.
 *
 */
uint8_t OAgent_SFC::_getNumberLambdaMinMax() {
    // initialize counter
    uint8_t l = 0;
    // check each vertex
    for(uint8_t i = 0; i < (_G->getN()); i++) {
    	if(_G->getVertexByUniqueID(i)->unsentValidLambda())
    		l++;
    }    
    return l;
}


uint8_t OAgent_SFC::_addDataToPayload(OVertex * v, uint8_t payload[], uint8_t ptr) {
    // get address lsb and put in playload
    ptr = _addUint32_tToPayload(v->getAddressLsb(),payload,ptr);
    // create byte to store subheader
    uint8_t subheader;
    // get state of broadcast lambda
    bool bl = v->unsentValidLambda();
    // determine if lambdaMin and lambdaMax of this vertex should be broadcast
    if(bl)
        subheader = INCLUDE_LAMBDA_MIN_MAX_SUBHEADER;
    else 
        subheader = NO_LAMBDA_MIN_MAX_SUBHEADER;
    // add subheader to payload
    payload[ptr] = subheader;
    // increment payload pointer
    ptr++;
    // put muMin in payload
    ptr = _addUint32_tToPayload(v->getMuMin(),payload,ptr);
    // put muMax in payload
    ptr = _addUint32_tToPayload(v->getMuMax(),payload,ptr);
    if(bl) {
		//Serial << _MEM(PSTR("includes lambdas")) << endl;
        ptr = _addUint32_tToPayload(v->getLambdaMin(),payload,ptr);
        ptr = _addUint32_tToPayload(v->getLambdaMax(),payload,ptr);
        v->incrementBroadcastLambda();
    }
    return ptr;
}

uint8_t OAgent_SFC::_addUint32_tToPayload(uint32_t data, uint8_t payload[], uint8_t ptr) {
    //Serial << "byte to payload: " << _DEC(data) << endl;
    payload[ptr]    = data;
    payload[ptr+1]  = data >> 8;
    payload[ptr+2]  = data >> 16;
    payload[ptr+3]  = data >> 24;
    return ptr + 4;
}

void OAgent_SFC::_processOptimalDispatchPacket(OLocalVertex * s, uint8_t i) {
    // Initialize pointer for traversing packet (header is first two bytes)
    uint8_t ptr = 2;
    long inData;
    // get sigma from packet
    inData = _getLongFromPacket(ptr);
    // add (sigma - tau) to zIn
    s->addToZIn(inData - (s->getTau(i)));
    // save received sigma as new tau to sender object
    s->setTau(i,inData);
    // variable to store address lsb from packet
    uint32_t inLsb;
    // variable to store subheader
    uint8_t subheader;
    // Do for each vertex since there are 2*n states
    for(uint8_t j = 0; j < _G->getN(); j++) {
        // get address lsb from packet
        inLsb = _getUint32_tFromPacket(ptr);
        // variable to store unique id of vertex
        // get pointer to vertex object and unique id of vertex
        OVertex * v = _G->getVertexByAddressLsb(inLsb);
        // get subheader from packet
        subheader = _getUint8_tFromPacket(ptr);
        // get muMin from packet
        inData = _getLongFromPacket(ptr);
        // add (muMin - nuMin) to yMinIn
        v->addToYMinIn(inData - (v->getNuMin(i)));
        // save received muMin as new nuMin to sender object
        v->setNuMin(i,inData);
        // get muMax from packet
        inData = _getLongFromPacket(ptr);
        // add (muMax - nuMax) to yMaxIn
        v->addToYMaxIn(inData - (v->getNuMax(i)));
        // save received muMax as new nuMax to sender object
        v->setNuMax(i,inData);
        // check if lambdas are included in packet
        if(subheader == INCLUDE_LAMBDA_MIN_MAX_SUBHEADER) {
        	// check if already have lambdaMin and lambdaMax
        	if(v->getLambdaMin() == 0 && v->getLambdaMax() == 0) {
    			// get lambdaMin from packet
    			inData = _getLongFromPacket(ptr);
    			// save lambdaMin
    			//v->setLambdaMin(inData);
    			// add g(lambdaMin) to yMinIn
    			//v->addToYMinIn(s->g(inData));
    			// get lambdaMax from packet
    			inData = _getLongFromPacket(ptr);
    			// save lambdaMax
    			//v->setLambdaMax(inData);
    			// add g(lambdaMax) to yMaxIn
    			//v->addToYMaxIn(s->g(inData));
        	} else {
        		// ignoring lambdas since we already have them
        		ptr += 8;
        	}
        }
    }
}

void OAgent_SFC::_printFinalYMinYMax(OLocalVertex * s) {
    for(uint8_t i = 0; i < _G->getN(); i++)
        Serial << _DEC(i) << " yMin: " << _DEC(_G->getVertexByUniqueID(i)->getYMin()) << ", yMax: " << _DEC(_G->getVertexByUniqueID(i)->getYMax()) << endl;
}

void OAgent_SFC::_printStates(OLocalVertex * s, uint8_t k, bool printY) {
    uint8_t nodeNum = 1;
    //Serial << _MEM(PSTR("z(")) << (k+1) << _MEM(PSTR(",")) << _DEC(nodeNum) << _MEM(PSTR(") = ")) << _DEC(s->getZ()) << endl;
    if(printY == true) {
        for(uint8_t i = 0; i < _G->getN(); i++) {
            //Serial << _MEM(PSTR("y")) << (i+1) << _MEM(PSTR("Min(")) << (k+1) << _MEM(PSTR(",")) << _DEC(nodeNum) << _MEM(PSTR(") = ")) << _DEC(_G->getVertexByUniqueID(i)->getYMin()) << _MEM(PSTR(";")) << endl;
            //Serial << _MEM(PSTR("y")) << (i+1) << _MEM(PSTR("Max(")) << (k+1) << _MEM(PSTR(",")) << _DEC(nodeNum) << _MEM(PSTR(") = ")) << _DEC(_G->getVertexByUniqueID(i)->getYMax()) << _MEM(PSTR(";")) << endl;
        }
    }
}

void OAgent_SFC::_printLambdas(OLocalVertex * s) {
    uint8_t nodeNum = 1;
    for(uint8_t i = 0; i < _G->getN(); i++) {
        //Serial << _MEM(PSTR("lambda")) << (i+1) << _MEM(PSTR("Min(")) << _DEC(nodeNum) << _MEM(PSTR(") = ")) << _DEC(_G->getVertexByUniqueID(i)->getLambdaMin()) << _MEM(PSTR(";")) << endl;
        //Serial << _MEM(PSTR("lambda")) << (i+1) << _MEM(PSTR("Max("))  << _DEC(nodeNum) << _MEM(PSTR(") = ")) << _DEC(_G->getVertexByUniqueID(i)->getLambdaMax()) << _MEM(PSTR(";")) << endl;
    }
}
//#ifdef VERBOSE

void OAgent_SFC::_printRatios(float ratios[], uint8_t num) {
    for(uint8_t i = 0; i < num; i++)
        Serial << _FLOAT(ratios[i],3) << endl;
}

//#endif

/// End optimal dispatch methods

/// General xbee methods

/*
 * This function verifies the validity of an xbee packet.
 * It first checks to see if a packet is available then verifies that it is a zigbee rx packet.
 * If the packet it is valid the function will return true and it will store the response in the
 * ZBRxResponse parameter.
 */
bool OAgent_SFC::_validPacketAvailable() {
	if(_xbee->getResponse().isAvailable()) {	// packet is available
        // check if recieved data is a zb rx packet
        
		if(_xbee->getResponse().getApiId() == ZB_RX_RESPONSE) { 
#ifdef VERBOSE
            if(!_quiet)
                Serial << _MEM(PSTR("Valid XBee packet received")) << endl;
#endif
			_xbee->getResponse().getZBRxResponse(_rx);       // fill out zb rx class
			return true;
		}
	}
	return false;
}

bool OAgent_SFC::_packetAvailable(uint16_t header, bool broadcast) {
    // read packet
    _xbee->readPacket();
    return _packetAvailableHelper(header,broadcast);
}

bool OAgent_SFC::_packetAvailable(uint16_t header,  unsigned long &rxTime, bool broadcast) {
    // read packet and save rx time
    rxTime = _xbee->readPacketTwo(true);
    //Serial << "\n Before packetAvailableHelper \n";
    return _packetAvailableHelper(header,broadcast);
}

uint16_t OAgent_SFC::_packetAvailable(bool broadcast) {
    _xbee->readPacket();
    if(_validPacketAvailable()) {
        if(((broadcast == true) && ((_rx->getOption() & 0x0F) == ZB_BROADCAST_PACKET)) || ((broadcast == false) && ((_rx->getOption() & 0x0F) == ZB_PACKET_ACKNOWLEDGED)))
            return _getHeaderFromPacket();
    }
    return 0x0;
}


bool  OAgent_SFC::_packetAvailable2(unsigned long &rxTime, bool broadcast){

	rxTime = _xbee->readPacketTwo(true);

	if(_validPacketAvailable()) {
        if(((broadcast == true) && ((_rx->getOption() & 0x0F) == ZB_BROADCAST_PACKET)) || ((broadcast == false) && ((_rx->getOption() & 0x0F) == ZB_PACKET_ACKNOWLEDGED)))
            return true;
    }
}


 
bool OAgent_SFC::_packetAvailableHelper(uint16_t header, bool broadcast) {
    //SerialUSB << "Here1\n";
    if(_validPacketAvailable()) {
        //SerialUSB << "HERE\n";
        //SerialUSB << _HEX(_getHeaderFromPacket());
        //SerialUSB << "\n";
        if(_getHeaderFromPacket() == header) {
            
            //SerialUSB << _HEX(_rx->getOption());
            //SerialUSB << "\n";
        	if(((broadcast == true) && ((_rx->getOption() & 0x0F) == ZB_BROADCAST_PACKET)) || ((broadcast == false) && ((_rx->getOption() & 0x0F) == ZB_PACKET_ACKNOWLEDGED)))
            {
                //Serial << "Packet conditions met \n";
	            return true;
            }
        }
    }
    return false; 
}

bool OAgent_SFC::_packetACKed(int timeout) {
	if(_xbee->readPacket(timeout)) { // wait for up to ack timeout period
		if(_xbee->getResponse().getApiId() == ZB_TX_STATUS_RESPONSE) { // got a response
			_xbee->getResponse().getZBTxStatusResponse(_txStatus); // fill out status
            if (_txStatus.getDeliveryStatus() == SUCCESS) { // msg was acked
				return true;
			}
		}
	}
	return false;
}

/*
 * This function returns the two byte header of an xbee packet.  The header should be
 * in the first 2 bytes of the received packet.
 */
//uint16_t OAgent_SFC::_getHeaderFromPacket() {
//	return (uint16_t(_rx->getData(1)) << 8) + _rx->getData(0);
//}

bool OAgent_SFC::_waitForPacket(uint16_t header, unsigned long &rxTime, bool broadcast, int timeout) {
    unsigned long start;

	if(timeout != -1)
		start = millis();
	while(true) {
		if((timeout != -1) && (millis()-start >= timeout))
			return false;
		if(_packetAvailable(header,rxTime,broadcast))
        {
			return true;
        }
	}
}

bool OAgent_SFC::_waitForPacket(uint16_t header, bool broadcast, int timeout) { //Where it stays in an endless loop (if timeout =-1) until packet received
	unsigned long start;
    if(timeout != -1)
		start = millis();
	while(true) {
		if((timeout != -1) && (millis()-start >= timeout))
			return false;
		if(_packetAvailable(header,broadcast))    //unless the packet contains the expected header it will keep waiting
			return true;
	}
}

int  OAgent_SFC::_waitForPacket2(uint16_t header1, uint16_t header2, unsigned long &rxTime, bool broadcast){

	while(true){

		if(_packetAvailable2(rxTime,broadcast))
        {

			if(_getHeaderFromPacket() == header1)
				return 1;
			else if(_getHeaderFromPacket() == header2){
				uint32_t aLsb = _rx->getRemoteAddress64().getLsb();
				//Serial << "Address: ";
				//Serial << _HEX(aLsb);
				//Serial << "\n";
                if(_G->isInNeighbor(aLsb))
                {
                	//Serial << "Packet received";
                	//Serial << "\n";
                	return 2;
                }
			}
        }
	}	

}

uint16_t OAgent_SFC::_waitForValidPacket(bool broadcast, int timeout) {
    unsigned long start;
    // if using timeout, initialize clock
	if(timeout != -1)
		start = millis();
    // do forever
	while(true) {
        // if using timeout and time has elapsed, return 0x0
		if((timeout != -1) && (millis()-start >= timeout))
			return 0x0;
        // look for packet and save header
        uint16_t rsp = _packetAvailable(broadcast);
        // if packet with valid header is available, return it
		if(rsp != 0x0)
            return rsp;
	}
}

/// End general xbee methods
/// General scheduling methods

bool OAgent_SFC::_waitToStart(unsigned long startTime, bool useMyMillis, int timeout) {
    long temp;
    unsigned long s = millis();
    while(true) {
        if(useMyMillis == true) {
            temp = startTime - (myMillis());
            if(temp <= 0)
                return true;
        } else {
            temp = startTime - millis(); 
            if(temp <= 0)
                return true;
        }
        if(timeout != -1) {
            temp = millis()-s;
            if(temp > timeout)
                return false;
        }
    }    
}

/// End general scheduling methods
/// General coordination helper functions

/*
 * This function generates a random transmit time given an iteration period and inter-frame spacing.
 * The current time in milliseconds is used as the seed for the random number generation.
 */
uint16_t OAgent_SFC::_genTxTime(uint16_t iterationPeriod, uint8_t ITF) {
	srand(analogRead(0));
	return (rand() % (iterationPeriod - 2*ITF)) + ITF;
}

/*
 * This function generates a random transmit time given an iteration period and inter-frame spacing.
 * A seed for the random number generation is accepted as an argument.
 */
uint16_t OAgent_SFC::_genTxTime(uint16_t iterationPeriod, uint8_t ITF, int seed) {
	srand(seed);
	return (rand() % (iterationPeriod - 2*ITF)) + ITF;
}

bool OAgent_SFC::_timeToTransmit(uint16_t startTime, uint16_t txTime) {
    if((int((millis() - startTime)) >= txTime))
        return true;
    else
        return false;
}

void OAgent_SFC::_broadcastSchedulePacket(uint16_t header, unsigned long startTime, uint8_t numIterations, uint16_t period) {
    uint8_t payload[9];
    // put header in payload array
    payload[0] = header;
    payload[1] = header >> 8;
    // put start time in payload array
    payload[2] = startTime;
    payload[3] = startTime >> 8;
    payload[4] = startTime >> 16;
    payload[5] = startTime >> 24;
    // put number of iterations in payload array
    payload[6] = numIterations;
    // put iteration period in payload array
    payload[7] = period;
    payload[8] = period >> 8;
    // put payload in zigbee transmit object
    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload)); 
    // transmit packet
    _xbee->send(_zbTx);
}

void OAgent_SFC::_waitForSchedulePacket(uint16_t header, unsigned long &startTime, uint8_t &iterations, uint16_t &period, uint8_t id, int timeout) {
    if(_waitForPacket(header,true,timeout)) {  //stays in loop until desired packet received
		if(header == SCHEDULE_FAIR_SPLIT_HEADER || header == SCHEDULE_OPTIMAL_DISPATCH_HEADER) {
			startTime   = _getStartTimeFromPacket();
			iterations  = _getIterationsFromPacket();
			period      = _getPeriodFromPacket();
            
            
                uint16_t txtime;
                txtime = rand()%50;    //so that transmission occurs at different points in time per node
                delay(txtime);
                _broadcastACKPacket(ACK_START_HEADER,id);    
                
            
		}
	}
}

bool OAgent_SFC::_waitForSchedulePacket_RSL(uint16_t header, unsigned long &startTime, uint8_t &iterations, uint16_t &period, uint8_t id, int timeout) {
    if(_waitForPacket(header,true,timeout)) {  //stays in loop until desired packet received
        if(header == SCHEDULE_FAIR_SPLIT_HEADER || header == SCHEDULE_OPTIMAL_DISPATCH_HEADER)
        {
            startTime   = _getStartTimeFromPacket();
            iterations  = _getIterationsFromPacket();
            period      = _getPeriodFromPacket();
            
            
            uint16_t txtime;
            txtime = rand()%50;    //so that transmission occurs at different points in time per node
            delay(txtime);
            _broadcastACKPacket(ACK_START_HEADER,id);    
                
            
        }
        return true;
    }
    else
        return false;
}

uint16_t OAgent_SFC::_waitForSchedulePacket(unsigned long &startTime, uint8_t &iterations, uint16_t &period, int timeout) {
    uint16_t rsp = _waitForValidPacket(true,timeout);
    if(rsp != 0x0) {
        startTime   = _getStartTimeFromPacket();
        iterations  = _getIterationsFromPacket();
        period      = _getPeriodFromPacket();    
        return rsp;
    }
    return 0x0;
}

void OAgent_SFC::_broadcastACKPacket(uint16_t header, uint8_t id)
{
    uint8_t payload[3];
    // put header in payload array
    payload[0] = header;
    payload[1] = header >> 8;
    payload[2] = id;

    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload));
    _xbee->send(_zbTx);
}

void OAgent_SFC::_WaitForACKPacket(uint16_t header, unsigned long t0, unsigned long startTime, uint8_t iterations, uint16_t period)
{   
    int nodes = 9; //number of online neighbors in the network
    int counter = 0;
    bool check = false;
    unsigned long start = t0;
    uint8_t id;

    // int node_array[nodes];

    // for(int i = 0;i < nodes;i++)
    // {
    //     node_array[i] = 0;       // initialize all entries in array to zero
    // }


    while(uint16_t(millis()-t0) < 600 && counter < nodes )  //change parameters globally
    {
        while(uint16_t(millis()-start) < 250)
        {
            if(_waitForPacket(header,true,50))
            {
                id = _getIDFromPacket();
                counter++;
                /*
                check = true;
                
                for(int k=0; k< counter;k++)
                {
                    if(node_array[k] == id)
                        check = false;       //meaning the node with that id number has already been accepted
                }
                if(check)
                {
                    node_array[counter] = id;
                    counter++;
                }
                */
            }
            
        }

        if(counter == nodes)
        {
            break;
        }
        
        _broadcastScheduleFairSplitPacket(startTime,iterations,period);
        start = millis();
    }
   
}

//Resilient Version
bool OAgent_SFC::_WaitForACKPacket_RSL(uint16_t header, int timeout, unsigned long startTime, uint8_t iterations, uint16_t period )
{ 
    unsigned long start = millis();
    unsigned long restart = start;
    OLocalVertex * s = _G->getLocalVertex(); // store pointer to local vertex 
    int nodes = s->getNeighborSize(); //number of online neighbors in the network
    int counter = 0;
    while (uint16_t(millis()-start) < timeout)
    {
            while (uint16_t(millis()-restart) < timeout*0.125)
            {
                if(_waitForPacket(header,true,50))
                {
                    counter++;
                    if (counter==nodes)
                        return true;
                }
            }
            _broadcastScheduleFairSplitPacket(startTime,iterations,period);
            restart = millis();
    }
    if (counter==0)
        return false;
    else
        return true;
}


uint32_t OAgent_SFC::_getAvailableAgentLsb(uint8_t i) {
    return _availableAgentLsb[i-1];
}

uint8_t OAgent_SFC::_getUint8_tFromPacket(uint8_t &byteNumber) {
    byteNumber++;
    return _rx->getData(byteNumber-1);
}

uint32_t OAgent_SFC::_getUint32_tFromPacket(uint8_t &lsbByteNumber) {
    lsbByteNumber += 4;
    return (uint32_t(_rx->getData(lsbByteNumber-1)) << 24) + (uint32_t(_rx->getData(lsbByteNumber-2)) << 16) + (uint16_t(_rx->getData(lsbByteNumber-3)) << 8) + _rx->getData(lsbByteNumber-4);
}

//long OAgent_SFC::_getLongFromPacket(uint8_t &lsbByteNumber) {
//	return long(_getUint32_tFromPacket(lsbByteNumber));
//}
/// End general coordination helper functions

/// Synchronization helper functions
bool OAgent_SFC::_leaderSync() {
    // only attempt to sync if there is at least one other vertex
    //Serial << "i AM HERE";
    if(_G->getN() > 1) {

    	// seed random number generator with millis
        srand(millis());
        // get the index of a neighbor at random                  //getN() returns the number of nodes in the network
        int i = (rand() % (_G->getN())) + 1;                 //******changed from _G->getN() to _G->getN() - 1 ******//
        // broadcast sync begin packet
        //Serial << "A\n";
        unsigned long tOne = _broadcastSyncBeginPacket(i);
        // variable to store receive time of final packet
        unsigned long tFour;
        // wait until sync response packet arrives or timeout
        if(_waitForSyncResponsePacket(tFour)) {
            uint8_t ptr = 2;
            unsigned long tTwo = _getUint32_tFromPacket(ptr);
            long d = tTwo + _getUint32_tFromPacket(ptr) - tOne - tFour;
        	// compute error between target and base
        	d = float(d)/float(2);
        	// broadcast final packet
			_broadcastSyncFinalPacket(tTwo,d);
			return true;
        }
    }
    return false;
}

bool OAgent_SFC::_targetSync(unsigned long tTwo) {
	if(_unicastSyncResponsePacket(tTwo)) {
        //Serial << "Unicast Response Sent";
		if(_waitForSyncFinalPacket(SYNC_TIMEOUT)) {
			// T = t + d
            uint8_t ptr = 6;
			_offset = _getLongFromPacket(ptr) + SYNC_ERROR;
			_synced = true;
			return true;		
		}
	}
    return false;
}


bool OAgent_SFC::_nonTargetSync(unsigned long tTwo) {
	if(_waitForSyncFinalPacket(SYNC_TIMEOUT+ACK_TIMEOUT)) {
		// T = t + d + t2 - t2'
        uint8_t ptr = 6;
        long d = _getLongFromPacket(ptr);
        ptr = 2;
		_offset = d + tTwo - _getUint32_tFromPacket(ptr) + SYNC_ERROR;
		_synced = true;
		return true;
	}
	return false;
}

unsigned long OAgent_SFC::_broadcastSyncBeginPacket(uint8_t i) {
    uint16_t payload[3];
    // put header in bytes 0 and 1
    payload[0] = SYNC_BEGIN_HEADER;
    // put lsb of address in bytes 2-5
    _addUint32_tToPayload(_G->getVertexByUniqueID(i)->getAddressLsb(),((uint8_t * )(&payload)),2);
    // prepare zbTx object with broadcast address, pointer to payload and number of bytes in payload
    _zbTx = ZBTxRequest(_broadcastAddress,((uint8_t *)(&payload)),sizeof(payload));
    // send packet without timestamp and return time packet was sent
    return _xbee->sendTwo(_zbTx,false,true);
}

void OAgent_SFC::_broadcastSyncFinalPacket(unsigned long tTwo, long d) {
	uint16_t payload[5];
	// put sync final header in bytes 0 and 1
	payload[0] = SYNC_FINAL_HEADER;
	// put tTwo into bytes 2-5
    _addUint32_tToPayload(uint32_t(tTwo),((uint8_t * )(&payload)),2);
	// put offset into bytes 6-9
    _addUint32_tToPayload(uint32_t(d),((uint8_t * )(&payload)),6);
	// prepare zbTx object with broadcast address, pointer to payload and number of bytes in payload
	_zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload));
	_xbee->send(_zbTx); // transmit
}

bool OAgent_SFC::_unicastSyncResponsePacket(unsigned long tTwo) {
	uint16_t payload[3];
	// put sync response header in bytes 0 and 1
	payload[0] = SYNC_RESPONSE_HEADER;
	// put receive time into bytes
    _addUint32_tToPayload(uint32_t(tTwo),((uint8_t * )(&payload)),2);
	_zbTx = ZBTxRequest(_rx->getRemoteAddress64(), ((uint8_t * )(&payload)), sizeof(payload)); // create zigbee transmit class
	_xbee->sendTwo(_zbTx,true); // transmit
	return _packetACKed(ACK_TIMEOUT);
}

bool OAgent_SFC::_isTargetNode() {
    uint8_t ptr = 2;
    
	return _G->isLocalVertex(_getUint32_tFromPacket(ptr));
}

int OAgent_SFC:: getStatusData(int index)
{
	 OLocalVertex * s = _G->getLocalVertex();
	 return s->getStatus(index - 1); 
}

/// End synchronization helper functions
/// General helper functions

void OAgent_SFC::_prepareOAgent_SFC(XBee * xbee, ZBRxResponse * rx, OGraph_SFC * G, bool leader, bool quiet) {
    _xbee = xbee;
    _G = G;
    _leader = leader;
    _quiet = quiet;
    _synced = false;
    _offset = 0;
    _zbTx = ZBTxRequest();
    _rx = rx;
    _txStatus = ZBTxStatusResponse();
    _broadcastAddress = XBeeAddress64(0x0, BROADCAST_ADDRESS);
    _aMsb = 0x0013A200;
    _availableAgentLsb[0] = 0x404980AE;
    _availableAgentLsb[1] = 0x40498074;
    _availableAgentLsb[2] = 0x40498060;
    _availableAgentLsb[3] = 0x40498065;
    _availableAgentLsb[4] = 0x405D9805;
    _availableAgentLsb[5] = 0x405D9822;
    _availableAgentLsb[6] = 0x4068B69B;
    _availableAgentLsb[7] = 0x405D980A;

    for(int i =0; i < 200; i++)
    {

        _buffer[i] = 0.0;
    }

    for(int i=0; i < NUM_REMOTE_VERTICES; i++)
    {
        node_counter[i] = -1;                     // -1 indicates an offline link status, so we assume initially an offline link status with all other noodes (Note: status of node itself isn't important)
    } 

}
/// End general helper functions