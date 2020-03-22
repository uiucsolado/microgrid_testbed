/*
 *  OAgent_OPF.cpp
 *  
 *
 *  Created by Stanton T. Cady on 06/15/12
 *  Edited by Laura Haller on 01/11/13
 *  Last edited by Stanton T. Cady on 01/16/13
 *
 */



#include "OAgent_OPF.h"
#include "Streaming.h"
#include <vector>

using namespace std;

//#define VERBOSE

//// Public methods
/// Constructors
OAgent_OPF::OAgent_OPF() {

    XBee temp1 = XBee();
    ZBRxResponse temp2 = ZBRxResponse();
    OGraph_OPF temp3 = OGraph_OPF();
    _prepareOAgent_OPF(&temp1,&temp2,&temp3);
    //setRS(0);
}

OAgent_OPF::OAgent_OPF(XBee * xbee, OGraph_OPF * G, bool leader, bool quiet) {
     ZBRxResponse temp = ZBRxResponse();
    _prepareOAgent_OPF(xbee,&temp,G,leader,quiet);
    //setRS(0);
}

OAgent_OPF::OAgent_OPF(XBee * xbee, ZBRxResponse * rx, OGraph_OPF * G, bool leader, bool quiet) {
    _prepareOAgent_OPF(xbee,rx,G,leader,quiet);
    //setRS(0);
}

// OAgent_OPF::OAgent_OPF(XBee * xbee, ZBRxResponse * rx, OGraph_OPF * G, bool leader, bool quiet, int RS) {
//     _prepareOAgent_OPF(xbee,rx,G,leader,quiet);  
// }

/// End Constructors

/// Methods to get private elements
//OGraph_OPF * OAgent_OPF::getGraph() {
//    return _G;
//}
//
//void OAgent_OPF::setLeader(bool leader) {
//    _leader = leader;
//}
//
//bool OAgent_OPF::isLeader() {
//    return _leader;
//}
//
//void OAgent_OPF::setQuiet(bool quiet) {
//    _quiet = quiet;
//}
//
//bool OAgent_OPF::isQuiet() {
//    return _quiet;
//}
/// End methods to get private elements

/// Ratio-consensus
// Fair splitting
float OAgent_OPF::fairSplitRatioConsensus(long y, long z, uint8_t iterations, uint16_t period) {  //,uint8_t round
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
                aLsb = _rx->getRemoteAddress64().getLsb();
                if(_G->isInNeighbor(aLsb,i)) {    // check if remote device is in in-neighborhood
                    long inMu = _getMuFromPacket();                             // store incoming value of mu
                    long inSigma = _getSigmaFromPacket();                       // store incoming value of sigma
                    uint8_t neighborID = _getNeighborIDFromPacket();
                    //int inheritor_id = _getinheritorIDFromPacket();

                    uint8_t nodeID = s->getID();


                    if(s->getStatus(neighborID) == 1)
                    {
                    	s->setStatus(neighborID, 2);
                    	uint8_t dout = s->getOutDegree();
                    	s->setOutDegree(dout + 1);
                    }
                    else if(s->getStatus(neighborID) == 0)
                    	s->setStatus(neighborID, 2);


                    //Serial << "Address of neighbor: "; 
                	//Serial  << _HEX(_rx->getRemoteAddress64().getLsb());
                	//Serial << "\n";   
                    
                    long Mudiff = inMu - s->getNuMin(i); 
                    long sigdiff =  inSigma - s->getTau(i);
                        // if(k==0)
                        //     {
                        //     	setneighborY0( (neighborID-1), Mudiff+( Mudiff*(inheritor_id==nodeID) ) );
                        //         //Serial <<"\n"<<"Y0 element "<<i<<" is: "<< getneighborY0(i) << "\n ";
                        //     	setneighborZ0( (neighborID-1), sigdiff+( sigdiff*(inheritor_id==nodeID) ) );
                        //         //Serial <<"\n"<<"Z0 element "<<i<<" is: "<< getneighborZ0(i) << "\n " ;
                        //     }
                    inY += Mudiff;                               // add mu from incoming device and subtract last received value
                    s->setNuMin(i,inMu);                                        // save received mu as new nu (nuMin)
                    inZ += sigdiff;                              // add sigma from incoming device and subtract last received value
                    s->setTau(i,inSigma);                                       // save received sigma as new tau
             		
                    node_check[neighborID -1] = 1;                      //data was received from a neighbor at this iteration
                    
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
float OAgent_OPF::ratiomaxminConsensus(long y, long z, uint8_t iterations, uint16_t period) {  //,uint8_t round
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
 
    int frame = 30;
    


   

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
                aLsb = _rx->getRemoteAddress64().getLsb();
                if(_G->isInNeighbor(aLsb,i)) {    // check if remote device is in in-neighborhood
                    long inMu = _getMuFromPacket();                             // store incoming value of mu
                    long inSigma = _getSigmaFromPacket();                       // store incoming value of sigma
                    uint8_t neighborID = _getNeighborIDFromPacket();

                    uint8_t nodeID = s->getID();

                    //find out id this node is the inheritor for node i
                    if(s->getStatus(neighborID) == 1)
                    {
                        s->setStatus(neighborID, 2);
                        uint8_t dout = s->getOutDegree();
                        s->setOutDegree(dout + 1);
                    }
                    else if(s->getStatus(neighborID) == 0)
                        s->setStatus(neighborID, 2);


                    //Serial << "Address of neighbor: "; 
                    //Serial  << _HEX(_rx->getRemoteAddress64().getLsb());
                    //Serial << "\n";   
                    
                    long Mudiff = inMu - s->getNuMin(i); 
                    long sigdiff =  inSigma - s->getTau(i);
                        // if(k==0)
                        // {
                        //     setneighborY0( (neighborID-1), Mudiff+( Mudiff*(inheritor_id==nodeID) ) );
                        //     //Serial <<"\n"<<"Y0 element "<<i<<" is: "<< getneighborY0(i) << "\n ";
                        //     setneighborZ0( (neighborID-1), sigdiff+( sigdiff*(inheritor_id==nodeID) ) );
                        //     //Serial <<"\n"<<"Z0 element "<<i<<" is: "<< getneighborZ0(i) << "\n " ;
                        // }
                    inY += Mudiff;                               // add mu from incoming device and subtract last received value
                    s->setNuMin(i,inMu);                                        // save received mu as new nu (nuMin)
                    inZ += sigdiff;                              // add sigma from incoming device and subtract last received value
                    s->setTau(i,inSigma);                                       // save received sigma as new tau
                    

                    //Using min and max consensus, choose a leader and deputy for begining fair split ratio consensus
                    //min consensus
                    // if (leader_id < s->getleaderID())
                    // {
                    //     s->setleaderID(leader_id);
                    // }
                    // //max consensus
                    // if (deputy_id > s->getdeputyID())
                    // {
                    //     s->setdeputyID(deputy_id);
                    // }


                    node_check[neighborID -1] = 1;                      //data was received from a neighbor at this iteration
                    
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
                s->setStatus(j+1, 1);
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


// long OAgent_OPF::computeFairSplitFinalValue(float gamma) {
//     OLocalVertex * s = _G->getLocalVertex();
// 	if(gamma <= 0)
// 		return s->getMin();
//     else if(gamma < 1)
//         // if under maximum system capacity
//          return s->getMin() + long(gamma*float(s->getMax()-s->getMin()));
//     else if(gamma >= 1)
//         return s->getMax();    
// }



long OAgent_OPF::fairSplitRatioConsensus_RSL(long y, long z, uint8_t iterations, uint16_t period) {
    srand(analogRead(7));                    //moved this instruction here from fairSplitRatioConsensus() - Sammy
    OLocalVertex * s = _G->getLocalVertex();
    // int leader_id = s->getleaderID();
    uint8_t nodeID = s->getID();
    // if (leader_id==nodeID)
    // 	setLeader(0);
    float gamma = 0;
    //Serial<<"Leader ID is: "<<leader_id<<"\n";

    // if( ((leader_id==0) || (s->getdeputyID()==0)) && (isLeader()) ) //if leader/deputy ID has not been set and this is the leader node, keep it as the leader node
    // {
    //     s->setleaderID(nodeID);
    //     s->setdeputyID(nodeID);
    //     //Serial<<"Node "<<s->getleaderID()<<" is now leader and deputy\n";
    // }
    // if(s->getleaderID()==nodeID)
    if(isLeader())
    {
        gamma = leaderFairSplitRatioConsensus_RSL(y, z, iterations,period);
    }
    else
    {
        gamma = nonleaderFairSplitRatioConsensus_RSL(y, z, iterations,period);
    }
        //Serial<<"Sup bro?! "<<getbufferdata(0)<<"\n";

       return gamma;
}




long OAgent_OPF::leaderFairSplitRatioConsensus_RSL(long y, long z, uint8_t iterations, uint16_t period) {
    unsigned long t0 = myMillis();
    unsigned long startTime = t0 + RC_DELAY;
    OLocalVertex * s = _G->getLocalVertex();
    float gamma = 0;
    bool scheduled =_waitForACKPacket_RSL(SCHEDULE_FAIR_SPLIT_HEADER,SCHEDULE_TIMEOUT, startTime, iterations, period);
    //Serial<<"Schedule done at "<<myMillis()<<"\n";
    //bool stat = startTime>myMillis();

    //Serial<<"Leader: Startime= "<<startTime<<", Time= "<<myMillis()<<"\n";

    if (!scheduled) 
    {
        //Serial<<"No acknowledgements received from neighbors at t = "<<myMillis()<<"\n";
        //s->setleaderID(s->getdeputyID());
        //Serial<<"Node "<<s->getleaderID()<<" is the new leader\n";
        gamma = -1;
    }
    else
    {
        if(_waitToStart(startTime,true,1800))
        {
            gamma = ratiomaxminConsensus(y, z, iterations,period);
        }
    }        
    return gamma;
}

long OAgent_OPF::nonleaderFairSplitRatioConsensus_RSL(long y, long z, uint8_t iterations, uint16_t period) {
    unsigned long startTime = 0;
    //delay(50);
    float gamma = 0;
    bool scheduled = _waitForScheduleFairSplitPacket_RSL(startTime,iterations,period,(period*iterations*3));
    //Serial<<"Schedule done at "<<myMillis()<<"\n";
    
    //bool stat = startTime>myMillis();
    //Serial<<"Startime > Time? "<<stat<<"\n";

    //Serial<<"NonLeader: Startime= "<<startTime<<", Time= "<<myMillis()<<"\n";

    if(scheduled)
    {
        //Serial<<"Schedule received from Node "<<s->getleaderID()<<"\n";
        if(_waitToStart(startTime,true,1800)) {
            gamma = ratiomaxminConsensus(y, z, iterations,period);
        }
        
        //digitalWrite(48,LOW);
    }
    else
    {
        //Serial<<"No schedule received from Node "<<s->getleaderID()<<"\n";
        //s->setleaderID(s->getdeputyID());
        //Serial<<"Node "<<s->getleaderID()<<" is the new leader\n";
        gamma = -1;
    }
    return gamma;
}



long OAgent_OPF::leaderFairSplitRatioConsensus(long y, long z, uint8_t iterations, uint16_t period) {
    srand(analogRead(7));                    //moved this instruction here from fairSplitRatioConsensus() - Sammy
    unsigned long t0 = millis(); 
    unsigned long startTime = t0 + 1200;                         //was 1200 initially
    _broadcastScheduleFairSplitPacket(startTime,iterations,period);
    _waitForACKPacket(ACK_START_HEADER, t0, startTime, iterations, period);
    float gamma = 0;
    _buffer[2] = 0;
    if(_waitToStart(startTime,false,1800)) {
        gamma = fairSplitRatioConsensus(y, z, iterations,period);
    }
    return gamma;
}

long OAgent_OPF::nonleaderFairSplitRatioConsensus(long y, long z) {
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





//  Begin Max Consensus
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
long OAgent_OPF::maxminConsensusAlgorithm(bool isMax, long max, long min, uint8_t iterations, uint16_t period) {
    srand(analogRead(7));
    long gamma = 0;

    if(isLeader())
        gamma = leaderMaxMinConsensus(isMax,max,min,iterations,period);
    else
        gamma = nonleaderMaxMinConsensus(isMax,max,min,iterations,period);
    return gamma;
}

long OAgent_OPF::leaderMaxMinConsensus(bool isMax, long max, long min, uint8_t iterations, uint16_t period) {
    unsigned long t0 = myMillis();
    unsigned long startTime = t0 + MC_DELAY;
    long gamma = 0;
    bool scheduled =_waitForACKPacket_RSL(SCHEDULE_MAXMIN_HEADER,SCHEDULE_TIMEOUT,startTime,iterations,period);

    if (!scheduled)
    {
    	Serial << "maxmin scheduling was a FAIL"<<endl;
        gamma = -1;
    }
    else
    {
        Serial << "maxmin scheduling was a SUCCESS"<<endl;
        if(_waitToStart(startTime,true,10000))
        {
        	//Serial << "Correct Startime is " <<startTime<< ". My startime is "<< myMillis() <<endl;
            gamma = maxminConsensus(isMax,max,min,iterations,period);
        }
    }        
    return gamma;
}

long OAgent_OPF::nonleaderMaxMinConsensus(bool isMax, long max, long min, uint8_t iterations, uint16_t period) {
    unsigned long startTime = 0;
    long gamma = 0;

    bool scheduled = _waitForScheduleMaxMinPacket_RSL(startTime,iterations,period,-1);

    if(scheduled)
    {
        Serial << "maxmin scheduling was a SUCCESS"<<endl;
        if(_waitToStart(startTime,true,10000))
        {
        	//Serial << "Correct Startime is " <<startTime<< ". My startime is "<< myMillis() <<endl;
            gamma = maxminConsensus(isMax,max,min,iterations,period);
        }
    }
    else
    {
        Serial << "maxmin scheduling was a FAIL"<<endl;
        gamma = -1;
    }
    return gamma;
}

// MaxMin Consensus Algorithm (added in by Olaolu)
long OAgent_OPF::maxminConsensus(bool isMax, long max, long min, uint8_t iterations, uint16_t period) {
    unsigned long start;                // create variable to store iteration start time
    bool txDone;                        // create variable to keep track of broadcasts
    uint16_t txTime;       //_genTxTime(period,10,analogRead(0));   // get transmit time; 

    long inMax;
    long inMin;
    int count = 3;
    uint32_t aLsb;
    
    int frame = 20;
    
    for(uint8_t k = 0; k < iterations; k++) {
        srand(analogRead(0));
        txTime =  (rand() % (period - 2*frame)) + frame;  //determines the time window in which a payload is transmitted
        txDone = false;     // initialize toggle to keep track of broadcasts
        start = millis();   // initialize timer
        
        while(uint16_t(millis()-start) < period) {
            if(_maxminPacketAvailable()) {
                long inMax = _getMaxFromPacket();                               // store incoming value of Max
                long inMin = _getMinFromPacket();                               // store incoming value of Min
                if(inMax > max)
                    max = inMax;
                if(inMin < min)
                    min = inMin;
            }
            if((int((millis() - start)) >= txTime) && !txDone) {
                txDone = true; // toggle txDone
                _broadcastMaxMinPacket(max,min);
            }
        }
        // Serial << "At iteration "<< k <<" we have "<< max <<" windows"<<endl;
        // delay(5);
    }
    if(isMax)
        return max;
    else
        return min;
}



long OAgent_OPF::_getMaxFromPacket() {
    uint8_t ptr = 2;
    return _getUint32_tFromPacket(ptr);
}

long OAgent_OPF::_getMinFromPacket() {
    uint8_t ptr = 6;
    return _getUint32_tFromPacket(ptr);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  End Max Consensus






// Security-Constrained Economic Dispatch

bool OAgent_OPF::OptimalPowerFlow(bool genBus, float alpha, uint8_t iterations) {
    srand(analogRead(7));
    bool gamma = false;

    if(isLeader())
    { 
        gamma = leaderOPF(genBus,alpha,iterations);
    }
    else
    {
        gamma = nonleaderOPF(genBus,alpha,iterations);
    }
        //Serial<<"Sup bro?! "<<getbufferdata(0)<<"\n";

    return gamma;

}

bool OAgent_OPF::leaderOPF(bool genBus, float alpha, uint8_t iterations) {
    unsigned long t0 = myMillis();
    unsigned long startTime = t0 + OPF_DELAY;
    bool gamma = false;
    bool scheduled = _waitForSchedulePacketOPF(SCHEDULE_TIMEOUT,startTime,iterations);
    //Serial<<"Schedule done at "<<myMillis()<<"\n";
    //bool stat = startTime>myMillis();

    //Serial<<"Leader: Startime= "<<startTime<<", Time= "<<myMillis()<<"\n";

    if (!scheduled) 
    {
        Serial<<"OPF scheduling was a FAIL"<<endl;
        gamma = false;
    }
    else
    {
        Serial<<"OPF scheduling was a SUCCESS"<<endl;
        if(_waitToStart(startTime,true,10000))
        {
            //Serial << "Correct Startime is " <<startTime<< ". My startime is "<< myMillis() <<endl;
            // gamma = StandardOPF(genBus);
            gamma = SecondOrderOPF(genBus);
        }
    }        
    return gamma;
}

bool OAgent_OPF::nonleaderOPF(bool genBus, float alpha, uint8_t iterations) {
    unsigned long startTime = 0;
    bool gamma = false;
    //delay(50);
    bool scheduled = _waitForScheduleFeasibleFlowPacket(startTime,iterations,-1);
    //Serial<<"Schedule done at "<<myMillis()<<"\n";
    
    //bool stat = startTime>myMillis();
    //Serial<<"Startime > Time? "<<stat<<"\n";

    //Serial<<"NonLeader: Startime= "<<startTime<<", Time= "<<myMillis()<<"\n";

    if(scheduled)
    {
        Serial<<"OPF scheduling was a SUCCESS"<<endl;
        if(_waitToStart(startTime,true,10000))
        {
            //Serial << "Correct Startime is " <<startTime<< ". My startime is "<< myMillis() <<endl;
            // gamma = StandardOPF(genBus);
            gamma = SecondOrderOPF(genBus);
        }
        //digitalWrite(48,LOW);
    }
    else
    {
        Serial<<"OPF scheduling was a FAIL"<<endl;
        gamma = false;
    }
    return gamma;
}


bool OAgent_OPF::SecondOrderOPF(bool genBus) {
    OLocalVertex * s = _G->getLocalVertex();                                                    // store pointer to local vertex
    ORemoteVertex * n = _G->getRemoteVertex(1);                                                 // store pointer to remote vertices
    LinkedList * l = _G->getLinkedList();

    uint16_t nodeID = s->getID();
    uint8_t neighborID;
    uint8_t num_parents=0;

    uint8_t neighbors[_G->getN()-1];
    uint8_t *p = s->getStatusP();
    if (genBus){
        Serial<<"Node is generator"<<endl;
        delay(5);}
    else
        {Serial<<"Node is load"<<endl;
        delay(5);}
    Serial<<"Node has the following neighbors:"<<endl;
    delay(5);
    int j=0;
    for (uint8_t i = 0; i < NUM_REMOTE_VERTICES; i++)
    {
        if(*(p+i)>=2)
        {
            neighbors[j]=i+1;
            Serial <<"Neighbor "<<neighbors[j]<<endl;
            delay(5);
            j++;
        }
    }
    Serial<<"Node has "<<_G->getN()-1<<" neighbors"<<endl;
    delay(5);

    bool self_flags[NUM_REMOTE_VERTICES];
    bool neighbor_flag=false;
    bool neighbor_flags[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++)neighbor_flags[i]=false;
    for (uint8_t i:neighbors) {
        if (i>nodeID) {
            self_flags[i-1]=true;
            // Serial<<"Initial flag is true for neighbor "<<i<<endl; delay(5);
        }
        else{
            self_flags[i-1]=false;
            // Serial<<"Initial flag is false for neighbor "<<i<<endl; delay(5);
            num_parents+=1;
        }
        // Serial<<"Flag is "<<self_flags[i-1]<<endl;
    }
    // float **N = new float*[_G->getN()]; 
    // for(int i=0;i<_G->getN();i++)
    // {
    //     N[i]=new float[NUM_REMOTE_VERTICES];
    // }

    // /////////////////////////////////////
    // // Test Ratio Consensus

    // float mu=s->getActiveDemand(),nu=1;
    // float old_data[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++)old_data[i]=0;
    // Serial<<"mu and nu are "<<mu<<" "<<nu<<endl; delay(5);
    // float alpha = RunRatioConsensus(nodeID,&mu,&nu,50,neighbors,_G->getN()-1,self_flags,neighbor_flags,old_data);
    // Serial<<"mu and nu are "<<mu<<" "<<nu<<endl; 
    // Serial<<"alpha is "<<alpha<<endl;delay(20000);
    // ////////////////////////////////////

    float N[_G->getN()][NUM_REMOTE_VERTICES];
    for (int i=0;i<_G->getN();i++){
        for (int j=0;j<NUM_REMOTE_VERTICES;j++){
            N[i][j]=0;
        }
    }
    
    for (int i=0;i<_G->getN()-1;i++){
        // Serial<<i+1<<" "<<neighbors[i]-1<<endl;delay(5);
        N[i+1][neighbors[i]-1] = 1;
    } 
    // for (int i=0;i<_G->getN();i++){
    //     for (int j=0;j<NUM_REMOTE_VERTICES;j++){
    //         // Serial.print(A[k],precision);Serial<<" "; k++;
    //         Serial.print(N[i][j],3);Serial<<" ";
    //     }
    //     Serial<<endl;
    // }
    // delay(10);
    // _print2Darray_("N Matrix",&N[0][0],_G->getN(),NUM_REMOTE_VERTICES,3);
    // Serial<<N[0][0]<<" "<<NUM_REMOTE_VERTICES<<endl; delay(5);
    float N_T[NUM_REMOTE_VERTICES][_G->getN()];
    transpose(&N_T[0][0],&N[0][0],_G->getN(),NUM_REMOTE_VERTICES);
    // _print2Darray_("N_T Matrix",&N_T[0][0],NUM_REMOTE_VERTICES,_G->getN(),3);
    // float **N_T = new float*[NUM_REMOTE_VERTICES]; 
    // for(int i=0;i<NUM_REMOTE_VERTICES;i++)
    // {
    //     N_T[i]=new float[_G->getN()];
    // }
    // float **N_T = transpose((float *)N,_G->getN(),NUM_REMOTE_VERTICES);
    // float **J = new float*[_G->getN()]; 
    // for(int i=0;i<_G->getN();i++)
    // {
    //     J[i]=new float[_G->getN()];
    // }
    float J[_G->getN()][_G->getN()];
    if (_G->getN()-1==2){

        // float **E = new float*[3]; 
        // for(int i=0;i<3;i++)
        // {
        //     E[i]=new float[2];
        // }
        float E[3][2],E_T[2][3],F[2][2],EF[3][2];
        E[0][0]=1.0;E[0][1]=1.0; E[1][0]=1.0;E[1][1]=0; E[2][0]=0;E[2][1]=1.0;
        transpose(&E_T[0][0],&E[0][0],3,2);
        // _print2Darray_("E_T Matrix",&E_T[0][0],2,3,3);
        // float **F = new float*[2]; 
        // for(int i=0;i<2;i++)
        // {
        //     F[i]=new float[2];
        // }
        F[0][0]=2.0/3.0;F[0][1]=-1.0/3.0; F[1][0]=-1.0/3.0;F[1][1]=2.0/3.0;
        // float **E_T = transpose(E);
        // float **EF = multiply(E,F);
        // float **J = multiply(EF,E_T); 
        multiply(&EF[0][0],&E[0][0],3,2,&F[0][0],2,2);
        // _print2Darray_("EF Matrix",&EF[0][0],3,2,3);
        multiply(&J[0][0],&EF[0][0],3,2,&E_T[0][0],2,3);
        // E={{1,1},{1,0},{0,1}},F = {{2/3,-1/3},{-1/3,2/3}}
        // vector<vector<float>> E={{1,1},{1,0},{0,1}},F = {{2/3,-1/3},{-1/3,2/3}};
        // vector<vector<float>> J = multiply(multiply(E,F),transpose(E)); 
    }
    else{
        // vector<vector<float>> J = {{0.5,0.5},{0.5,0.5}};
        J[0][0]=0.5;J[0][1]=0.5; J[1][0]=0.5;J[1][1]=0.5;
    }
     // _print2Darray_("J Matrix",&J[0][0],_G->getN(),_G->getN(),3);
    // float x[_G->getN()]; for (int i=0;i<_G->getN();i++)x[i]=0;
    float *x = new float[_G->getN()];
    float lambda[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++)lambda[i]=1;
    
    // 	x_tilde[i]= -multi_dot([pinv(multi_dot([E[i].T,H[i],E[i]])),E[i].T,np.dot(H[i].T,g[i])+c[i]+np.dot(N[i],lmbda)])
    //     grad_x_tilde[i] = -multi_dot([pinv(multi_dot([E[i].T,H[i],E[i]])),E[i].T,N[i]])
    //     x[i] = np.dot(E[i],x_tilde[i])+g[i]
    //     grad_x[i] = np.dot(E[i],grad_x_tilde[i])

    // grad_lmbda = np.sum(np.dot(N[i].T,x[i]) for i in range(Nb))
    // Hessian_lmbda = np.sum(np.dot(N[i].T,grad_x[i]) for i in range(Nb))

    float Hessian_lambda[NUM_REMOTE_VERTICES][NUM_REMOTE_VERTICES];
    float buf1[NUM_REMOTE_VERTICES][_G->getN()],buf2[_G->getN()][NUM_REMOTE_VERTICES];
    multiply(&buf1[0][0],&N_T[0][0],NUM_REMOTE_VERTICES,_G->getN(),&J[0][0],_G->getN(),_G->getN());
    multiply(&Hessian_lambda[0][0],&buf1[0][0],NUM_REMOTE_VERTICES,_G->getN(),&N[0][0],_G->getN(),NUM_REMOTE_VERTICES);
    float g[_G->getN()];for (int i=0;i<_G->getN();i++)g[i]=0;
    float Pd = s->getActiveDemand();
    g[0] = Pd;
    float *neg_grad_lambda = new float[NUM_REMOTE_VERTICES];
    float *Newton_direction = new float[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++)Newton_direction[i]=0;

    multiply(&buf2[0][0],&J[0][0],_G->getN(),_G->getN(),&N[0][0],_G->getN(),NUM_REMOTE_VERTICES);
    float *tmp = matbyvec(&J[0][0],_G->getN(),_G->getN(),g);
    for (int k=0;k<5;k++)
    {
        
        x = matbyvec(&buf2[0][0],_G->getN(),NUM_REMOTE_VERTICES,lambda);
        // _print1Darray_("x",x,_G->getN(),3);
        
        for (int i=0;i<_G->getN();i++) x[i]=-x[i]-tmp[i]+g[i];
        _print1Darray_("x",x,_G->getN(),5);
        // _print1Darray_("x",x,_G->getN(),3);
        neg_grad_lambda = matbyvec(&N_T[0][0],NUM_REMOTE_VERTICES,_G->getN(),x);  
        // for (int i=0;i<NUM_REMOTE_VERTICES;i++) 
        //     {neg_grad_lambda[i]=tmp[i];Serial<<neg_grad_lambda[i];} 
        
        // _print2Darray_("Hessian Matrix",&Hessian_lambda[0][0],NUM_REMOTE_VERTICES,NUM_REMOTE_VERTICES,3);
        // _print1Darray_("Negative gradient",neg_grad_lambda,NUM_REMOTE_VERTICES,3);
        Newton_direction = Conjugate_gradient(&Hessian_lambda[0][0],NUM_REMOTE_VERTICES,NUM_REMOTE_VERTICES,neg_grad_lambda,Newton_direction);       
        _print1Darray_("Newton direction",Newton_direction,NUM_REMOTE_VERTICES,5);
        for (int i=0;i<NUM_REMOTE_VERTICES;i++) lambda[i] += Newton_direction[i];
    	_print1Darray_("Lambda",lambda,NUM_REMOTE_VERTICES,5);
    }
    x = matbyvec(&buf2[0][0],_G->getN(),NUM_REMOTE_VERTICES,lambda);
    for (int i=0;i<_G->getN();i++) x[i]=-x[i]-tmp[i]+g[i];
    _print1Darray_("x",x,_G->getN(),5);
    
}

float* OAgent_OPF::Conjugate_gradient(float*A, int rows, int cols, float*b, float*x_init) {

	Serial<<"Executing Conjugate Gradient Method"<<endl;

    float H[rows][cols];
    // float **H = new float*[rows]; 
    // for(int i=0;i<rows;i++)
    // {
    //     H[i]=new float[cols];
    // }
    int k=0;
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            H[i][j]=*((A+i*cols)+j); k++;
        }
    }
    OLocalVertex * s = _G->getLocalVertex();                                                    // store pointer to local vertex
    ORemoteVertex * n = _G->getRemoteVertex(1);                                                 // store pointer to remote vertices
    LinkedList * l = _G->getLinkedList();

    uint16_t nodeID = s->getID();
    uint8_t neighborID;
    uint8_t num_parents=0;
    uint8_t num_nodes=5;

    uint8_t neighbors[_G->getN()-1];
    uint8_t *status_ptr = s->getStatusP();
   
    int j=0;
    for (uint8_t i = 0; i < NUM_REMOTE_VERTICES; i++)
    {
        if(*(status_ptr+i)>=2)
        {
            neighbors[j]=i+1;
            j++;
        }
    }
    uint8_t received_from[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++) received_from[i]=0;
    bool self_flags[NUM_REMOTE_VERTICES];
    bool neighbor_flag=false;
    bool neighbor_flags[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++)neighbor_flags[i]=false;
    for (uint8_t i:neighbors) {
        if (i>nodeID) {
            self_flags[i-1]=true;
        }
        else{
            self_flags[i-1]=false;
            num_parents+=1;
        }
    }

    int children = 0;
    for (uint8_t i:neighbors) {
        if (i>nodeID) children+=1;
    }

    // float *r = new float[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++) r[i]=0;
    // float *x = new float[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++) x[i]=x_init[i];
    // float *z = new float[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++) z[i]=0;

    float *r = new float[NUM_REMOTE_VERTICES];
    float *x = new float[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++) x[i]=x_init[i];
    float *z = new float[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++) z[i]=0;

    r = matbyvec(&H[0][0],NUM_REMOTE_VERTICES,NUM_REMOTE_VERTICES,x);
    for (int i=0;i<NUM_REMOTE_VERTICES;i++) r[i]=r[i]-b[i];
    // _print1Darray_("r",r,NUM_REMOTE_VERTICES,3);
    float *new_r = new float[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++) new_r[i]=r[i];
    _print1Darray_("r",r,NUM_REMOTE_VERTICES,6); 

    unsigned long startTime = myMillis()+10000;
    bool scheduled = false;
    uint8_t iterations = 1;
    while (!scheduled)
    { 
    	if(isLeader()) scheduled = _waitForSchedulePacketOPF(SCHEDULE_TIMEOUT,startTime,iterations);
    	else  scheduled = _waitForScheduleFeasibleFlowPacket(startTime,iterations,-1);
	}
	Serial<<"Start time is "<<startTime<<endl;
	_waitToStart(startTime,true,5000);
  
    int cnt=0;
    int i = 0;
    unsigned long start = millis();   // initialize timer
    while (millis()-start<=10000){
        uint8_t nei_to_send=neighbors[i]; 
        i++; if (i==_G->getN()-1) i=0;
        if (nei_to_send<nodeID)_SendToParent(nei_to_send,self_flags[nei_to_send-1],r[nei_to_send-1],0);
        else _SendToChild(nei_to_send,self_flags[nei_to_send-1],r[nei_to_send-1],0);
        if(_waitForUnicastPacket(neighborID,nodeID,OPF_HEADER,true,150))
            {
                if (!received_from[neighborID-1]){
                	received_from[neighborID-1]=1;
                    if (neighborID>nodeID){
                        cnt+=1; 
                        float *tmp=_getPacketFromChild(); 
                        uint8_t task = tmp[1];
                        if(task==0)
                        {
	                        new_r[neighborID-1]+=tmp[0];
	                        Serial<<"Received from "<<neighborID<<endl;
	                        Serial.print(tmp[0],6); Serial<<endl; delay(5);
	                    }
                    }
                    else if (neighborID<nodeID){
                        cnt+=1;                        
                        float *tmp=_getPacketFromParent();
                        uint8_t task = tmp[1];
                        if(task==0)
                        { 
	                        new_r[neighborID-1]+=tmp[0];
	                        Serial<<"Received from "<<neighborID<<endl;
	                        Serial.print(tmp[0],6); Serial<<endl; delay(5);
	                    }
                    }
                }
            }

    }
    for (int i=0;i<NUM_REMOTE_VERTICES;i++) r[i]=new_r[i];
    _print1Darray_("r",r,NUM_REMOTE_VERTICES,6);
    float *p=new float[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++) p[i]=-r[i];
    float *q=new float[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++) q[i]=0;
    float *new_q = new float[NUM_REMOTE_VERTICES];
    for (int i=0;i<NUM_REMOTE_VERTICES;i++) received_from[i]=0;
    for (int k=0;k<5;k++)
    {
        // _print2Darray_("H",&H[0][0],NUM_REMOTE_VERTICES,NUM_REMOTE_VERTICES,3);
        // _print1Darray_("p",p,NUM_REMOTE_VERTICES,3);

        q = matbyvec(&H[0][0],NUM_REMOTE_VERTICES,NUM_REMOTE_VERTICES,p);
        _print1Darray_("q",q,NUM_REMOTE_VERTICES,6);
        for (int i=0;i<NUM_REMOTE_VERTICES;i++) new_q[i]=q[i];

        unsigned long startTime = myMillis()+10000;
	    scheduled = false;
	    while (scheduled)
	    { 
	    	if(isLeader()) scheduled = _waitForSchedulePacketOPF(SCHEDULE_TIMEOUT,startTime,iterations);
	    	else  scheduled = _waitForScheduleFeasibleFlowPacket(startTime,iterations,-1);
		}
		Serial<<"Start time is "<<startTime<<endl;
		_waitToStart(startTime,true,20000);

        cnt=0; i = 0;
        unsigned long start = millis();   // initialize timer
        while (millis()-start<=20000){
        // while (cnt<_G->getN()-1){
            uint8_t nei_to_send=neighbors[i]; 
            i++; if (i==_G->getN()-1) i=0;
            if (nei_to_send<nodeID)_SendToParent(nei_to_send,self_flags[nei_to_send-1],q[nei_to_send-1],1);
            else _SendToChild(nei_to_send,self_flags[nei_to_send-1],q[nei_to_send-1],1);
            if(_waitForUnicastPacket(neighborID,nodeID,OPF_HEADER,true,150))
            {
            	if (!received_from[neighborID-1])
                {	 
                	if (neighborID>nodeID)
                	{
                		float *tmp=_getPacketFromChild();
                		uint8_t task = tmp[1];
                		neighbor_flag = _getFlagFromChild();
	                    if (task==1 && neighbor_flag!=neighbor_flags[neighborID-1])
	                    {
	                        cnt+=1;
	                        self_flags[neighborID-1] =!self_flags[neighborID-1];
	                        neighbor_flags[neighborID-1] = neighbor_flag;
	                        received_from[neighborID-1]=1;	                         
	                        new_q[neighborID-1]+=tmp[0];
	                        Serial<<"Received from "<<neighborID<<endl;
	                        Serial.print(tmp[0],6); Serial<<endl; delay(5);
	                    }
                	}
                	else if (neighborID<nodeID)
                	{
                		float *tmp=_getPacketFromParent();
                		uint8_t task = tmp[1];
                		neighbor_flag = _getFlagFromParent();
	                    if (task==1 && neighbor_flag!=neighbor_flags[neighborID-1])
	                    {
	                        cnt+=1;
	                        self_flags[neighborID-1] =!self_flags[neighborID-1];
	                        neighbor_flags[neighborID-1] = neighbor_flag;
	                        received_from[neighborID-1]=1;	                         
	                        new_q[neighborID-1]+=tmp[0];
	                        Serial<<"Received from "<<neighborID<<endl;
	                        Serial.print(tmp[0],6); Serial<<endl; delay(5);
	                    }
                	}
                }
                    
            }            
        }
        for (int i=0;i<NUM_REMOTE_VERTICES;i++) received_from[i]=0;
        for (int i=0;i<NUM_REMOTE_VERTICES;i++) q[i]=new_q[i];
        _print1Darray_("q",q,NUM_REMOTE_VERTICES,6);

    	// q = matbyvec(&H[0][0],NUM_REMOTE_VERTICES,NUM_REMOTE_VERTICES,p);
        float mu1=0,mu2=0;
        for (uint8_t i:neighbors) {
            mu1 += r[i-1]*r[i-1];
            mu2 += p[i-1]*q[i-1];   
        }

        _print_("mu1 is",mu1,6);
        float nu = 1;
        float alpha1 = RunRatioConsensus(nodeID,&mu1,&nu,50,neighbors,_G->getN()-1,self_flags,neighbor_flags,q,2);
        _print_("alpha1 is",alpha1,6);
        if (abs(alpha1)<0.00001) break;
        _print_("mu2 is",mu2,6);
        nu = 1;
        float alpha2 = RunRatioConsensus(nodeID,&mu2,&nu,50,neighbors,_G->getN()-1,self_flags,neighbor_flags,q,3);
        _print_("alpha2 is",alpha2,6); 

        if (abs(alpha2)<0.0000001) break;
        float alpha = alpha1/alpha2;
        _print_("alpha is",alpha,6);

        float *x_prev = new float[NUM_REMOTE_VERTICES];
        float *r_prev = new float[NUM_REMOTE_VERTICES];
        for (int i=0;i<NUM_REMOTE_VERTICES;i++) 
        {
            x_prev[i]=x[i]; r_prev[i]=r[i];
            x[i]+=alpha*p[i]; r[i]+=alpha*q[i];
        } 
        // x = x + alpha*p;
        // r = r + alpha*q;
        mu1=0;
        for (uint8_t i:neighbors) {
            mu1 += r[i-1]*r[i-1];
            // nu += r_prev[i-1]*r_prev[i-1];   
        }
        _print_("mu1 is",mu1,6);
        nu = 1;
        float alpha3 = RunRatioConsensus(nodeID,&mu1,&nu,50,neighbors,_G->getN()-1,self_flags,neighbor_flags,q,4);
        _print_("alpha3 is",alpha3,6); 

        float beta = alpha3/alpha1;
        _print_("beta is",beta,6);
        for (int i=0;i<NUM_REMOTE_VERTICES;i++) 
        {
            p[i]=-r[i]+beta*p[i];
        } 
        // p = -r + beta*p;
        for (int i=0;i<NUM_REMOTE_VERTICES;i++)neighbor_flags[i]=false;
        for (uint8_t i:neighbors) {
            if (i>nodeID) self_flags[i-1]=true;
            else self_flags[i-1]=false;
        }

    }

    r = matbyvec(&H[0][0],NUM_REMOTE_VERTICES,NUM_REMOTE_VERTICES,x);    
    for (int i=0;i<NUM_REMOTE_VERTICES;i++) {r[i]=r[i]-b[i];new_r[i]=r[i];received_from[i]=0;} 
	_print1Darray_("r",r,NUM_REMOTE_VERTICES,6);
    cnt=0;
    i = 0;
    start = millis();   // initialize timer
    while (millis()-start<=10000){
        uint8_t nei_to_send=neighbors[i]; 
        i++; if (i==_G->getN()-1) i=0;
        if (nei_to_send<nodeID)_SendToParent(nei_to_send,self_flags[nei_to_send-1],r[nei_to_send-1],5);
        else _SendToChild(nei_to_send,self_flags[nei_to_send-1],r[nei_to_send-1],5);
        if(_waitForUnicastPacket(neighborID,nodeID,OPF_HEADER,true,100))
            {
                if (!received_from[neighborID-1]){
                	received_from[neighborID-1]=1;
                    if (neighborID>nodeID){
                        cnt+=1; 
                        float *tmp=_getPacketFromChild(); 
                        uint8_t task = tmp[1];
                        if(task==5)
                        {
	                        new_r[neighborID-1]+=tmp[0];
	                        Serial<<"Received from "<<neighborID<<endl;
	                        Serial.print(tmp[0],6); Serial<<endl; delay(5);
	                    }
                    }
                    else if (neighborID<nodeID){
                        cnt+=1;                        
                        float *tmp=_getPacketFromParent();
                        uint8_t task = tmp[1];
                        if(task==5)
                        { 
	                        new_r[neighborID-1]+=tmp[0];
	                        Serial<<"Received from "<<neighborID<<endl;
	                        Serial.print(tmp[0],6); Serial<<endl; delay(5);
	                    }
                    }
                }
            }
    }
    for (int i=0;i<NUM_REMOTE_VERTICES;i++) r[i]=new_r[i];
    _print1Darray_("r",r,NUM_REMOTE_VERTICES,6);
    float error=0;
    for (int i=0;i<NUM_REMOTE_VERTICES;i++){
        if (error<abs(r[i])) error = abs(r[i]);
    }
    _print_("Error",error,6);
    // _print1Darray_("Newton direction",x,NUM_REMOTE_VERTICES,5);
    return x;
    
}

float OAgent_OPF::RunRatioConsensus(uint16_t nodeID, float *mu,float *nu,uint8_t iterations,uint8_t *neighbors,int num_neighbors,bool self_flags[NUM_REMOTE_VERTICES],bool neighbor_flags[NUM_REMOTE_VERTICES],float old_data[NUM_REMOTE_VERTICES],uint8_t task){

    uint8_t neighborID;
	bool ratio_cons_start[NUM_REMOTE_VERTICES]; for (int j=0;j<NUM_REMOTE_VERTICES;j++) ratio_cons_start[j] = false;
    for (int j=0;j<num_neighbors;j++) {
        uint8_t i = neighbors[j];
        if (i>nodeID) ratio_cons_start[i] = true;
    }

    uint8_t received_from[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++) received_from[i]=0;
	// float run_sum_mu=0,run_sum_nu=0;
	float run_sum_mu[NUM_REMOTE_VERTICES]; for (int j=0;j<NUM_REMOTE_VERTICES;j++) run_sum_mu[j]=0;
	float run_sum_nu[NUM_REMOTE_VERTICES]; for (int j=0;j<NUM_REMOTE_VERTICES;j++) run_sum_nu[j]=0;
    uint8_t numIterations[NUM_REMOTE_VERTICES]; for (int j=0;j<NUM_REMOTE_VERTICES;j++) numIterations[j]=0;
	float out_deg = float(_G->getN());
    // Serial<<"out-degree is "<<out_deg<<endl;delay(5);
	int i=0; 
    uint8_t k=0; bool must_break = false; srand(nodeID);
	while (true){
		uint8_t nei_to_send=neighbors[i]; 
        i++; if (i==_G->getN()) i=0;
  //       if (nei_to_send<nodeID && !ratio_cons_start[nei_to_send-1]){
  //       	_SendToParent(nei_to_send,self_flags[nei_to_send-1],old_data[nei_to_send-1]);
		// }

        run_sum_mu[nodeID-1] += (*mu)/out_deg;
        run_sum_nu[nodeID-1] += (*nu)/out_deg;
        // Serial<<run_sum_mu[nodeID-1]<<" "<<run_sum_nu[nodeID-1]<<endl; delay(5);
        (*mu) = (*mu)/out_deg; (*nu) = (*nu)/out_deg;
        bool not_received=true;
		unsigned long start = millis();   // initialize timer
        int cnt=0;
        while (millis()-start<=1000)
        {
            _CG_RC_SendPacket(run_sum_mu[nodeID-1],run_sum_nu[nodeID-1],k,task);
			if(_waitForNeighborPacket(neighborID,CG_RC_SUBHEADER,true,100))
	        {
                if (!received_from[neighborID-1])
                {
                    if (neighborID<nodeID) ratio_cons_start[neighborID-1]=true;
    	        	float* tmp=_CG_RC_ReceivePacket();
    	        	uint8_t task_received = tmp[3];
    	        	// if (task_received == task)
    	        	// {
                    // Serial<<"Received from "<<neighborID<<" "<<tmp[0]<<" "<<tmp[1]<<endl;
                    if (tmp[2]<numIterations[neighborID-1]) {Serial<<"Received "<<tmp[2]<<endl;must_break = true; break;}
    	        	*mu+= tmp[0]-run_sum_mu[neighborID-1];
    	        	*nu+= tmp[1]-run_sum_nu[neighborID-1];
                    if (tmp[2]<=k+10) numIterations[neighborID-1] = tmp[2];

    	        	run_sum_mu[neighborID-1] = tmp[0];
    	        	run_sum_nu[neighborID-1] = tmp[1];
                    received_from[neighborID-1] = 1;

                    not_received=false;
	                // }
	                // else {must_break = true; break;}
                }
	        }
            // cnt+=1; if (cnt>40) {Serial<<"Did not receive any packet"<<endl;must_break=true;break;}
	    }
        if (must_break) break;
        uint8_t minIter = k, maxIter = k;
        for (int j=0;j<num_neighbors;j++) {
            if (minIter>numIterations[neighbors[j]-1]) minIter=numIterations[neighbors[j]-1];
            if (maxIter<numIterations[neighbors[j]-1]) maxIter=numIterations[neighbors[j]-1];
        }
        if (minIter>iterations) break;
        // if (k%5==0) Serial<<minIter<<" "<<maxIter<<endl;
	    k++;
        for (int i=0;i<NUM_REMOTE_VERTICES;i++) received_from[i]=0;

	}
    delay(5);
    // Serial<<"Ratio consensus r = "<<(*mu)/(*nu)<<endl;
	return (*mu)/(*nu);

}


// Matrix, vector algebraic operations

float OAgent_OPF::dot(float*a, float*b){
    float res=0;
    int n = sizeof(a)/sizeof(a[0]);

    for (int j=0;j<n;j++){
        res+=a[j]*b[j];
    }
    return res;
}
float* OAgent_OPF::matbyvec(float*A,int rows, int cols, float*b){
    
    float* res = new float[rows];
    int k=0;
    for (int i=0;i<rows;i++){
        res[i]=0;
        for (int j=0;j<cols;j++){
            res[i]+=(*((A+i*cols)+j))*b[j]; k++;
        }
        
    }
    return res;

}
void OAgent_OPF::transpose(float *A_T, float* A, int rows,int cols) 
{ 
    // int m = sizeof(A)/sizeof(A[0]), n = sizeof(A[0])/sizeof(A[0][0]);    
    // float B[n][m];
    // float **B = new float[n][m]; 
    // *((arr+i*n) + j)
    float **B = new float*[rows]; 
    for(int i=0;i<rows;i++)
    {
        B[i]=new float[cols];
    }
    // Serial<<"Transpose"<<" "<<rows<<" "<<cols<<endl; delay(10);
    int k=0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // B[j][i] = A[k];
            *((A_T+j*rows)+i) = *((A+i*cols)+j); 
            // Serial<<*((A_T+j*rows)+i)<<endl; delay(10);
            k++;
        }
    }
    // Serial<<B[0][0]<<endl; delay(10);
    // return B;
} 

void OAgent_OPF::multiply(float *res, float* a,int rows_A, int cols_A, float* b, int rows_B, int cols_B){
    // int m = sizeof(A)/sizeof(A[0]), n = sizeof(B[0])/sizeof(B[0][0]);
    // int rows_B = sizeof(B)/sizeof(B[0]);
    // float res[m][n];
    // float** A = new float[rows_A][cols_A];
    // Serial<<"Multiply"<<endl; delay(10);
    float A[rows_A][cols_A]; 
    // for(int i=0;i<rows_A;i++)
    // {
    //     A[i]=new float[cols_A];
    // }
    float B[rows_B][cols_B];
    // float **B = new float*[rows_B]; 
    // for(int i=0;i<rows_B;i++)
    // {
    //     B[i]=new float[cols_B];
    // }
    int k=0;
    for (int i=0;i<rows_A;i++){
        for (int j=0;j<cols_A;j++){
            A[i][j]=*((a+i*cols_A)+j);
        }
    }
    k=0;
    for (int i=0;i<rows_B;i++){
        for (int j=0;j<cols_B;j++){
            B[i][j]=*((b+i*cols_B)+j);
        }
    }
    // _print2Darray_("A Matrix",&A[0][0],rows_A,cols_A,3);
    // _print2Darray_("B Matrix",&B[0][0],rows_B,cols_B,3);
    // float** res = new float[rows_A][cols_B];
    // float **res = new float*[rows_A]; 
    // for(int i=0;i<rows_A;i++)
    // {
    //     res[i]=new float[cols_B];
    // }
    for (int i=0;i<rows_A;i++){
        for (int j=0;j<cols_B;j++){
            *((res+i*cols_B)+j)=0;
            for (int k=0;k<rows_B;k++){
                *((res+i*cols_B)+j)+=A[i][k]*B[k][j];
            }
        }
    }
    // return res;
}

 float OAgent_OPF:: _clip(float x, float xmin, float xmax){
        if (x<xmin) return xmin;
        if (x>xmax) return xmax;
        return x;
    }

/// Functions for Communicating Data
void OAgent_OPF::_sender_helper(float x,uint8_t* sign_y,uint32_t* y){
        if (x < 0) 
        {
            *y = (uint32_t) (-x*BASE);
            *sign_y= 0;
        }
        else
        {
            *y = (uint32_t) (x*BASE);
            *sign_y = 1;
        }
    }

void OAgent_OPF::_SendToChild(uint16_t recipientID, bool flag_OPF, float num, uint8_t task) {
    uint8_t payload[11];

    payload[0] = OPF_HEADER;
    payload[1] = OPF_HEADER >> 8;
    payload[2] = recipientID;
    payload[3] = recipientID >> 8;
    payload[4] = flag_OPF;

    // fp,yp,fq,yq,nu,yn,fv,yv,lmbd_v,ylmbd;

    uint8_t sign_var; uint32_t var;
    _sender_helper(num,&sign_var,&var);
    payload[5]=sign_var;
    payload[6] = var;
    payload[7] = var >> 8;
    payload[8] = var >> 16;
    payload[9] = var >> 24;

    payload[10] = task;

    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload)); // create zigbee transmit class
    unsigned long txTime = _xbee->sendTwo(_zbTx,false,true); // transmit with time stamp
    #ifdef VERBOSE
        Serial << _MEM(PSTR("Transmit time: ")) << txTime << endl;
    #endif
}

void OAgent_OPF::_SendToParent(uint16_t recipientID, bool flag_OPF, float num, uint8_t task){
    uint8_t payload[11];

    payload[0] = OPF_HEADER;
    payload[1] = OPF_HEADER >> 8;
    payload[2] = recipientID;
    payload[3] = recipientID >> 8;
    payload[4] = flag_OPF;

    // fp,yp,fq,yq,nu,yn,fv,yv,lmbd_v,ylmbd;

    uint8_t sign_var; uint32_t var;
    _sender_helper(num,&sign_var,&var);
    payload[5]=sign_var;
    payload[6] = var;
    payload[7] = var >> 8;
    payload[8] = var >> 16;
    payload[9] = var >> 24;

    payload[10] = task;
    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload)); // create zigbee transmit class
    unsigned long txTime = _xbee->sendTwo(_zbTx,false,true); // transmit with time stamp
    #ifdef VERBOSE
        Serial << _MEM(PSTR("Transmit time: ")) << txTime << endl;
    #endif
}


void OAgent_OPF::_CG_RC_SendPacket(float mu, float nu, uint8_t k, uint8_t task){
    uint8_t payload[16];

    payload[0] = CG_RC_SUBHEADER;
    payload[1] = CG_RC_SUBHEADER >> 8;
    payload[2] = CG_RC_SUBHEADER;  // dummy payloads
    payload[3] = CG_RC_SUBHEADER >> 8;

    uint8_t sign_var; uint32_t var;
    _sender_helper(mu,&sign_var,&var);
    payload[4]=sign_var;
    payload[5] = var;
    payload[6] = var >> 8;
    payload[7] = var >> 16;
    payload[8] = var >> 24;

    _sender_helper(nu,&sign_var,&var);
    payload[9]=sign_var;
    payload[10] = var;
    payload[11] = var >> 8;
    payload[12] = var >> 16;
    payload[13] = var >> 24;

    payload[14] = k;
    payload[15] = task;
    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload)); // create zigbee transmit class
    unsigned long txTime = _xbee->sendTwo(_zbTx,false,true); // transmit with time stamp
    #ifdef VERBOSE
        Serial << _MEM(PSTR("Transmit time: ")) << txTime << endl;
    #endif
}

float* OAgent_OPF::_CG_RC_ReceivePacket() {
    float *a = new float[4];
    int32_t mag_x; int8_t sign_x; float x;
    mag_x = (int32_t(_rx->getData(8)) << 24) + (int32_t(_rx->getData(7)) << 16) + (int16_t(_rx->getData(6)) << 8) + int8_t(_rx->getData(5));
    sign_x = -1 + ((_rx->getData(4))*2);
    x = (float) (sign_x*mag_x);
    a[0] = x/BASE;

    mag_x = (int32_t(_rx->getData(13)) << 24) + (int32_t(_rx->getData(12)) << 16) + (int16_t(_rx->getData(11)) << 8) + int8_t(_rx->getData(10));
    sign_x = -1 + ((_rx->getData(9))*2);
    x = (float) (sign_x*mag_x);
    a[1] = x/BASE;
    a[2] = int8_t(_rx->getData(14));
    a[3] = int8_t(_rx->getData(15));

    return a;
}

float* OAgent_OPF::_getPacketFromChild() {
    float *a = new float[2];
    int32_t mag_x; int8_t sign_x; float x;
    mag_x = (int32_t(_rx->getData(9)) << 24) + (int32_t(_rx->getData(8)) << 16) + (int16_t(_rx->getData(7)) << 8) + int8_t(_rx->getData(6));
    sign_x = -1 + ((_rx->getData(5))*2);
    x = (float) (sign_x*mag_x);
    a[0] = x/BASE;
    a[1] = int8_t(_rx->getData(10));
    return a;
}

float* OAgent_OPF::_getPacketFromParent() {
    float *a = new float[2];
    int32_t mag_x; int8_t sign_x; float x;
    mag_x = (int32_t(_rx->getData(9)) << 24) + (int32_t(_rx->getData(8)) << 16) + (int16_t(_rx->getData(7)) << 8) + int8_t(_rx->getData(6));
    sign_x = -1 + ((_rx->getData(5))*2);
    x = (float) (sign_x*mag_x);
    a[0] = x/BASE;
    a[1] = int8_t(_rx->getData(10));
    return a;
}


bool OAgent_OPF::_getFlagFromChild() {
    bool flag_OPF = (bool) _rx->getData(4);
    
    return flag_OPF;
}

bool OAgent_OPF::_getFlagFromParent() {
    bool flag_OPF = (bool) _rx->getData(4);
    
    return flag_OPF;
}


// Functions for Printing 
void OAgent_OPF::_print_(String s,float val,uint8_t precision){

    Serial<<s<<" "; Serial.print(val,precision); Serial<<endl;
    delay(5);
}
void OAgent_OPF::_print2Darray_(String s,float*A,int rows,int cols,uint8_t precision){
    // int m = sizeof(A)/sizeof(A[0]), n = sizeof(A[0])/sizeof(A[0][0]);
    Serial<<s<<":"<<endl;
    int k=0;
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            // Serial.print(A[k],precision);Serial<<" "; k++;
            Serial.print(*((A+i*cols)+j),precision);Serial<<" ";
        }
        Serial<<endl;//*((arr+i*n) + j)
        delay(5);
    }
    // delay(5);
    
}

void OAgent_OPF::_print1Darray_(String s,float* a,int size,uint8_t precision){
    // int n = sizeof(a)/sizeof(a[0]);
    Serial<<s<<":"<<endl;
    for (int i=0;i<size;i++){
        Serial.print(*(a+i),precision);Serial<<" ";
    }
    Serial<<endl;
    delay(5);
}

/// Synchronization methods
bool OAgent_OPF::sync(uint8_t attempts) {
    
    if(_leader) {
    	//Serial << "Is leader, and is in sync\n";
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
    		unsigned long neighborID = _getUint32_tFromPacket(ptr); //node id of synced node
    		unsigned long period = _getUint32_tFromPacket(ptr);

    		unsigned long start = millis();

    		while(millis() - start < period)
    		{
    			//JUST WAIT UNTIL PERIOD IS OVER
    		}
    		//Serial << "Recieved ID: ";
    		//Serial << neighborID;
    		//Serial << "\n";
    		//Serial << "Response packet sent";
    		//Serial << "\n";

    		_broadcastResyncResponsePacket(tTwo,neighborID);

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

bool OAgent_OPF::resync(){
	OLocalVertex * s = _G->getLocalVertex(); // store pointer to local vertex 
	unsigned long nodeID = s->getID();
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
		if(nodeID == received_id)
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
            //Serial << "long Local offset \n";
			//Serial << local_offset;
            //Serial << "\n";
            _broadcastResyncFinalPacket(local_offset);
			return true;	
		}
		
	}

	return false;

}


unsigned long OAgent_OPF::_broadcastResyncBeginPacket(unsigned long period){

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


void OAgent_OPF::_broadcastResyncResponsePacket(unsigned long t2, unsigned long received_id){

	uint16_t payload[5];
	payload[0] = RESYNC_RESPONSE_HEADER;
	_addUint32_tToPayload(uint32_t(t2),((uint8_t * )(&payload)),2);
	_addUint32_tToPayload(uint32_t(received_id),((uint8_t * )(&payload)),6);

	_zbTx = ZBTxRequest(_broadcastAddress,((uint8_t *)(&payload)),sizeof(payload));
    // send packet without timestamp and return time packet was sent
    _xbee->sendTwo(_zbTx,true,false);

}


bool OAgent_OPF::_waitForResyncPacketResponse(unsigned long &rxTime, uint16_t timeout){

	return _waitForPacket(RESYNC_RESPONSE_HEADER, rxTime, true, timeout);      //assuming response is broadcasted from unsynced not
}

bool OAgent_OPF::_waitForResyncFinalPacket(unsigned long timeout){

	return _waitForPacket(RESYNC_HEADER_FINAL, false, timeout);
}

void OAgent_OPF::_broadcastResyncFinalPacket(long offset){

	uint16_t payload[3];
	payload[0] = RESYNC_HEADER_FINAL;
	_addUint32_tToPayload(uint32_t(offset),((uint8_t * )(&payload)),2);
	_zbTx = ZBTxRequest(_rx->getRemoteAddress64(),((uint8_t *)(&payload)),sizeof(payload));

    return _xbee->send(_zbTx);

}

////////////////////////////////////////////////

unsigned long OAgent_OPF::myMillis() { 
	return millis() - (unsigned long)_offset; 
}

void OAgent_OPF::_initializeFairSplitting(OLocalVertex * s, long y, long z) {
    _G->clearAllStates();                   // clear everything
    uint8_t Dout = s->getOutDegree() + 1;   // store out degree

    // // added in by Olaolu. If a node i is out, forloop adds (1/Dout_i) of its initial value
    // for (int i=0; i< NUM_REMOTE_VERTICES; i++){
    // 	if ((s->getStatus(i)) == 1){
    // 		y = y + getneighborY0(i);
    //         z = z + getneighborZ0(i);
    // 	}
    // }   
    s->setYMin(y - s->getMin());            // set initial y value (using yMin) [y - min]
    //Serial << "\nNode "<<s->getID()<<"'s' Y[0] is: "<<s->getYMin()<<"\n";
    s->setMuMin(s->getYMin()/Dout);         // Initialize mu = y/
    s->setZ(z - s->getMin());     // set initial z value [z - min]
    //Serial << "\nNode "<<s->getID()<<"'s' Z[0] is: "<<s->getZ()<<"\n";
    s->setSigma(s->getZ()/Dout);            // Initialize sigma = z/Dout
}

// Resilient version
void OAgent_OPF::_initializeFairSplitting_RSL(OLocalVertex * s, long y, long z) {
    _G->clearAllStates();                   // clear everything
    uint8_t Dout = s->getOutDegree() + 1;   // store out degree

    // for (int i=0; i< NUM_REMOTE_VERTICES; i++){
    //     if ((s->getStatus(i)) == 1){
    //         y = y + getneighborY0(i);
    //         z = z + getneighborZ0(i);
    //     }
    // }   
    s->setYMin(y - s->getMin());            // set initial y value (using yMin) [y - min]
    s->setMuMin(s->getYMin()/Dout);         // Initialize mu = y/
    s->setZ(z - s->getMin());     // set initial z value [z - min]
    s->setSigma(s->getZ()/Dout);            // Initialize sigma = z/Dout

    //initialize min and max consensus. Min consensus is used to choose leader, max consensus is used to choose deputy
    //s->setleaderID(s->getID());
    //s->setdeputyID(s->getID());
}

void OAgent_OPF::_broadcastFairSplitPacket(OLocalVertex * s) {   
    uint16_t payload[6];           
    long mu    = s->getMuMin();
    long sigma = s->getSigma();
    uint16_t id = s->getID();
    //uint16_t inheritorID = s->chooseInheritor();

    payload[0] = FAIR_SPLITTING_HEADER;
    payload[1] = mu;
    payload[2] = mu >> 16;
    payload[3] = sigma;
    payload[4] = sigma >> 16;
    payload[5] = id;
    //payload[6] = inheritorID;   //added in by Olaolu

    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload)); // create zigbee transmit class
    unsigned long txTime = _xbee->sendTwo(_zbTx,false,true); // transmit with time stamp
#ifdef VERBOSE
    Serial << _MEM(PSTR("Transmit time: ")) << txTime << endl;
#endif
}

//leaderfailure-resilient version (Olaolu)
void OAgent_OPF::_broadcastFairSplitPacket_RSL(OLocalVertex * s) {   
    uint16_t payload[6];           
    long mu    = s->getMuMin();
    long sigma = s->getSigma();
    uint16_t id = s->getID();
    //uint16_t inheritorID = s->chooseInheritor();
    //uint16_t leaderID = s->getleaderID();
    //uint16_t deputyID = s->getdeputyID();

    payload[0] = FAIR_SPLITTING_HEADER;
    payload[1] = mu;
    payload[2] = mu >> 16;
    payload[3] = sigma;
    payload[4] = sigma >> 16;
    payload[5] = id;
    //payload[6] = inheritorID;   //added in by Olaolu
    //payload[7] = leaderID;   //added in by Olaolu
    //payload[8] = deputyID;   //added in by Olaolu

    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload)); // create zigbee transmit class
    unsigned long txTime = _xbee->sendTwo(_zbTx,false,true); // transmit with time stamp
#ifdef VERBOSE
    Serial << _MEM(PSTR("Transmit time: ")) << txTime << endl;
#endif
}

//leaderfailure-resilient version (Olaolu)
void OAgent_OPF::_broadcastMaxMinPacket(long max, long min) {   
    uint16_t payload[5];
    payload[0] = MAXMIN_HEADER;
    payload[1] = max;
    payload[2] = max >> 16;
    payload[3] = min;
    payload[4] = min >> 16;

    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload)); // create zigbee transmit class
    unsigned long txTime = _xbee->sendTwo(_zbTx,false,true); // transmit with time stamp
#ifdef VERBOSE
    Serial << _MEM(PSTR("Transmit time: ")) << txTime << endl;
#endif
}

long OAgent_OPF::_getMuFromPacket() {
    uint8_t ptr = 2;
    return _getUint32_tFromPacket(ptr);
}

long OAgent_OPF::_getSigmaFromPacket() {
    uint8_t ptr = 6;
    return _getUint32_tFromPacket(ptr);
}

/// End fair splitting ratio-consensus methods

/// General xbee methods

/*
 * This function verifies the validity of an xbee packet.
 * It first checks to see if a packet is available then verifies that it is a zigbee rx packet.
 * If the packet it is valid the function will return true and it will store the response in the
 * ZBRxResponse parameter.
 */
bool OAgent_OPF::_validPacketAvailable() {
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

bool OAgent_OPF::_packetAvailable(uint16_t header, bool broadcast) {
    // read packet
    _xbee->readPacket();
    return _packetAvailableHelper(header,broadcast);
}

bool OAgent_OPF::_packetAvailable(uint16_t header,  unsigned long &rxTime, bool broadcast) {
    // read packet and save rx time
    rxTime = _xbee->readPacketTwo(true);
    //Serial << "\n Before packetAvailableHelper \n";
    return _packetAvailableHelper(header,broadcast);
}

uint16_t OAgent_OPF::_packetAvailable(bool broadcast) {
    _xbee->readPacket();
    if(_validPacketAvailable()) {
        if(((broadcast == true) && ((_rx->getOption() & 0x0F) == ZB_BROADCAST_PACKET)) || ((broadcast == false) && ((_rx->getOption() & 0x0F) == ZB_PACKET_ACKNOWLEDGED)))
            return _getHeaderFromPacket();
    }
    return 0x0;
}


bool  OAgent_OPF::_packetAvailable2(unsigned long &rxTime, bool broadcast){

	rxTime = _xbee->readPacketTwo(true);

	if(_validPacketAvailable()) {
        if(((broadcast == true) && ((_rx->getOption() & 0x0F) == ZB_BROADCAST_PACKET)) || ((broadcast == false) && ((_rx->getOption() & 0x0F) == ZB_PACKET_ACKNOWLEDGED)))
            return true;
    }
}


 
bool OAgent_OPF::_packetAvailableHelper(uint16_t header, bool broadcast) {
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

bool OAgent_OPF::_packetACKed(int timeout) {
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
//uint16_t OAgent_OPF::_getHeaderFromPacket() {
//	return (uint16_t(_rx->getData(1)) << 8) + _rx->getData(0);
//}

bool OAgent_OPF::_waitForPacket(uint16_t header, unsigned long &rxTime, bool broadcast, int timeout) {
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

bool OAgent_OPF::_waitForPacket(uint16_t header, bool broadcast, int timeout) { //Where it stays in an endless loop (if timeout =-1) until packet received
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

int  OAgent_OPF::_waitForPacket2(uint16_t header1, uint16_t header2, unsigned long &rxTime, bool broadcast){

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

uint16_t OAgent_OPF::_waitForValidPacket(bool broadcast, int timeout) {
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

bool OAgent_OPF::_waitToStart(unsigned long startTime, bool useMyMillis, int timeout) {
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
uint16_t OAgent_OPF::_genTxTime(uint16_t iterationPeriod, uint8_t ITF) {
	srand(analogRead(0));
	return (rand() % (iterationPeriod - 2*ITF)) + ITF;
}

/*
 * This function generates a random transmit time given an iteration period and inter-frame spacing.
 * A seed for the random number generation is accepted as an argument.
 */
uint16_t OAgent_OPF::_genTxTime(uint16_t iterationPeriod, uint8_t ITF, int seed) {
	srand(seed);
	return (rand() % (iterationPeriod - 2*ITF)) + ITF;
}

bool OAgent_OPF::_timeToTransmit(uint16_t startTime, uint16_t txTime) {
    if((int((millis() - startTime)) >= txTime))
        return true;
    else
        return false;
}




// OPF Communication Methods

float OAgent_OPF::_getActiveFlowFromPacket() {
    int32_t mag_fp = (int32_t(_rx->getData(8)) << 24) + (int32_t(_rx->getData(7)) << 16) + (int16_t(_rx->getData(6)) << 8) + int8_t(_rx->getData(5));
    int8_t sign_fp = -1 + ((_rx->getData(4))*2);
    float fp = (float) (sign_fp*mag_fp);
    fp = fp/BASE;

    return fp;
}

float OAgent_OPF::_getActiveFlowFromPacket_self() {
    int32_t mag_fp = (int32_t(_rx->getData(14)) << 24) + (int32_t(_rx->getData(13)) << 16) + (int16_t(_rx->getData(12)) << 8) + int8_t(_rx->getData(11));
    int8_t sign_fp = -1 + ((_rx->getData(10))*2);
    float fp = (float) (sign_fp*mag_fp);
    fp = fp/BASE;

    return fp;
}

bool OAgent_OPF::_getFlagFromPacket() {
    bool flag_OPF = (bool) _rx->getData(9);
    
    return flag_OPF;
}

bool OAgent_OPF::linkActivationAlgorithm() {  
    uint8_t maxActCode;
    if(isLeader())
        maxActCode = _assignLinkACTCODES();
    else
    {
        _listenForLinkACTCODES(-1);
        Serial << "Resuming parent role"<<endl;
		delay(10);
        maxActCode = _assignLinkACTCODES();
        uint16_t start = millis();
        while (uint16_t(millis()-start) < 10)
            _broadcastHeaderPacket(LINKSACT_HEADER);
    }
    Serial << "Starting maxmin consensus algorithm with maxActCode " << maxActCode <<endl;
    //run max consensus to determine the max activation code value that is used. This will be used to determine the period for each iteration
    long max =  maxminConsensusAlgorithm(true,maxActCode,0,10,200);
    _windowsPerPeriod = uint8_t(max);
    Serial << "Number of windows per period is " << _windowsPerPeriod <<endl;
    
    return true;
}

uint8_t OAgent_OPF:: _assignLinkACTCODES() {
    OLocalVertex * s = _G->getLocalVertex(); // store pointer to local vertex
    ORemoteVertex * n = _G->getRemoteVertex(1); // store pointer to remote vertices
    LinkedList * l = _G->getLinkedList(); // store pointer to linkedlist

    uint16_t recipientID;
    uint8_t neighborID;
    uint8_t nodeID = s->getID();
    uint8_t i = 0, j = 0;

    //_listenForLinkACTCODES(10);

    recipientID = l->findUncodedLink(n);
    // Serial << "Link to node " << recipientID << " has no actcode \n";
    // delay(5);
    while(recipientID != 0)
    {
    	while(true)
    	{
        	_candactcodePacket(recipientID);
	    	// Serial << "candactcode sent to node " << neighborID <<endl;
	     //    delay(5);
        	if(_waitForUnicastPacket(neighborID,nodeID,ACTCODE_HEADER,true,100))						//wait for an acknowledgement for candactcode packet
    			break;
    	}
    	// Serial << "received actcode from node " << neighborID <<endl;
     //    delay(5);
        if(neighborID == recipientID)
        {
            _broadcastACKPacket(ACK_ACTCODE,neighborID);							//send acknowledgement for actcode packet
        	i++;
            (n+(neighborID-1))->setLinkActCode(_getACTCODEFromPacket());
            l->updateCodedLinks(n);
        }
        //_listenForLinkACTCODES(10);															//placed here to account for a non radial communication graph
        recipientID = l->findUncodedLink(n);
    }
    while (j != i)
    {
        if(_waitForNeighborPacket(neighborID,LINKSACT_HEADER,true,-1))
        {
            if((l->isCodedLinkAvailable(neighborID)) && !((n+(neighborID-1))->isLinkParent()))        //if this packet hasn't been received yet and the neighbor is not a link parent, accept packet
            {    
                j++;
                //l->unlinkCodedLink(neighborID);
		        // Serial << "received linksact packet from node " << neighborID <<endl;
		        // delay(10);
            }
        }
        // if (j == i)
        //     l->updateCodedLinks(n);

        Serial << "received linksact packet from all nodes "<<endl;
        delay(10);
    }
    // display activation codes on serial monitor
    l->displayCodedLinkedList(n);
    return (l->getMaxActCode(n));
}

void OAgent_OPF::_listenForLinkACTCODES(int timeout) { 
    OLocalVertex * s = _G->getLocalVertex(); // store pointer to local vertex
    ORemoteVertex * n = _G->getRemoteVertex(1); // store pointer to remote vertices
    LinkedList * l = _G->getLinkedList(); // store pointer to linkedlist

    uint8_t nodeID = s->getID();
    uint8_t neighborID;
    uint8_t k = 0;

    bool flag = false;
    bool codeAvailable = false;
    uint8_t actCode = 0;
    if(_waitForUnicastPacket(neighborID,nodeID,CANDACTCODE_HEADER,true,timeout))
    {
     //    Serial << "received candactcode from node " << neighborID <<endl;
    	// delay(10);
        (n+(neighborID-1))->setLinkParent(true);                               //set neighbor as link activation lead neighbor
        while(!codeAvailable)
        {
            
	        actCode = _getCANDACTCODEFromPacket(k);								//get the kth candidate activation code that is contained in packet
      //       Serial << "Got actcode " << actCode  << " from packet" <<endl;
	    	// delay(10);
            if (k == 0)
            	codeAvailable = true;
            else
            	codeAvailable = l->isActCodeAvailable(actCode,n,flag);
            if (codeAvailable)
            {
          //   	Serial << "act code chosen" <<endl;
        		// delay(10);
        	}
            k++;
        }
     //    Serial << "sending actcode to node " << neighborID <<endl;
    	// delay(10);
    	while(true)
    	{
        	_actcodePacket(neighborID,actCode);
        	if(_waitForUnicastPacket(neighborID,nodeID,ACK_ACTCODE,true,100))						//wait for an acknowledgement for actcode packet
    			break;
    	}
        (n+(neighborID-1))->setLinkActCode(actCode);
        l->updateCodedLinks(n);
    }
}

void OAgent_OPF::_candactcodePacket(uint16_t recipientID) {
    OLocalVertex * s = _G->getLocalVertex(); // store pointer to local vertex
    ORemoteVertex * n = _G->getRemoteVertex(1); // store pointer to remote vertices
    LinkedList * l = _G->getLinkedList(); // store pointer to linkedlist

    bool flag = false;
    bool codeAvailable = false;
    uint8_t candactcode = 0;

    if (isLeader())
    {
        uint8_t payload[5];
        //construct payload
        payload[0] = CANDACTCODE_HEADER;
        payload[1] = CANDACTCODE_HEADER >> 8;
        payload[2] = recipientID;
        payload[3] = recipientID >> 8;
        while (!codeAvailable)
        {
            candactcode++;
            codeAvailable = l->isActCodeAvailable(candactcode,n,flag);
        }
        payload[4] = candactcode;
        _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload)); // create zigbee transmit class
        unsigned long txTime = _xbee->sendTwo(_zbTx,false,true); // transmit with time stamp
        #ifdef VERBOSE
            Serial << _MEM(PSTR("Transmit time: ")) << txTime << endl;
        #endif

    }

    else
    {
        uint8_t payload[26];
        //construct payload
        payload[0] = CANDACTCODE_HEADER;
        payload[1] = CANDACTCODE_HEADER >> 8;
        payload[2] = recipientID;
        payload[3] = recipientID >> 8;
        for (uint8_t i=4; i<= 25; i++)
        {
            if (flag)
            {
                candactcode++;
                payload[i] = candactcode;
            }
            else
            {    
                codeAvailable = false;
                while (!codeAvailable)
                {
                    candactcode++;
                    codeAvailable = l->isActCodeAvailable(candactcode,n,flag);
                }
                payload[i] = candactcode;
            }
        }
        _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload)); // create zigbee transmit class
        unsigned long txTime = _xbee->sendTwo(_zbTx,false,true); // transmit with time stamp
        #ifdef VERBOSE
            Serial << _MEM(PSTR("Transmit time: ")) << txTime << endl;
        #endif
    }
}


void OAgent_OPF::_actcodePacket(uint16_t recipientID, uint8_t actcode) {
    uint8_t payload[5];
    //construct payload
    payload[0] = ACTCODE_HEADER;
    payload[1] = ACTCODE_HEADER >> 8;
    payload[2] = recipientID;
    payload[3] = recipientID >> 8;
    payload[4] = actcode;
    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload)); // create zigbee transmit class
    unsigned long txTime = _xbee->sendTwo(_zbTx,false,true); // transmit with time stamp
    #ifdef VERBOSE
        Serial << _MEM(PSTR("Transmit time: ")) << txTime << endl;
    #endif
}

void OAgent_OPF::_linksactPacket(uint16_t recipientID) {
    uint8_t payload[4];
    // put header in payload array
    payload[0] = LINKSACT_HEADER;
    payload[1] = LINKSACT_HEADER >> 8;
    payload[2] = recipientID;
    payload[3] = recipientID >> 8;

    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload));
    _xbee->send(_zbTx);
}


bool OAgent_OPF::_waitForNeighborPacket(uint8_t &neighborID, uint16_t header, bool broadcast, int timeout) {
    unsigned long start;
    if(timeout != -1)
        start = millis();
    while(true) {
        if((timeout != -1) && (millis()-start >= timeout))
            return false;
        if(_waitForPacket(header,true,timeout)) {                       //unless the packet contains the expected header it will keep waiting
            int32_t aLsb = _rx->getRemoteAddress64().getLsb();
            uint8_t index;  
            if(_G->isInNeighbor(aLsb,index)) {
                neighborID = index + 1;
                return true;
            }
        }
    }
}

bool OAgent_OPF::_waitForUnicastPacket(uint8_t &neighborID, uint8_t nodeID, uint16_t header, bool broadcast, int timeout) {
    unsigned long start;
    if(timeout != -1)
        start = millis();
    while(true) {
        if((timeout != -1) && (millis()-start >= timeout))
            return false;
        if(_waitForPacket(header,true,timeout)) {                       //unless the packet contains the expected header it will keep waiting
            int32_t aLsb = _rx->getRemoteAddress64().getLsb();
            uint16_t recipientID = _getRecipientIDFromPacket(); //Serial<<"Received OPF packet for node "<<recipientID<<endl;delay(5);
            uint8_t index;  
            if(_G->isInNeighbor(aLsb,index)) {
                // Serial<<"Received OPF packet from neighbor"<<endl;
                if(recipientID == nodeID) {    //check that the packet's recipient ID matches the node ID
                    neighborID = index + 1;
                    return true;
                }
            }
        }
    }
}

 // End Sced communication methods



void OAgent_OPF::_broadcastSchedulePacket(uint16_t header, unsigned long startTime, uint8_t numIterations, uint16_t period) {
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

void OAgent_OPF::_broadcastSchedulePacketOPF(unsigned long startTime, uint8_t numIterations) {
    uint8_t payload[7];
    // put header in payload array
    payload[0] = SCHEDULE_OPF_HEADER;
    payload[1] = SCHEDULE_OPF_HEADER >> 8;
    // put start time in payload array
    payload[2] = startTime;
    payload[3] = startTime >> 8;
    payload[4] = startTime >> 16;
    payload[5] = startTime >> 24;
    // put number of iterations in payload array
    payload[6] = numIterations;
    // put payload in zigbee transmit object
    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload)); 
    // transmit packet
    _xbee->send(_zbTx);
}

void OAgent_OPF::_waitForSchedulePacket(uint16_t header, unsigned long &startTime, uint8_t &iterations, uint16_t &period, uint8_t id, int timeout) {
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

bool OAgent_OPF::_waitForSchedulePacket_RSL(uint16_t header, unsigned long &startTime, uint8_t &iterations, uint16_t &period, int timeout) {
    uint8_t neighborID;
    LinkedList * l = _G->getLinkedList();    							//get pointer to linked list
    OLocalVertex * s = _G->getLocalVertex(); 							// store pointer to local vertex 
    l->resetLinkedListStatus(s->getStatusP());                          //gets linkedlist and resets status of online neighbors to 2 
    
    // Serial << "Waiting for Schedule Packet"<<endl;
    // delay(5);

    if(_waitForNeighborPacket(neighborID,header,true,timeout)) {  		//stays in loop until desired packet received
        if(header == SCHEDULE_FAIR_SPLIT_HEADER)
        {       
            startTime   = _getStartTimeFromPacket();
            iterations  = _getIterationsFromPacket();
            period      = _getPeriodFromPacket();
            uint16_t start = millis();
            while(uint16_t(millis()-start) < 10)
            {
                _broadcastScheduleFairSplitPacket(startTime,iterations,period);
                _broadcastACKPacket(ACK_START_HEADER,neighborID);
            }
            return true;
        }
        else if(header == SCHEDULE_OPF_HEADER)
        {      
            startTime   = _getStartTimeFromPacket();
            iterations  = _getIterationsFromPacket();
            period      = _getPeriodFromPacket();
            uint16_t start = millis();
            s->setStatus(neighborID, 3);
            l->updateLinkedList(s->getStatusP());   					//update linked list
            while(uint16_t(millis()-start) < 10)
                _broadcastACKPacket(SCHEDULE_OPF_ACK_HEADER,neighborID);

            return _waitForACKPacket_RSL(SCHEDULE_OPF_HEADER,SCHEDULE_TIMEOUT, startTime, iterations, period);
        }
        else if(header == SCHEDULE_MAXMIN_HEADER)
        {
            // Serial << "Received a Schedule Packet"<<endl;
            // delay(5);

            startTime   = _getStartTimeFromPacket();
            iterations  = _getIterationsFromPacket();
            period      = _getPeriodFromPacket();
            uint16_t start = millis();
            s->setStatus(neighborID, 3);
            l->updateLinkedList(s->getStatusP());   					//update linked list
            while(true)
            {
                // Serial << "Sending Schedule ACK Packet to node " << neighborID<<endl;
                // delay(5);

                _broadcastACKPacket(SCHEDULE_MAXMIN_ACK_HEADER,neighborID);
                if(_waitForUnicastPacket(neighborID,(_G->getLocalVertex())->getID(),SCHEDULE_MAXMIN_ACKACK_HEADER,true,100))						//wait for an acknowledgement for candactcode packet
                {
                    // Serial << "received schedule ACKACK from node " << neighborID<<endl;
                    // delay(5);
    				break;
                }
            }
            return _waitForACKPacket_RSL(SCHEDULE_MAXMIN_HEADER,SCHEDULE_TIMEOUT, startTime, iterations, period);
        }
    }
    else
        return false;
}

bool OAgent_OPF::_waitForScheduleFeasibleFlowPacket(unsigned long &startTime, uint8_t &iterations, int timeout) {
    uint8_t neighborID;
    uint16_t header = SCHEDULE_OPF_HEADER;
    LinkedList * l = _G->getLinkedList();                      						//get pointer to linked list
    OLocalVertex * s = _G->getLocalVertex(); 										// store pointer to local vertex 
    l->resetLinkedListStatus(s->getStatusP());                                      //gets linkedlist and resets status of online neighbors to 2 

    Serial << "Waiting for Schedule OPF Packet"<<endl;
    delay(5);

    if(_waitForNeighborPacket(neighborID,header,true,timeout)) {                    //stays in loop until desired packet received

        Serial << "Received Schedule OPF Packet"<<endl;
        delay(5);
    
        startTime   = _getStartTimeFromPacket();
        iterations  = _getIterationsFromPacket();
        uint16_t start = millis();
        s->setStatus(neighborID, 3);
        l->updateLinkedList(s->getStatusP());                                     	//update linked list
        
        Serial << "Sending Schedule ACK Packet to node " << neighborID<<endl;
        delay(5);

        while(true)
        {
            _broadcastACKPacket(SCHEDULE_OPF_ACK_HEADER,neighborID);
            if(_waitForUnicastPacket(neighborID,(_G->getLocalVertex())->getID(),SCHEDULE_OPF_ACKACK_HEADER,true,100))                        //wait for an acknowledgement for candactcode packet
            {
                Serial << "received schedule ACKACK from node " << neighborID<<endl;
                delay(5);
                break;
            }
        }
        return _waitForSchedulePacketOPF(SCHEDULE_TIMEOUT,startTime,iterations);
    }
    else
        return false;
}

// uint16_t OAgent_OPF::_waitForSchedulePacket(unsigned long &startTime, uint8_t &iterations, uint16_t &period, int timeout) {
//     uint16_t rsp = _waitForValidPacket(true,timeout);
//     if(rsp != 0x0) {
//         startTime   = _getStartTimeFromPacket();
//         iterations  = _getIterationsFromPacket();
//         period      = _getPeriodFromPacket();    
//         return rsp;
//     }
//     return 0x0;
// }

void OAgent_OPF::_broadcastACKPacket(uint16_t header, uint8_t recipientID)
{
    uint8_t payload[4];
    // put header in payload array
    payload[0] = header;
    payload[1] = header >> 8;
    payload[2] = recipientID;
    payload[3] = recipientID >> 8;

    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload));
    _xbee->send(_zbTx);
}

void OAgent_OPF::_broadcastHeaderPacket(uint16_t header)
{
    uint8_t payload[2];
    // put header in payload array
    payload[0] = header;
    payload[1] = header >> 8;

    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload));
    _xbee->send(_zbTx);
}

void OAgent_OPF::_waitForACKPacket(uint16_t header, unsigned long t0, unsigned long startTime, uint8_t iterations, uint16_t period)
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
bool OAgent_OPF::_waitForACKPacket_RSL(uint16_t header, int timeout, unsigned long startTime, uint8_t iterations, uint16_t period ) { 
    unsigned long start = millis();
    unsigned long restart = start;
    OLocalVertex * s = _G->getLocalVertex(); // store pointer to local vertex 
    LinkedList * l = _G->getLinkedList();

    if(isLeader())
        l->resetLinkedListStatus(s->getStatusP());                   //gets linkedlist and resets status of online neighbors to 2     

    uint8_t counter = l->getLLsize();
    uint8_t neighborID;
    uint16_t headerACK;

    if (counter==_G->getN())
    	return true;
    _broadcastSchedulePacket(header,startTime,iterations,period);

    if (header == SCHEDULE_OPF_HEADER)
        headerACK = SCHEDULE_OPF_ACK_HEADER;
    else if (header == SCHEDULE_MAXMIN_HEADER)
        headerACK = SCHEDULE_MAXMIN_ACK_HEADER;

    while (uint16_t(millis()-start) < timeout)
    {
            while (uint16_t(millis()-restart) < timeout*0.01)
            {
                if(_waitForNeighborPacket(neighborID,headerACK,true,100))
                {
                    if((headerACK == SCHEDULE_OPF_ACK_HEADER) || (headerACK == SCHEDULE_MAXMIN_ACK_HEADER))
                    {
                        uint16_t nodeID = s->getID();
                        uint16_t recipientID = _getRecipientIDFromPacket();
                        if(nodeID == recipientID)
                        {
                        	//Serial << "received acknowledgement from node " << neighborID<<endl;
				            delay(5);
                            if(s->getStatus(neighborID) < 3)
                            {
                                counter++;
                                s->setStatus(neighborID, 3);
                            }
                            _broadcastACKPacket(SCHEDULE_MAXMIN_ACKACK_HEADER,neighborID);
                            if (counter==_G->getN())
                            {
                                l->updateLinkedList(s->getStatusP());   //update linked list
                                return true;
                            }
                        }
                    }
                    else
                    {
                    	s->setStatus(neighborID, 3);
                        counter++;
                        if (counter==_G->getN())
                        {
                            l->updateLinkedList(s->getStatusP());   //update linked list
                            return true;
                        }
                    }
                }
            }
            _broadcastSchedulePacket(header,startTime,iterations,period);
            restart = millis();
            //Serial << "received acknowledgements from " << counter << " nodes"<<endl;
            //Serial << "Number of neighbors is " << _G->getN()<<endl;
            delay(5);
    }
    if (counter < (_G->getN()))
    	{	
    		//Serial<<"Few acknowledgements received from neighbors between "<<mystart<<" and "<<myMillis()<<"\n";
        	return false;
        }
    else
        return true;
}

// Sced
bool OAgent_OPF::_waitForSchedulePacketOPF(int timeout, unsigned long startTime, uint8_t iterations)  {
    unsigned long start = millis();
    unsigned long restart = start;
    OLocalVertex * s = _G->getLocalVertex();                                                            // store pointer to local vertex 
    LinkedList * l = _G->getLinkedList();

    if(isLeader())
        l->resetLinkedListStatus(s->getStatusP());                   //gets linkedlist and resets status of online neighbors to 2     

    uint8_t counter = l->getLLsize();
    // uint8_t counter = 1;

    // Serial << "Counter = "<<counter<<endl;
    // delay(5);
    
    uint8_t neighborID;
    if (counter==_G->getN())
        return true;
    Serial << "Broadcasting Schedule OPF Packet"<<endl;
    delay(5);
    _broadcastSchedulePacketOPF(startTime,iterations);
    while(uint16_t(millis()-start) < timeout)
    {
        while(uint16_t(millis()-restart) < timeout*0.01)
        {
            if(_waitForNeighborPacket(neighborID,SCHEDULE_OPF_ACK_HEADER,true,50))
            {
                uint16_t nodeID = s->getID();
                uint16_t recipientID = _getRecipientIDFromPacket();
                if(nodeID == recipientID)
                {
                    Serial << "received acknowledgement from node " << neighborID<<endl;
                    delay(5);
                    if(s->getStatus(neighborID) < 3)
                    {
                        counter++;
                        s->setStatus(neighborID, 3);
                    }
                    Serial << "Counter = "<<counter<<endl;
                    delay(5);
    
                    _broadcastACKPacket(SCHEDULE_OPF_ACKACK_HEADER,neighborID);
                    if(counter==_G->getN())
                    {
                        l->updateLinkedList(s->getStatusP());                                     //update linked list
                        return true;
                    }
                }
            }
        }
        // Serial << "Broadcasting Schedule OPF Packet"<<endl;
        // delay(5);
        _broadcastSchedulePacketOPF(startTime,iterations);
        restart = millis();
    }
    if (counter < (_G->getN()))
    {
        //Serial<<"Few acknowledgements received from neighbors between "<<mystart<<" and "<<myMillis()<<"\n";
        return false;
    }
    else
        return true;
}

uint32_t OAgent_OPF::_getAvailableAgentLsb(uint8_t i) {
    return _availableAgentLsb[i-1];
}

uint8_t OAgent_OPF::_getUint8_tFromPacket(uint8_t &byteNumber) {
    byteNumber++;
    return _rx->getData(byteNumber-1);
}

uint32_t OAgent_OPF::_getUint32_tFromPacket(uint8_t &lsbByteNumber) {
    lsbByteNumber += 4;
    return (uint32_t(_rx->getData(lsbByteNumber-1)) << 24) + (uint32_t(_rx->getData(lsbByteNumber-2)) << 16) + (uint16_t(_rx->getData(lsbByteNumber-3)) << 8) + _rx->getData(lsbByteNumber-4);
}

//  long OAgent_OPF::_getLongFromPacket(uint8_t &lsbByteNumber) {
//	return long(_getUint32_tFromPacket(lsbByteNumber));
//}
/// End general coordination helper functions

/// Synchronization helper functions
bool OAgent_OPF::_leaderSync() {
    // only attempt to sync if there is at least one other vertex
    //Serial << "i AM HERE";
    if(_G->getN() > 1) 
    {
    	// seed random number generator with millis
        srand(millis());
        // get the index of a neighbor at random                  //getN() returns the number of nodes in the network
        uint8_t *p = (_G->getLocalVertex())->getStatusP();
        for (int i = 0; i < NUM_REMOTE_VERTICES; i++)
        {
            if(*(p+i)==2)
            {
            	// broadcast sync begin packet
		        //Serial << i+1 <<" is the neighbor chosen\n";
		        unsigned long tOne = _broadcastSyncBeginPacket(i+1);
		        // variable to store receive time of final packet
		        unsigned long tFour;
		        // wait until sync response packet arrives or timeout
		        if(_waitForSyncResponsePacket(tFour))
		        {
		        	//Serial << "Unicast Response Received\n";
		            uint8_t ptr = 2;
		            unsigned long tTwo = _getUint32_tFromPacket(ptr);
		            long d = tTwo + _getUint32_tFromPacket(ptr) - tOne - tFour;
		        	// compute error between target and base
		        	d = float(d)/float(2);
		        	// broadcast final packet
					_broadcastSyncFinalPacket(tTwo,d);
		        }
            }
        }
		return true;
    }
    return false;
}

bool OAgent_OPF::_targetSync(unsigned long tTwo) {
	if(_unicastSyncResponsePacket(tTwo))
    {
        //Serial << "Unicast Response Sent\n";
		if(_waitForSyncFinalPacket(SYNC_TIMEOUT))
        {
			// T = t + d
            uint8_t ptr = 6;
			_offset = _getLongFromPacket(ptr) + SYNC_ERROR;
			_synced = true;
			return true;		
		}
	}
    return false;
}


bool OAgent_OPF::_nonTargetSync(unsigned long tTwo) {
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

unsigned long OAgent_OPF::_broadcastSyncBeginPacket(uint8_t i) {
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

void OAgent_OPF::_broadcastSyncFinalPacket(unsigned long tTwo, long d) {
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

bool OAgent_OPF::_unicastSyncResponsePacket(unsigned long tTwo) {
	uint16_t payload[3];
	// put sync response header in bytes 0 and 1
	payload[0] = SYNC_RESPONSE_HEADER;
	// put receive time into bytes
    _addUint32_tToPayload(uint32_t(tTwo),((uint8_t * )(&payload)),2);
	_zbTx = ZBTxRequest(_rx->getRemoteAddress64(), ((uint8_t * )(&payload)), sizeof(payload)); // create zigbee transmit class
	_xbee->sendTwo(_zbTx,true); // transmit
	return _packetACKed(ACK_TIMEOUT);
}

bool OAgent_OPF::_isTargetNode() {
    uint8_t ptr = 2;
    
	return _G->isLocalVertex(_getUint32_tFromPacket(ptr));
}

uint8_t OAgent_OPF:: getStatusData(uint8_t neighborID)
{
	 OLocalVertex * s = _G->getLocalVertex();
	 return s->getStatus(neighborID - 1); 
}

uint8_t OAgent_OPF::_addUint32_tToPayload(uint32_t data, uint8_t payload[], uint8_t ptr) {
    //Serial << "byte to payload: " << _DEC(data) << endl;
    payload[ptr]    = data;
    payload[ptr+1]  = data >> 8;
    payload[ptr+2]  = data >> 16;
    payload[ptr+3]  = data >> 24;
    return ptr + 4;
}

/// End synchronization helper functions
/// General helper functions

void OAgent_OPF::_prepareOAgent_OPF(XBee * xbee, ZBRxResponse * rx, OGraph_OPF * G, bool leader, bool quiet) {
    _xbee = xbee;
    _G = G;
    _leader = leader;
    _quiet = quiet;
    _synced = false;
    _offset = 0;
    _windowsPerPeriod = 0;
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