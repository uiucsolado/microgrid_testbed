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
    unsigned long startTime = t0 + 15000;
    bool gamma = false;
    // bool scheduled = _waitForSchedulePacketOPF(SCHEDULE_TIMEOUT,startTime,iterations);
    // bool scheduled = _waitForChildSchedulePacketOPF(startTime,iterations);
    // bool scheduled = _ScheduleLeaderOPF(startTime,iterations);
    bool scheduled = true;
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
        gamma = SecondOrderOPF(genBus);
        // Serial<<"Start time is "<<startTime<<endl;
        // if(_waitToStart(startTime,true,-1))
        // {
        //     //Serial << "Correct Startime is " <<startTime<< ". My startime is "<< myMillis() <<endl;
        //     // gamma = StandardOPF(genBus);
        //     gamma = SecondOrderOPF(genBus);
        // }
    }        
    return gamma;
}

bool OAgent_OPF::nonleaderOPF(bool genBus, float alpha, uint8_t iterations) {
    unsigned long startTime = 0;
    bool gamma = false;
    //delay(50);
    // bool scheduled = _waitForScheduleFeasibleFlowPacket(startTime,iterations,-1);
    // bool scheduled = _waitForParentSchedulePacketOPF(startTime,iterations);
    // bool scheduled = _ScheduleNonLeaderOPF(startTime,iterations);
    bool scheduled = true;
    //Serial<<"Schedule done at "<<myMillis()<<"\n";
    
    //bool stat = startTime>myMillis();
    //Serial<<"Startime > Time? "<<stat<<"\n";

    //Serial<<"NonLeader: Startime= "<<startTime<<", Time= "<<myMillis()<<"\n";

    if(scheduled)
    {
        Serial<<"OPF scheduling was a SUCCESS"<<endl;
        gamma = SecondOrderOPF(genBus);
        // Serial<<"Start time is "<<startTime<<endl;
        // if(_waitToStart(startTime,true,-1))
        // {
        //     //Serial << "Correct Startime is " <<startTime<< ". My startime is "<< myMillis() <<endl;
        //     // gamma = StandardOPF(genBus);
        //     gamma = SecondOrderOPF(genBus);
        // }
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

    uint8_t neighbors[_G->getN()-1];
    uint8_t *p = s->getStatusP();
    // if (genBus){
    //     Serial<<"Node is generator"<<endl;
    //     delay(5);}
    // else
    //     {Serial<<"Node is load"<<endl;
    //     delay(5);}
    // Serial<<"Node has the following neighbors:"<<endl;
    // delay(5);
    int j=0;
    for (uint8_t i = 0; i < NUM_REMOTE_VERTICES; i++)
    {
        if(*(p+i)>=2)
        {
            neighbors[j]=i+1;
            // Serial <<"Neighbor "<<neighbors[j]<<endl;
            // delay(5);
            j++;
        }
    }
    // Serial<<"Node has "<<_G->getN()-1<<" neighbors"<<endl;
    // delay(5);

	uint8_t deg = _G->getN()-1;
    int nei2index[NUM_REMOTE_VERTICES];
    for (int i=0;i<deg;i++){nei2index[neighbors[i]-1] = i;} 

   	float Pd = s->getActiveDemand(); float Qd = s->getReactiveDemand();
    float Pmax = s->getMaxActivePower(); float Pmin = s->getMinActivePower();
    float Qmax = s->getMaxReactivePower(); float Qmin = s->getMinReactivePower();
    float Vmax = s->getMaxVoltage(); float Vmin = s->getMinVoltage();
    float LineR[deg]; float LineX[deg];
    for (int i=0;i<deg;i++){
    	LineR[i] = ((n+(neighbors[i]-1))->getResistance());
    	LineX[i] = ((n+(neighbors[i]-1))->getReactance());
    }
    // P,Q,V,p,q
    float x[3+2*deg],g[3+2*deg],b[2+deg];
    float A[2+deg][3+2*deg];
    for (int i=0;i<2+deg;i++){
    	for (int j=0;j<3+2*deg;j++){A[i][j]=0;}
    }
    A[0][0] = 1; A[1][1] = 1;
    for (int i=0;i<deg;i++){
    	if (neighbors[i]>nodeID) 
    	{
    		A[0][3+i]=-1;A[1][3+i+deg]=-1;
    		A[2+i][2]=1;//A[2+i][3+2*deg+i]=-1;
    	} 
    	else 
    	{
    		A[0][3+i]=1;A[1][3+i+deg]=1;
    		A[2+i][2]=-1;//A[2+i][3+2*deg+i]=1;
    	}	
    	A[2+i][3+i]=-LineR[i]; A[2+i][3+i+deg]=-LineX[i];
    }

    float A_T[3+2*deg][2+deg];
    MatrixTranspose(&A_T[0][0],&A[0][0],2+deg,3+2*deg);//Serial<<"A_T entry: "<<A_T[0][0]<<endl; 
    // String str2="A_T";_print2Darray_(str2,&A_T[0][0],3+2*deg,2+deg,3);
    float L[2+deg][2+deg];
    for (int i=0;i<2+deg;i++) 
    {
    	for (int j=0;j<2+deg;j++){L[i][j]=0;}
    }
    // L[0][0] = deg; 
    // for (int i=0;i<deg;i++) {L[0][2+i]=-1;L[0][2+2*deg+i]=2*LineR[i];}
    // L[1][1] = deg; 
    // for (int i=0;i<deg;i++) {L[1][2+deg+i]=-1;L[1][2+2*deg+i]=2*LineX[i];} 
    // for (int i=0;i<deg;i++)
    // {
    // 	if (neighbors[i]>nodeID) {L[2+i][0]=2*LineR[i];L[2+i][1]=2*LineX[i];}
    // 	else {L[2+i][0]=-2*LineR[i];L[2+i][1]=-2*LineX[i];}

    // 	for (int j=0;j<deg;j++){
    // 		if (i==j) continue;
    // 		if (neighbors[j]>nodeID) L[2+i][2+2*deg+j]=1;
    // 		else L[2+i][2+2*deg+j]=-1;
    // 	}
    // 	L[2+i][2+2*deg+i]=0.5*(4*LineR[i]*LineR[i]+4*LineX[i]*LineX[i]+2);
    // }
	L[0][0] = 1+deg; 
    for (int i=0;i<deg;i++) {L[0][2+i]=LineR[i];}
    L[1][1] = 1+deg; 
    for (int i=0;i<deg;i++) {L[1][2+i]=LineX[i];} 
    for (int i=0;i<deg;i++)
    {
    	if (neighbors[i]>nodeID) {L[2+i][0]=2*LineR[i];L[2+i][1]=2*LineX[i];}
    	else {L[2+i][0]=-2*LineR[i];L[2+i][1]=-2*LineX[i];}

    	for (int j=0;j<deg;j++){
    		if (i==j) continue;
    		if (neighbors[j]>nodeID) L[2+i][2+j]=1;
    		else L[2+i][2+j]=-1;
    	}
    	L[2+i][2+i]=0.5*(4*LineR[i]*LineR[i]+4*LineX[i]*LineX[i]+2);
    }
    for (int i=0;i<2+deg;i++) b[i]=0;
   	b[0]=Pd; b[1] = Qd;
    for (int i=0;i<3+2*deg;i++) 
    {
    	x[i]=0;
    	if (i==2) x[i]=1;
    }

    float *w = new float[2+deg]; for (int i=0;i<2+deg;i++)w[i]=0;
    float *grad = new float[3+2*deg];
    float *y = new float[2+deg]; float *tmp = new float[2+deg];
    String str;
    str = "x";_print1Darray_(str,x,3+2*deg,5);
    // str="A";_print2Darray_(str,&A[0][0],2+deg,3+2*deg,3);
    // str="A_T";_print2Darray_(str,&A_T[0][0],3+2*deg,2+deg,3);
    // str="L";_print2Darray_(str,&L[0][0],2+deg,2+deg,3);
    for (int k=0;k<5;k++)
    {
    	
	    for (int i=0;i<3+2*deg;i++) 
	    {
	    	g[i]=x[i];
	    	if (i==2) g[i]=x[i]-1;
	    }

	    y = matbyvec(&A[0][0],2+deg,3+2*deg,x);
	    tmp = matbyvec(&A[0][0],2+deg,3+2*deg,g);
	    for (int i=0;i<2+deg;i++) y[i]-=b[i]+tmp[i];
    	// str = "y";_print1Darray_(str,y,2+deg,6);
        w = Conjugate_gradient(&L[0][0],2+deg,2+deg,y,w); 
        // str = "w";_print1Darray_(str,w,2+deg,6);
    	grad = matbyvec(&A_T[0][0],3+2*deg,2+deg,w);
    	for (int i=0;i<3+2*deg;i++) grad[i]+=g[i];

    	float *new_grad = new float[3+2*deg]; for (int i=0;i<3+2*deg;i++) new_grad[i]=grad[i];
	    str = "grad";
	    // _print1Darray_(str,grad,3+2*deg,6); 

	     uint8_t received_from[deg]; for (int i=0;i<deg;i++) received_from[i]=0;
    	unsigned long startTime = myMillis()+SCHEDULE_OPF_DELAY;
	    bool scheduled = false;
	    uint8_t iterations = 1;
	    while (!scheduled)
	    { 
	    	if(isLeader()) scheduled = _ScheduleLeaderOPF(startTime,iterations);
	    	else  scheduled = _ScheduleNonLeaderOPF(startTime,iterations);
		}
		// Serial<<"Start time is "<<startTime<<endl;
		_waitToStart(startTime,true,-1);
	  
	    int i = 0;
	    unsigned long start = millis();   // initialize timer
	    while (millis()-start<=10000){
	        uint8_t nei_to_send=neighbors[i]; 
	        i++; if (i==_G->getN()-1) i=0;
	        int t = nei2index[nei_to_send-1];

	        float vars[2] = {grad[3+t],grad[3+deg+t]};
	        if (nei_to_send<nodeID)_SendToParent(nei_to_send,vars,2,0);
	        else _SendToChild(nei_to_send,vars,2,0);
	        if(_waitForUnicastPacket(neighborID,nodeID,OPF_HEADER,true,150))
	            {
	            	int j = nei2index[neighborID-1];
	                if (!received_from[j]){
	                    if (neighborID>nodeID){
	                        float *tmp=_getPacketFromChild(2); 
	                        uint8_t task = tmp[2];
	                        if(task==0)
	                        {
	                        	received_from[j]=1;
	                        	new_grad[3+j]+=tmp[0];
	                        	new_grad[3+j+deg]+=tmp[1];

		                        // Serial<<"Received from "<<neighborID<<endl;
		                        // Serial.print(tmp[0],6); Serial<<endl; delay(5);
		                    }
	                    }
	                    else if (neighborID<nodeID){                      
	                        float *tmp=_getPacketFromParent(2);
	                        uint8_t task = tmp[2];
	                        if(task==0)
	                        { 
	                        	received_from[j]=1;
	                        	new_grad[3+j]+=tmp[0];
	                        	new_grad[3+j+deg]+=tmp[1];

		                        // Serial<<"Received from "<<neighborID<<endl;
		                        // Serial.print(tmp[0],6); Serial<<endl; delay(5);
		                    }
	                    }
	                }
	            }

	    }
	    for (int i=0;i<3+2*deg;i++) grad[i]=new_grad[i];
	    _print1Darray_(str,grad,3+2*deg,6);
    	for (int i=0;i<3+2*deg;i++) x[i]-=grad[i];
        
        // _print2Darray_("Hessian Matrix",&Hessian_lambda[0][0],2+deg,2+deg,3);
        // _print1Darray_("Negative gradient",neg_grad_lambda,2+deg,3);
        // str = "Newton direction";_print1Darray_(str,Newton_direction,2+deg,5);
        str = "x";_print1Darray_(str,x,3+2*deg,5);
        
    } 

    // g = np.dot(H,(x-a))
    // L = multi_dot([A,inv(H),A.T])
    // s = np.dot(A,x)-b-multi_dot([A,inv(H),g])
    
    // w = conjugate_gradient_method(L,s,w)
    // grad_x = multi_dot([inv(H),g+np.dot(A.T,w)])
    // x = x - 0.9*grad_x
    
}

float* OAgent_OPF::Conjugate_gradient(float*A, int rows, int cols, float*b, float*x_init) {

	// Serial<<"Executing Conjugate Gradient Method"<<endl;

    float H[rows][cols];
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            H[i][j]=*((A+i*cols)+j);
        }
    }
    OLocalVertex * s = _G->getLocalVertex();                                                    // store pointer to local vertex
    ORemoteVertex * n = _G->getRemoteVertex(1);                                                 // store pointer to remote vertices
    LinkedList * l = _G->getLinkedList();

    uint16_t nodeID = s->getID();
    uint8_t neighborID;

    uint8_t neighbors[_G->getN()-1];
    uint8_t *status_ptr = s->getStatusP();
   	uint8_t deg = _G->getN()-1;

    int j=0;
    for (uint8_t i = 0; i < NUM_REMOTE_VERTICES; i++)
    {
        if(*(status_ptr+i)>=2)
        {
            neighbors[j]=i+1;
            j++;
        }
    }

    int nei2index[NUM_REMOTE_VERTICES];
    for (int i=0;i<deg;i++){
        nei2index[neighbors[i]-1] = i;
    } 

    float LineR[deg]; float LineX[deg];
    for (int i=0;i<deg;i++){
    	LineR[i] = ((n+(neighbors[i]-1))->getResistance());
    	LineX[i] = ((n+(neighbors[i]-1))->getReactance());
    }

    uint8_t received_from[deg]; for (int i=0;i<deg;i++) received_from[i]=0;


    float *r = new float[2+deg];
    float *x = new float[2+deg]; for (int i=0;i<2+deg;i++) x[i]=x_init[i];
    float *z = new float[2+deg]; for (int i=0;i<2+deg;i++) z[i]=0;

    r = matbyvec(&H[0][0],2+deg,2+deg,x);
    for (int i=0;i<2+deg;i++) r[i]=r[i]-b[i];
    float *new_r = new float[2+deg]; for (int i=0;i<2+deg;i++) new_r[i]=r[i];
    String str = "r";
    // _print1Darray_(str,r,2+deg,6); 

    unsigned long startTime = myMillis()+SCHEDULE_OPF_DELAY;
    bool scheduled = false;
    uint8_t iterations = 1;
    while (!scheduled)
    { 
    	if(isLeader()) scheduled = _ScheduleLeaderOPF(startTime,iterations);
    	else  scheduled = _ScheduleNonLeaderOPF(startTime,iterations);
	}
	// Serial<<"Start time is "<<startTime<<endl;
	_waitToStart(startTime,true,-1);
  
    int i = 0;
    unsigned long start = millis();   // initialize timer
    while (millis()-start<=10000){
        uint8_t nei_to_send=neighbors[i]; 
        i++; if (i==_G->getN()-1) i=0;
        int t = nei2index[nei_to_send-1];

        float vars[3] = {-x[0]+LineR[t]*x[2+t],-x[1]+LineX[t]*x[2+t],r[2+t]};
        if (nei_to_send<nodeID)_SendToParent(nei_to_send,vars,3,0);
        else _SendToChild(nei_to_send,vars,3,0);
        if(_waitForUnicastPacket(neighborID,nodeID,OPF_HEADER,true,150))
            {
            	int j = nei2index[neighborID-1];
                if (!received_from[j]){
                    if (neighborID>nodeID){
                        float *tmp=_getPacketFromChild(3); 
                        uint8_t task = tmp[3];
                        if(task==0)
                        {
                        	received_from[j]=1;
                        	new_r[0] += tmp[0];
                        	new_r[1] += tmp[1];
                        	new_r[2+j]+=tmp[2];

	                        // Serial<<"Received from "<<neighborID<<endl;
	                        // Serial.print(tmp[2],6); Serial<<endl; delay(5);
	                    }
                    }
                    else if (neighborID<nodeID){                      
                        float *tmp=_getPacketFromParent(3);
                        uint8_t task = tmp[3];
                        if(task==0)
                        { 
                        	received_from[j]=1;
	                        new_r[0] += tmp[0];
                        	new_r[1] += tmp[1];
                        	new_r[2+j]+=tmp[2];

	                        // Serial<<"Received from "<<neighborID<<endl;
	                        // Serial.print(tmp[2],6); Serial<<endl; delay(5);
	                    }
                    }
                }
            }

    }
    for (int i=0;i<2+deg;i++) r[i]=new_r[i];
    // _print1Darray_(str,r,2+deg,6);
    float *p=new float[2+deg]; for (int i=0;i<2+deg;i++) p[i]=-r[i];
    float *q=new float[2+deg]; for (int i=0;i<2+deg;i++) q[i]=0;
    float *new_q = new float[2+deg];
    float *new_p = new float[2+deg]; 
    float *new_x = new float[2+deg];

    float mu1=r[0]*r[0]+r[1]*r[1];
    for (int i=2;i<2+deg;i++){mu1 += 0.5*r[i]*r[i];}
    
    float nu = 1;
    float alpha1 = RunRatioConsensus(nodeID,&mu1,&nu,50,neighbors);
    // str="alpha1";_print_(str,alpha1,6);
    for (int k=0;k<5;k++)
    {

    	for (int i=0;i<deg;i++) received_from[i]=0;
        q = matbyvec(&H[0][0],2+deg,2+deg,p);
        // str = "q";_print1Darray_(str,q,2+deg,6);
        for (int i=0;i<2+deg;i++) {new_q[i]=q[i];new_r[i]=r[i];new_x[i]=x[i];new_p[i]=p[i];}
        startTime = myMillis()+SCHEDULE_OPF_DELAY;
	    scheduled = false;
	    while (!scheduled)
	    { 
	    	if(isLeader()) scheduled = _ScheduleLeaderOPF(startTime,iterations);
	    	else  scheduled = _ScheduleNonLeaderOPF(startTime,iterations);
		}
		// Serial<<"Start time is "<<startTime<<endl;
		_waitToStart(startTime,true,-1);

        i = 0;
        unsigned long start = millis();   // initialize timer
        while (millis()-start<=10000){
            uint8_t nei_to_send=neighbors[i]; 
            i++; if (i==_G->getN()-1) i=0;
            int t = nei2index[nei_to_send-1];

            float vars[3] = {-p[0]+LineR[t]*p[2+t],-p[1]+LineX[t]*p[2+t],q[2+t]};
	        if (nei_to_send<nodeID)_SendToParent(nei_to_send,vars,3,1);
	        else _SendToChild(nei_to_send,vars,3,1);
            if(_waitForUnicastPacket(neighborID,nodeID,OPF_HEADER,true,100))
            {
            	int j = nei2index[neighborID-1];
            	if (!received_from[j])
                {	 
                	if (neighborID>nodeID)
                	{
                		float *tmp=_getPacketFromChild(3);
                		uint8_t task = tmp[3];
	                    if (task==1)
	                    {
	                        received_from[j]=1;
	                        new_q[0] += tmp[0];
                        	new_q[1] += tmp[1];
                        	new_q[2+j]+=tmp[2];
	                    }
                	}
                	else if (neighborID<nodeID)
                	{
                		float *tmp=_getPacketFromParent(3);
                		uint8_t task = tmp[3];
	                    if (task==1)
	                    {
	                        received_from[j]=1;	
	                        new_q[0] += tmp[0];
                        	new_q[1] += tmp[1];
                        	new_q[2+j]+=tmp[2];
	                    }
                	}
                }
                    
            }            
        }
        for (int i=0;i<deg;i++) received_from[i]=0;
        for (int i=0;i<2+deg;i++) {q[i]=new_q[i];r[i]=new_r[i];p[i]=new_p[i];x[i]=new_x[i];}   
        // str = "q";_print1Darray_(str,q,2+deg,6);

        float mu2=p[0]*q[0]+p[1]*q[1];
        for (int i=2;i<2+deg;i++){mu2 += 0.5*p[i]*q[i];}

         // str="mu2";_print_(str,mu2,6);

        startTime = myMillis()+SCHEDULE_OPF_DELAY;
	    scheduled = false;
	    while (!scheduled)
	    { 
	    	if(isLeader()) scheduled = _ScheduleLeaderOPF(startTime,iterations);
	    	else  scheduled = _ScheduleNonLeaderOPF(startTime,iterations);
		}
		// Serial<<"Start time is "<<startTime<<endl;
		_waitToStart(startTime,true,-1);

        nu = 1;
        float alpha2 = RunRatioConsensus(nodeID,&mu2,&nu,50,neighbors);
        // str="alpha2";_print_(str,alpha2,6); 

        // if (abs(alpha2)<=0.000001) break;

        float alpha = alpha1/alpha2;
        // str="alpha";_print_(str,alpha,6);
        for (int i=0;i<2+deg;i++) 
        {
            x[i]+=alpha*p[i]; r[i]+=alpha*q[i];
        } 
        // str="r"; _print1Darray_(str,r,2+deg,6);
        mu1=r[0]*r[0]+r[1]*r[1];
	    for (int i=2;i<2+deg;i++){mu1 += 0.5*r[i]*r[i];}

        // str="mu1";_print_(str,mu1,6);

        startTime = myMillis()+SCHEDULE_OPF_DELAY;
	    scheduled = false;
	    while (!scheduled)
	    { 
	    	if(isLeader()) scheduled = _ScheduleLeaderOPF(startTime,iterations);
	    	else  scheduled = _ScheduleNonLeaderOPF(startTime,iterations);
		}
		// Serial<<"Start time is "<<startTime<<endl;
		_waitToStart(startTime,true,-1);

        nu = 1;
        float alpha1_prev = alpha1;
        alpha1 = RunRatioConsensus(nodeID,&mu1,&nu,50,neighbors);
        // str="alpha1";_print_(str,alpha1,6); 
        if (abs(alpha1)<=0.000005) break;
        float beta = alpha1/alpha1_prev;
        // str="beta";_print_(str,beta,6);
        for (int i=0;i<2+deg;i++) 
        {
            p[i]=-r[i]+beta*p[i];
        } 
        // str="r"; _print1Darray_(str,r,2+deg,6);
        // str="p"; _print1Darray_(str,p,2+deg,6);
        // str="x"; _print1Darray_(str,x,2+deg,6);

    }

 	// str="Newton direction";_print1Darray_(str,x,2+deg,5);
    return x;
    
}

float OAgent_OPF::RunRatioConsensus(uint16_t nodeID, float *mu,float *nu,uint8_t iterations,uint8_t *neighbors){

    uint8_t neighborID;
    uint8_t deg = _G->getN()-1;
    int nei2index[NUM_REMOTE_VERTICES];
    for (int i=0;i<deg;i++){
        nei2index[neighbors[i]-1] = i;
        // Serial<<"Neighbor "<<neighbors[i]<<endl;
    } 
    nei2index[nodeID-1] = deg;

    uint8_t received_from[deg]; for (int i=0;i<deg;i++) received_from[i]=0;
	float run_sum_mu[deg+1]; for (int j=0;j<deg+1;j++) run_sum_mu[j]=0;
	float run_sum_nu[deg+1]; for (int j=0;j<deg+1;j++) run_sum_nu[j]=0;

	float out_deg = float(_G->getN());

    for (int k=0;k<iterations;k++){

        run_sum_mu[nei2index[nodeID-1]] += (*mu)/out_deg;
        run_sum_nu[nei2index[nodeID-1]] += (*nu)/out_deg;
        (*mu) = (*mu)/out_deg; (*nu) = (*nu)/out_deg;
		unsigned long start = millis();   // initialize timer
        while (millis()-start<=200)
        {
            _CG_RC_SendPacket(run_sum_mu[nei2index[nodeID-1]],run_sum_nu[nei2index[nodeID-1]]);
			if(_waitForNeighborPacket(neighborID,CG_RC_SUBHEADER,true,50))
	        {
	        	int j = nei2index[neighborID-1];
                if (!received_from[j])
                {
    	        	double* tmp=_CG_RC_ReceivePacket();
    	        	*mu+= ((float)tmp[0])-run_sum_mu[j];
    	        	*nu+= ((float)tmp[1])-run_sum_nu[j];
    	        	// _print_("Received",float(tmp[0]),6); _print_("Received",float(tmp[1]),6);
    	        	run_sum_mu[j] = (float)tmp[0];
    	        	run_sum_nu[j] = (float)tmp[1];
                    received_from[j] = 1;

                }
	        }
	    }
        for (int i=0;i<deg;i++) received_from[i]=0;

	}
    // Serial<<"Ratio consensus r = "<<(*mu)/(*nu)<<endl;
	return (*mu)/(*nu);

}

bool OAgent_OPF::_ScheduleLeaderOPF(unsigned long &startTime, uint8_t &iterations){

    while(true)
    {
        _broadcastSchedulePacketOPF(startTime,iterations);
        if (myMillis()+100>startTime) return true;
        delay(10);
    }    
}

bool OAgent_OPF::_ScheduleNonLeaderOPF(unsigned long &startTime, uint8_t &iterations){

    uint8_t neighborID;
    uint16_t header = SCHEDULE_OPF_HEADER;
	if(_waitForNeighborPacket(neighborID,header,true,-1))                        //stays in loop until desired packet received
 	{
        // Serial << "Received Schedule OPF Packet from node " << neighborID<<endl;
        // delay(5);       
        startTime   = _getStartTimeFromPacket();
        iterations  = _getIterationsFromPacketOPF();
		while(true){
			_broadcastSchedulePacketOPF(startTime,iterations);
			if (myMillis()+100>startTime) return true;
	        delay(10);
		}	        
	}    
}

bool OAgent_OPF::_waitForParentSchedulePacketOPF(unsigned long &startTime, uint8_t &iterations) {
    uint8_t neighborID;
    uint16_t header = SCHEDULE_OPF_HEADER;
    LinkedList * l = _G->getLinkedList();                      						//get pointer to linked list
    OLocalVertex * s = _G->getLocalVertex(); 										// store pointer to local vertex
    l->resetLinkedListStatus(s->getStatusP());                   //gets linkedlist and resets status of online neighbors to 2
    srand(millis());

    uint8_t scheduleCounter = 1;
    uint8_t scheduleDoneCounter = 1;

    Serial << "Waiting for Schedule OPF Packet"<<endl;
    delay(5);
    while(true)
    {
        if(_waitForNeighborPacket(neighborID,header,true,500))                        //stays in loop until desired packet received
     	{
            Serial << "Received Schedule OPF Packet from node " << neighborID<<endl;
            delay(5);
        
            startTime   = _getStartTimeFromPacket();
            iterations  = _getIterationsFromPacketOPF();
            uint16_t start = millis();
            s->setStatus(neighborID, 3);
    	    scheduleCounter++;

    	    if(scheduleCounter >= _G->getN())
            {
                Serial << "No Schedule OPF ACK is required from neighbors"<<endl;
                delay(5);
                // Serial << "Sending Schedule OPF ACK to parent"<<endl;
                // delay(5);
            
                while(true)
                {
                	Serial << "Sending Schedule OPF ACK to parent"<<endl;
	                delay(5);
                    _broadcastHeaderPacket(SCHEDULE_DONE);

                    delay(rand() % 100);

                    if(_waitForNeighborPacket(neighborID,SCHEDULE_DONE,true,50))                        //wait for acknowledgement packets
                    {
    	                if(s->getStatus(neighborID) == 3)
    	                {
    		                s->setStatus(neighborID, 2);																	//resets status of online neighbor to 2
    	                    scheduleDoneCounter++;
    					}
                    }
                	_broadcastHeaderPacket(SCHEDULE_DONE);
                    if(_waitForNeighborPacket(neighborID,WAIT_TO_START,true,50))                        //wait for acknowledgement packets
                    {
                        if(s->getStatus(neighborID) < 4)
                        {
                            Serial << "Received Schedule DONE Packet from node " << neighborID<<endl;
                            delay(5);
                            s->setStatus(neighborID, 4);                                                                    //resets status of online neighbor to 2
                            scheduleDoneCounter++;
                        }
                    }

                    if(scheduleDoneCounter >= _G->getN())
                        return true;
                }
            }

            //Serial << "Waiting for Schedule OPF ACKs"<<endl;
            //delay(5);

            while(true)
            {
                if(scheduleCounter < _G->getN())
                {
                	Serial << "Waiting for Schedule OPF ACKs"<<endl;
		            delay(5);
                	_broadcastSchedulePacketOPF(startTime,iterations);

    	            if(_waitForNeighborPacket(neighborID,header,true,50))                        //wait for acknowledgement packets
    	            {
    	                if(s->getStatus(neighborID) < 3)
    	                {
    	                    // Serial << "received Schedule OPF ACK from node " << neighborID<<endl;
    	                    // delay(5);
    	                    s->setStatus(neighborID, 3);
    	                    scheduleCounter++;
    	                }
    	            }
    	        }

                else
                    _broadcastHeaderPacket(SCHEDULE_DONE);

                delay(rand() % 50);

                if(_waitForNeighborPacket(neighborID,SCHEDULE_DONE,true,500))                        //wait for acknowledgement packets
                {
                	Serial << "Received Schedule DONE Packet from node " << neighborID<<endl;
                    delay(5);
                    if(s->getStatus(neighborID) < 4)
                    {
                        Serial << "Received Schedule DONE Packet from node " << neighborID<<endl;
                        delay(5);
                        if(s->getStatus(neighborID) < 3)
                        {
                            Serial << "Received Schedule ACK Packet from node " << neighborID<<endl;
                            delay(5);
                            scheduleCounter++;
                        }
                        s->setStatus(neighborID, 4);                                                                    //resets status of online neighbor to 2
                        scheduleDoneCounter++;
                    }
                }

                if(_waitForNeighborPacket(neighborID,WAIT_TO_START,true,50))                        //wait for acknowledgement packets
                {
                    if(s->getStatus(neighborID) < 4)
                    {
                        Serial << "Received Schedule DONE Packet from node " << neighborID<<endl;
                        delay(5);
                        if(s->getStatus(neighborID) < 3)
                        {
                            Serial << "Received Schedule ACK Packet from node " << neighborID<<endl;
                            delay(5);
                            scheduleCounter++;
                        }
                        s->setStatus(neighborID, 4);                                                                    //resets status of online neighbor to 2
                        scheduleDoneCounter++;
                    }
                }

                if(scheduleDoneCounter >= _G->getN())
                {
                    l->resetLinkedListStatus(s->getStatusP());                                      //gets linkedlist and resets status of online neighbors to 2
                    return true;
                }

                delay(rand() % 50);
            }
        }
        // Serial << "Waiting for Schedule OPF Packet"<<endl;
        // delay(5);
    }
}


bool OAgent_OPF::_waitForChildSchedulePacketOPF(unsigned long startTime, uint8_t iterations)  {
    unsigned long start = millis();
    unsigned long restart = start;
    OLocalVertex * s = _G->getLocalVertex();                                                            // store pointer to local vertex 
    LinkedList * l = _G->getLinkedList();
	l->resetLinkedListStatus(s->getStatusP());                   //gets linkedlist and resets status of online neighbors to 2     

    uint8_t scheduleCounter = 1;    
    uint8_t scheduleDoneCounter = 1;    
    uint8_t neighborID;

    _broadcastSchedulePacketOPF(startTime,iterations);

    Serial << "Waiting for Schedule OPF ACKs"<<endl;
    delay(5);
    
    while(uint16_t(millis()-start) < 5000)
    {
    	if(scheduleCounter < _G->getN())
        {
	        if(_waitForNeighborPacket(neighborID,SCHEDULE_OPF_HEADER,true,50))                        //wait for acknowledgement packets
	        {
	            if(s->getStatus(neighborID) < 3)
	            {
	                Serial << "received Schedule ACK from node " << neighborID<<endl;
                    delay(5);
                    s->setStatus(neighborID, 3);
	                scheduleCounter++;
	            }
	        }

        	_broadcastSchedulePacketOPF(startTime,iterations);
	    }

	    else
        	_broadcastHeaderPacket(SCHEDULE_DONE);

	    if(_waitForNeighborPacket(neighborID,SCHEDULE_DONE,true,50))                        //wait for acknowledgement packets
        {
            if(s->getStatus(neighborID) < 4)
            {
            	Serial << "received Schedule DONE packet from node " << neighborID<<endl;
                delay(5);
                if(s->getStatus(neighborID) < 3)
                {
                    Serial << "Received Schedule ACK Packet from node " << neighborID<<endl;
                    delay(5);
                    scheduleCounter++;
                }
                s->setStatus(neighborID, 4);
                scheduleDoneCounter++;
            }
        }

        if(_waitForNeighborPacket(neighborID,WAIT_TO_START,true,50))                        //wait for acknowledgement packets
        {
            if(s->getStatus(neighborID) < 4)
            {
                Serial << "Received Schedule DONE Packet from node " << neighborID<<endl;
                delay(5);
                if(s->getStatus(neighborID) < 3)
                {
                    Serial << "Received Schedule ACK Packet from node " << neighborID<<endl;
                    delay(5);
                    scheduleCounter++;
                }
                s->setStatus(neighborID, 4);                                                                    //resets status of online neighbor to 2
                scheduleDoneCounter++;
            }
        }

        if(scheduleDoneCounter >= _G->getN())
        {
        	l->resetLinkedListStatus(s->getStatusP());                                      //gets linkedlist and resets status of online neighbors to 2
            return true;
        }

        delay(rand() % 50);       
    }

	Serial << "Scheduling timed out"<<endl;
	delay(5);
   
    return false;
}

bool OAgent_OPF::_waitToFinishSchedule(unsigned long startTime, bool useMyMillis, int timeout) {
    long temp;
    unsigned long s = millis();

    srand(s);
    while(true)
    {
        _broadcastHeaderPacket(WAIT_TO_START);
        delay(10);

        if(useMyMillis == true)
        {
            temp = (startTime-10) - (myMillis());
            if(temp <= 0)
                return true;
        } 
        else
        {
            temp = (startTime-10) - millis(); 
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
void OAgent_OPF::MatrixTranspose(float *A_T, float* A, int rows,int cols) 
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
void OAgent_OPF::MatrixNullspace(float *E,uint8_t deg,uint8_t num_vars,float *LineR, float *LineX,bool *active_set){

	// ORemoteVertex * n = _G->getRemoteVertex(1);
	// uint8_t deg = _G->getN()-1;
 //    float LineR[deg]; float LineX[deg];
 //    for (int i=0;i<deg;i++){
 //    	LineR[i] = ((n+(neighbors[i]-1))->getResistance());
 //    	LineX[i] = ((n+(neighbors[i]-1))->getReactance());
 //    }
 //    uint8_t active_constr = 0;
 //    for (int i=0;i<6;i++){
 //    	if (active_set[i]) active_constr+=1;
 //    }
 //    uint8_t num_vars = 1+2*deg-active_constr;
    float K[3+3*deg][1+2*deg];
    for (int i=0;i<3+3*deg;i++){
    	for (int j=0;j<1+2*deg;j++){
    		K[i][j]=0;
    	}
    }

 //    if not (active_set[0] or active_set[1] or active_set[2] or active_set[3] or active_set[4] or active_set[5]){
 //    	if (deg==2){
	 //    		E[0][0]=1.0;E[0][1]=1.0;E[0][2]=0.0;E[0][3]=0.0;E[0][4]=0.0;
	//        	E[1][0]=0.0;E[1][1]=0.0;E[1][2]=1.0;E[1][3]=1.0;E[1][4]=0.0;
	//        	E[2][0]=1.0;E[2][1]=0.0;E[2][2]=0.0;E[2][3]=0.0;E[2][4]=0.0;
	//        	E[3][0]=0.0;E[3][1]=1.0;E[3][2]=0.0;E[3][3]=0.0;E[3][4]=0.0;
	//        	E[4][0]=0.0;E[4][1]=0.0;E[4][2]=1.0;E[4][3]=0.0;E[4][4]=0.0;
	//        	E[5][0]=0.0;E[5][1]=0.0;E[5][2]=0.0;E[5][3]=1.0;E[5][4]=0.0;
	//        	E[6][0]=1.0;E[6][1]=1.0;E[6][2]=1.0;E[6][3]=1.0;E[6][4]=1.0;
	//        	E[7][0]=-1.0+2*LineR[0];E[7][1]=-1.0;E[7][2]=-1.0+2*LineX[0];E[7][3]=-1.0;E[7][4]=-1.0;
	//        	E[8][0]=-1.0;E[8][1]=-1.0+2*LineR[1];E[8][2]=-1.0;E[8][3]=-1.0+2*LineX[1];E[8][4]=-1.0; 	
 //    	}
    
	//     else{
	//         E[0][0]=1.0;E[0][1]=0.0;E[0][2]=0.0;
	//        	E[1][0]=0.0;E[1][1]=1.0;E[1][2]=0.0;
	//        	E[2][0]=1.0;E[2][1]=0.0;E[2][2]=0.0;
	//        	E[3][0]=0.0;E[3][1]=1.0;E[3][2]=0.0;
	//        	E[4][0]=1.0;E[4][1]=1.0;E[4][2]=1.0;
	//        	E[5][0]=-1.0+2*LineR[0];E[5][1]=-1.0+2*LineX[0];E[5][2]=-1.0;
	//     }
	// }

    if (deg==2){
    	K[0][0] = 1; K[2][0] = 1; K[0][1] = 1; K[3][1] = 1;
		if (active_set[0] or active_set[1]) {
			K[0][0] = 0;
			K[2][0] = 1;K[3][0] = -1;
		}
		K[1][2] = 1; K[4][2] = 1; K[1][3] = 1; K[5][3] = 1;
		if (active_set[2] or active_set[3]) {
			K[1][2] = 0;
			K[4][2] = 1;K[5][2] = -1;
		}
		K[6][0]=1.0;K[6][1]=1.0;K[6][2]=1.0;K[6][3]=1.0;K[6][4]=1.0;
		if (active_set[4] or active_set[5]) {
			K[6][0]=0;K[6][1]=0;K[6][2]=0;K[6][3]=0;K[6][4]=0;
		}
		for (int i=0;i<1+2*deg;i++){
			K[7][i]=-K[6][i]+2*LineR[0]*K[2][i]+2*LineX[0]*K[4][i];
			K[8][i]=-K[6][i]+2*LineR[1]*K[3][i]+2*LineX[1]*K[5][i];
		}
		int t=0;
		for (int i=0;i<3+3*deg;i++){
	    	for (int j=0;j<1+2*deg;j++){
	    		if ((j==1 and (active_set[0] or active_set[1])) or (j==3 and (active_set[2] or active_set[3])) or (j==4 and (active_set[4] or active_set[5]))) 
	    			{continue;}
	    		*((E+i*num_vars)+t) = K[i][j];
	    		t++; if (t==num_vars) t=0;
	    	}
	    }
		


    }
    else{

    	K[0][0] = 1; K[2][0] = 1;
		K[1][1] = 1; K[3][1] = 1;
		K[4][0]=1.0;K[4][1]=1.0;K[4][2]=1.0;
		if (active_set[4] or active_set[5]) {
			K[4][0]=0;K[4][1]=0;K[4][2]=0;
		}
		for (int i=0;i<1+2*deg;i++){
			K[5][i]=-K[4][i]+2*LineR[0]*K[2][i]+2*LineX[0]*K[3][i];
		}
		int t=0;
		for (int i=0;i<3+3*deg;i++){
	    	for (int j=0;j<1+2*deg;j++){
	    		if ((j==0 and (active_set[0] or active_set[1])) or (j==1 and (active_set[2] or active_set[3])) or (j==2 and (active_set[4] or active_set[5]))) 
	    			{continue;}
	    		*((E+i*num_vars)+t) = K[i][j];
	    		t++; if (t==num_vars) t=0;
	    	}
	    }

    }

}
void OAgent_OPF::MatrixMultiply(float *res, float* a,int rows_A, int cols_A, float* b, int rows_B, int cols_B){
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

//Matrix Inversion Routine
int OAgent_OPF::MatrixInverse(float* AInverse,float* A, int n)
{
// A = input matrix (n x n)
// n = dimension of A
// AInverse = inverted matrix (n x n)
// This function inverts a matrix based on the Gauss Jordan method.
// The function returns 1 on success, 0 on failure.
int i, j, iPass, imx, icol, irow;
float det, temp, pivot, factor;
float* ac = (float*)calloc(n*n, sizeof(float));
det = 1;
for (i = 0; i < n; i++)
     {
     for (j = 0; j < n; j++)
           {
           AInverse[n*i+j] = 0;
           ac[n*i+j] = A[n*i+j];
           }
     AInverse[n*i+i] = 1;
     }
// The current pivot row is iPass.  
// For each pass, first find the maximum element in the pivot column.
for (iPass = 0; iPass < n; iPass++)
     {
     imx = iPass;
     for (irow = iPass; irow < n; irow++)
           {
           if (fabs(A[n*irow+iPass]) > fabs(A[n*imx+iPass])) imx = irow;
           }
     // Interchange the elements of row iPass and row imx in both A and AInverse.
     if (imx != iPass)
           {
           for (icol = 0; icol < n; icol++)
                 {
                 temp = AInverse[n*iPass+icol];
                 AInverse[n*iPass+icol] = AInverse[n*imx+icol];
                 AInverse[n*imx+icol] = temp;
                 if (icol >= iPass)
                       {
                       temp = A[n*iPass+icol];
                       A[n*iPass+icol] = A[n*imx+icol];
                       A[n*imx+icol] = temp;
                       }
                 }
           }
     // The current pivot is now A[iPass][iPass].
     // The determinant is the product of the pivot elements.
     pivot = A[n*iPass+iPass];
     det = det * pivot;
     if (det == 0)
           {
           free(ac);
           return 0;
           }
     for (icol = 0; icol < n; icol++)
           {
           // Normalize the pivot row by dividing by the pivot element.
           AInverse[n*iPass+icol] = AInverse[n*iPass+icol] / pivot;
           if (icol >= iPass) A[n*iPass+icol] = A[n*iPass+icol] / pivot;
           }
     for (irow = 0; irow < n; irow++)
           // Add a multiple of the pivot row to each row.  The multiple factor
           // is chosen so that the element of A on the pivot column is 0.
           {
           if (irow != iPass) factor = A[n*irow+iPass];
           for (icol = 0; icol < n; icol++)
                 {
                 if (irow != iPass)
                       {
                       AInverse[n*irow+icol] -= factor * AInverse[n*iPass+icol];
                       A[n*irow+icol] -= factor * A[n*iPass+icol];
                       }
                 }
           }
     }
     free(ac);
 	return 1;
}


 float OAgent_OPF:: _clip(float x, float xmin, float xmax){
        if (x<xmin) return xmin;
        if (x>xmax) return xmax;
        return x;
    }

/// Functions for Communicating Data
void OAgent_OPF::_sender_helper_64bit(float x,uint8_t* sign_y,uint64_t* y){
        if (x < 0) 
        {
            *y = (uint64_t) (-x*BASE_64);
            *sign_y= 0;
        }
        else
        {
            *y = (uint64_t) (x*BASE_64);
            *sign_y = 1;
        }
    }

void OAgent_OPF::_sender_helper_32bit(float x,uint8_t* sign_y,uint32_t* y){
        if (x < 0) 
        {
            *y = (uint32_t) (-x*BASE_32);
            *sign_y= 0;
        }
        else
        {
            *y = (uint32_t) (x*BASE_32);
            *sign_y = 1;
        }
    }

void OAgent_OPF::_SendToChild(uint16_t recipientID, float *vars, uint8_t n_var, uint8_t task) {
    uint8_t payload[7+4*n_var];

    payload[0] = OPF_HEADER;
    payload[1] = OPF_HEADER >> 8;
    payload[2] = recipientID;
    payload[3] = recipientID >> 8;
    payload[4] = 0; payload[5] = 0;
     uint8_t sign_var; uint32_t var;
    int i = 6;
    for (int j=0;j<n_var;j++){
        _sender_helper_32bit(vars[j],&sign_var,&var);
        if (j<8) payload[4] += sign_var << j;
        else payload[5] += sign_var << (j-8);
        payload[i] = var;
        payload[i+1] = var >> 8;
        payload[i+2] = var >> 16;
        payload[i+3] = var >> 24;
        i+=4;
    }
    
    payload[6+4*n_var] = task;

    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload)); // create zigbee transmit class
    unsigned long txTime = _xbee->sendTwo(_zbTx,false,true); // transmit with time stamp
    #ifdef VERBOSE
        Serial << _MEM(PSTR("Transmit time: ")) << txTime << endl;
    #endif
}

void OAgent_OPF::_SendToParent(uint16_t recipientID, float *vars, uint8_t n_var, uint8_t task){
    uint8_t payload[7+4*n_var];

    payload[0] = OPF_HEADER;
    payload[1] = OPF_HEADER >> 8;
    payload[2] = recipientID;
    payload[3] = recipientID >> 8;
    payload[4] = 0; payload[5] = 0;
     uint8_t sign_var; uint32_t var;
    int i = 6;
    for (int j=0;j<n_var;j++){
        _sender_helper_32bit(vars[j],&sign_var,&var);
        // Serial<<vars[j]<<" "<<var<<endl;
        if (j<8) payload[4] += sign_var << j;
        else payload[5] += sign_var << (j-8);
        payload[i] = var;
        payload[i+1] = var >> 8;
        payload[i+2] = var >> 16;
        payload[i+3] = var >> 24;
        i+=4;
    }
    
    payload[6+4*n_var] = task;
    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload)); // create zigbee transmit class
    unsigned long txTime = _xbee->sendTwo(_zbTx,false,true); // transmit with time stamp
    #ifdef VERBOSE
        Serial << _MEM(PSTR("Transmit time: ")) << txTime << endl;
    #endif
}

float* OAgent_OPF::_getPacketFromChild(uint8_t n_var) {
    float *a = new float[n_var+1];
    int32_t mag_x; int8_t sign_x; float x;
    int i = 6;
    for (int j=0;j<n_var;j++){
        mag_x = (int32_t(_rx->getData(i+3)) << 24) + (int32_t(_rx->getData(i+2)) << 16) + (int32_t(_rx->getData(i+1)) << 8) + int32_t(_rx->getData(i));
        if (j<8) sign_x = -1 + (((_rx->getData(4))>>j) & 1)*2;
        else sign_x = -1 + (((_rx->getData(5))>>(j-8)) & 1)*2;
        x = (float) (sign_x*mag_x);
        a[j] = x/BASE_32;
        i += 4;
        // Serial<<sign_x<<" "<<a[j]<<" "<<mag_x<<endl;
    }
    a[n_var] = int8_t(_rx->getData(6+4*n_var));
    // Serial<<"task "<<a[n_var]<<endl;
    return a;
}

float* OAgent_OPF::_getPacketFromParent(uint8_t n_var) {
    float *a = new float[n_var+1];
    int32_t mag_x; int8_t sign_x; float x;
    int i = 6;
    for (int j=0;j<n_var;j++){
        mag_x = (int32_t(_rx->getData(i+3)) << 24) + (int32_t(_rx->getData(i+2)) << 16) + (int32_t(_rx->getData(i+1)) << 8) + int32_t(_rx->getData(i));
        if (j<8) sign_x = -1 + (((_rx->getData(4))>>j) & 1)*2;
        else sign_x = -1 + (((_rx->getData(5))>>(j-8)) & 1)*2;
        x = (float) (sign_x*mag_x);
        a[j] = x/BASE_32;
        i += 4;
    }
    a[n_var] = int8_t(_rx->getData(6+4*n_var));
    return a;
}

void OAgent_OPF::_CG_RC_SendPacket(float mu, float nu){
    uint8_t payload[22];

    payload[0] = CG_RC_SUBHEADER;
    payload[1] = CG_RC_SUBHEADER >> 8;
    payload[2] = CG_RC_SUBHEADER;  // dummy payloads
    payload[3] = CG_RC_SUBHEADER >> 8;

    uint8_t sign_var; uint64_t var;
    _sender_helper_64bit(mu,&sign_var,&var);
    payload[4]=sign_var;
    payload[5] = var;
    payload[6] = var >> 8;
    payload[7] = var >> 16;
    payload[8] = var >> 24;
    payload[9] = var >> 32;
    payload[10] = var >> 40;
    payload[11] = var >> 48;
    payload[12] = var >> 56;

    _sender_helper_64bit(nu,&sign_var,&var);
    payload[13]=sign_var;
    payload[14] = var;
    payload[15] = var >> 8;
    payload[16] = var >> 16;
    payload[17] = var >> 24;
    payload[18] = var >> 32;
    payload[19] = var >> 40;
    payload[20] = var >> 48;
    payload[21] = var >> 56;

    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload)); // create zigbee transmit class
    unsigned long txTime = _xbee->sendTwo(_zbTx,false,true); // transmit with time stamp
    #ifdef VERBOSE
        Serial << _MEM(PSTR("Transmit time: ")) << txTime << endl;
    #endif
}

double* OAgent_OPF::_CG_RC_ReceivePacket() {
    double *a = new double[2];
    int64_t mag_x; int8_t sign_x; double x;
    mag_x = (int64_t(_rx->getData(12)) << 56) + (int64_t(_rx->getData(11)) << 48) + (int64_t(_rx->getData(10)) << 40) + (int64_t(_rx->getData(9)) << 32) + (int64_t(_rx->getData(8)) << 24) + (int64_t(_rx->getData(7)) << 16) + (int64_t(_rx->getData(6)) << 8) + int64_t(_rx->getData(5));
    sign_x = -1 + ((_rx->getData(4))*2);
    x = (double) (sign_x*mag_x);
    a[0] = x/BASE_64;

    mag_x = (int64_t(_rx->getData(21)) << 56) + (int64_t(_rx->getData(20)) << 48) + (int64_t(_rx->getData(19)) << 40) + (int64_t(_rx->getData(18)) << 32) + (int64_t(_rx->getData(17)) << 24) + (int64_t(_rx->getData(16)) << 16) + (int64_t(_rx->getData(15)) << 8) + int64_t(_rx->getData(14));
    sign_x = -1 + ((_rx->getData(13))*2);
    x = (double) (sign_x*mag_x);
    a[1] = x/BASE_64;
    // Serial<<a[0]<<" "<<a[1]<<endl; delay(5);
    return a;
}



// Functions for Printing 
void OAgent_OPF::_print_(String &s,float &val,uint8_t precision){

    Serial<<s<<" "; Serial.print(val,precision); Serial<<endl;
    delay(5);
}
void OAgent_OPF::_print2Darray_(String &s,float*A,int rows,int cols,uint8_t precision){
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

void OAgent_OPF::_print1Darray_(String &s,float* a,int size,uint8_t precision){
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
            // if (header == SCHEDULE_DONE) {Serial<<"Received SCHEDULE_DONE"<<endl;delay(5);}
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

    // Serial << "Waiting for Schedule OPF Packet"<<endl;
    delay(5);

    if(_waitForNeighborPacket(neighborID,header,true,timeout)) {                    //stays in loop until desired packet received

        // Serial << "Received Schedule OPF Packet"<<endl;
        delay(5);
    
        startTime   = _getStartTimeFromPacket();
        iterations  = _getIterationsFromPacket();
        uint16_t start = millis();
        s->setStatus(neighborID, 3);
        l->updateLinkedList(s->getStatusP());                                     	//update linked list
        
        // Serial << "Sending Schedule ACK Packet to node " << neighborID<<endl;
        delay(5);

        while(true)
        {
            _broadcastACKPacket(SCHEDULE_OPF_ACK_HEADER,neighborID);
            if(_waitForUnicastPacket(neighborID,(_G->getLocalVertex())->getID(),SCHEDULE_OPF_ACKACK_HEADER,true,100))                        //wait for an acknowledgement for candactcode packet
            {
                // Serial << "received schedule ACKACK from node " << neighborID<<endl;
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
    // Serial << "Broadcasting Schedule OPF Packet"<<endl;
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
                    // Serial << "received acknowledgement from node " << neighborID<<endl;
                    delay(5);
                    if(s->getStatus(neighborID) < 3)
                    {
                        counter++;
                        s->setStatus(neighborID, 3);
                    }
                    // Serial << "Counter = "<<counter<<endl;
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