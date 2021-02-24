/*
 *  OAgent_ED.cpp
 *  
 *
 *  Created by Stanton T. Cady on 06/15/12
 *  Edited by Laura Haller on 01/11/13
 *  Last edited by Stanton T. Cady on 01/16/13
 *
 */



#include "OAgent_ED.h"
#include "Streaming.h"
//#define VERBOSE

//// Public methods
/// Constructors
OAgent_ED::OAgent_ED() {

    XBee temp1 = XBee();
    ZBRxResponse temp2 = ZBRxResponse();
    OGraph_ED temp3 = OGraph_ED();
    _prepareOAgent_ED(&temp1,&temp2,&temp3);
    //setRS(0);
}

OAgent_ED::OAgent_ED(XBee * xbee, OGraph_ED * G, bool leader, bool quiet) {
     ZBRxResponse temp = ZBRxResponse();
    _prepareOAgent_ED(xbee,&temp,G,leader,quiet);
    //setRS(0);
}

OAgent_ED::OAgent_ED(XBee * xbee, ZBRxResponse * rx, OGraph_ED * G, bool leader, bool quiet) {
    _prepareOAgent_ED(xbee,rx,G,leader,quiet);
    //setRS(0);
}




// Economic Dispatch

bool OAgent_ED::EconomicDispatch(bool genBus, float step_size, uint16_t iterations) {
    srand(analogRead(7));
    bool gamma = false;
    gamma = AcceleratedED(genBus,step_size,iterations);
    // if(isLeader())
    // { 
    //     gamma = leaderED(genBus,step_size,iterations);
    // }
    // else
    // {
    //     gamma = nonleaderED(genBus,step_size,iterations);
    // }
    //     //Serial<<"Sup bro?! "<<getbufferdata(0)<<"\n";

    return gamma;

}

bool OAgent_ED::leaderED(bool genBus, float step_size, uint8_t iterations) {
    unsigned long t0 = myMillis();
    unsigned long startTime = t0 + ED_DELAY;
    bool gamma = false;
    bool scheduled = _waitForSchedulePacketED(SCHEDULE_TIMEOUT,startTime,iterations);
    //Serial<<"Schedule done at "<<myMillis()<<"\n";
    //bool stat = startTime>myMillis();

    //Serial<<"Leader: Startime= "<<startTime<<", Time= "<<myMillis()<<"\n";

    if (!scheduled) 
    {
        Serial<<"ED scheduling was a FAIL"<<endl;
        gamma = false;
    }
    else
    {
        Serial<<"ED scheduling was a SUCCESS"<<endl;
        if(_waitToStart(startTime,true,10000))
        {
            //Serial << "Correct Startime is " <<startTime<< ". My startime is "<< myMillis() <<endl;
            // gamma = StandardED(genBus);
            gamma = AcceleratedED(genBus,step_size,iterations);
        }
    }        
    return gamma;
}

bool OAgent_ED::nonleaderED(bool genBus, float step_size, uint8_t iterations) {
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
        Serial<<"ED scheduling was a SUCCESS"<<endl;
        if(_waitToStart(startTime,true,10000))
        {
            //Serial << "Correct Startime is " <<startTime<< ". My startime is "<< myMillis() <<endl;
            // gamma = StandardED(genBus);
            gamma = AcceleratedED(genBus,step_size,iterations);
        }
        //digitalWrite(48,LOW);
    }
    else
    {
        Serial<<"ED scheduling was a FAIL"<<endl;
        gamma = false;
    }
    return gamma;
}


bool OAgent_ED::AcceleratedED(bool genBus,float step_size,uint16_t iterations) {
    OLocalVertex * s = _G->getLocalVertex();                                                    // store pointer to local vertex
    ORemoteVertex * n = _G->getRemoteVertex(1);                                                 // store pointer to remote vertices
    LinkedList * l = _G->getLinkedList();

    uint16_t nodeID = s->getID();
    float Pmin = s->getMin(),Pmax = s->getMax(),alpha = s->getAlpha(),beta = s->getBeta();
    uint8_t neighborID;

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

    float out_deg = _G->getN();
    uint8_t num_nodes = 6;
    float P = 0, Pd = float((s->getActiveDemand(0))/10000.0), new_P, x = 0, reg_ratio = 0;
    float lambda = 0, new_lambda, nu = 1, new_nu, y = num_nodes*(P-Pd), new_y; 

    float sum_lambda[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++)sum_lambda[i]=0;
    float sum_nu[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++)sum_nu[i]=0;
    float sum_y[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++)sum_y[i]=0;

    sum_lambda[nodeID-1] += lambda/out_deg;
    sum_nu[nodeID-1] += nu/out_deg;
    sum_y[nodeID-1] += y/out_deg;

    float reg_num_var = Pd, reg_den_var = Pmax-Pmin, reg_num_var_new, reg_den_var_new;
    float reg_sum_num[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++)reg_sum_num[i]=0;
    float reg_sum_den[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++)reg_sum_den[i]=0;
    float load_change = 0;

    if (!isLeader()) reg_num_var = 0;
    reg_sum_num[nodeID-1] = reg_num_var/out_deg; reg_sum_den[nodeID-1] = reg_den_var/out_deg;
    Serial<<reg_num_var<<endl;
    uint8_t received_from[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++) received_from[i]=0;

    Serial<<"out_deg="<<out_deg<<" alpha="<<alpha<<" beta="<<beta<<" Pmin="<<Pmin<<" Pmax="<<Pmax<<" Pd="<<Pd<<endl; delay(5);
    unsigned long start, time_read_regD = millis();
    unsigned long StartOfSimulation = millis();
    uint16_t leader_time = 0, nonleader_time = 0;
    unsigned long k = 0; bool run = true;
    while (1)
    {
        
        // Read next regulation signal
        if ((millis()-time_read_regD>4000) && isLeader()){

            time_read_regD = millis();

            // Serial<<"Time instant "<< leader_time << endl;
            // _print_("Load ",Pd,6);
            // _print_("ED active power ",P,6); _print_("Price ",x,6);
            // _print_("Reg power ",reg_ratio*(Pmax-Pmin),6); _print_("Ratio ",reg_ratio,6);
            float data[6] = {float(leader_time),Pd,P,x,reg_ratio*(Pmax-Pmin),reg_ratio};
            String str = "Time";_print1Darray_(str,data,6,5);
            if ((reg_sum_num[nodeID-1]>100) || (reg_sum_den[nodeID-1]>100)){
                _print_("Num run sum ",reg_sum_num[nodeID-1],6);
                _print_("Den run sum ",reg_sum_den[nodeID-1],6);

            }
            if ((sum_lambda[nodeID-1]>1000) || (sum_nu[nodeID-1]>1000) || (sum_y[nodeID-1]>1000)){
                _print_("Sum lambda ",sum_lambda[nodeID-1],6);
                _print_("Sum nu ",sum_nu[nodeID-1],6);
                _print_("Sum y ",sum_y[nodeID-1],6);               
            }
            
            
            leader_time++;
            Pd = float((s->getActiveDemand(leader_time))/10000.0); // this is actually a RegD signal
            if (leader_time>150) run = false;
            reg_num_var = Pd; reg_den_var = Pmax-Pmin;
            // Serial<<reg_num_var<<endl;
            reg_sum_num[nodeID-1] = reg_num_var/out_deg; reg_sum_den[nodeID-1] = reg_den_var/out_deg;
            for (uint8_t i:neighbors) {reg_sum_num[i-1]=0;reg_sum_den[i-1]=0;}
        }

        // if (k%10==0){
        //     Serial << "Iteration " << k+1<<endl;
        //     _print_("Load ",Pd,6);
        //     _print_("ED active power ",P,6); _print_("Price ",x,6);
        //     _print_("Reg power ",reg_ratio*(Pmax-Pmin),6); _print_("Ratio ",reg_ratio,6);delay(5);
        //     _print_("Num run sum ",reg_sum_num[nodeID-1],6);
        //     _print_("Den run sum ",reg_sum_den[nodeID-1],6);
        //     // _print_("Sum lambda ",sum_lambda[nodeID-1],6);
        //     // _print_("Sum nu ",sum_nu[nodeID-1],6);
        //     // _print_("Sum y ",sum_y[nodeID-1],6);
        //     delay(5);
        // }
        k++;

        float running_sums[5] = {sum_lambda[nodeID-1],sum_nu[nodeID-1],sum_y[nodeID-1],reg_sum_num[nodeID-1],reg_sum_den[nodeID-1]};
        int nei_index=0;
        new_lambda = 0; new_nu = 0; new_y = 0; reg_den_var_new = 0; reg_num_var_new = 0;
        start = millis();   // initialize timer
        bool received_msg = false, received_msg2 = false;
        while (millis()-start<=200){

             uint8_t nei_to_send=neighbors[nei_index]; 
             nei_index++; if (nei_index==_G->getN()) nei_index=0;
             if (isLeader()) _SendPacket(nei_to_send,running_sums,leader_time);
             else _SendPacket(nei_to_send,running_sums,nonleader_time);
            // if (millis()%3==1) {
            //     _SendPacket(nei_to_send,running_sums);
            //     Serial<<"Packet sent to "<<nei_to_send<<endl; delay(5);
            // }
            
            if(_waitForUnicastPacket(neighborID,nodeID,ED_HEADER,true,50))                                // ED packet available for node from its neighbor
            {
                
                if (!received_from[neighborID-1]){

                    received_from[neighborID-1]=1; received_msg = true;
                    float* tmp = _getPacket();
                    new_lambda += tmp[0] - sum_lambda[neighborID-1];
                    new_nu += tmp[1] - sum_nu[neighborID-1];
                    new_y += tmp[2] - sum_y[neighborID-1];
                    sum_lambda[neighborID-1] = tmp[0];sum_nu[neighborID-1] = tmp[1];sum_y[neighborID-1] = tmp[2];
                    if (!isLeader() && (nonleader_time<tmp[5])) 
                        {

                            // Serial<<"Time instant "<< nonleader_time << endl;
                            // _print_("Load ",Pd,6); _print_("Load change",load_change,6);
                            // _print_("ED active power ",P,6); _print_("Price ",x,6);
                            // _print_("Reg power ",reg_ratio*(Pmax-Pmin),6); _print_("Ratio ",reg_ratio,6);
                            float data[6] = {float(nonleader_time),load_change,P,x,reg_ratio*(Pmax-Pmin),reg_ratio};
                            String str = "Time";_print1Darray_(str,data,6,5);

                            nonleader_time = uint16_t(tmp[5]); if (nonleader_time>150) run = false;
                            float tmp2 = float((s->getActiveDemand(nonleader_time))/10000.0); // read active power demand measurement
                            y -= num_nodes*(tmp2 - Pd);
                            load_change = tmp2-Pd;
                            reg_num_var = load_change; reg_den_var = Pmax-Pmin;
                            // Serial<<reg_num_var<<" "<<tmp2<<" "<<Pd<<endl;
                            reg_sum_num[nodeID-1] = reg_num_var/out_deg; reg_sum_den[nodeID-1] = reg_den_var/out_deg;
                            for (uint8_t i:neighbors) {reg_sum_num[i-1]=0;reg_sum_den[i-1]=0;}
                            Pd = tmp2;
                        }
                    if ((isLeader() && (leader_time==uint16_t(tmp[5]))) || (!isLeader() && (nonleader_time == uint16_t(tmp[5])))){

                        reg_num_var_new += tmp[3] - reg_sum_num[neighborID-1];
                        reg_den_var_new += tmp[4] - reg_sum_den[neighborID-1];
                        reg_sum_num[neighborID-1] = tmp[3]; reg_sum_den[neighborID-1] = tmp[4];
                        received_msg2 = true;
                        // Serial<<"Message received"<<endl;
                    }
                }
            }
        }

        if (received_msg && run)
        {
            lambda = new_lambda-step_size*new_y + lambda/out_deg-step_size*y/out_deg;
            nu = new_nu + nu/out_deg;
            y = new_y + y/out_deg;

            if ((nu<1e-6) && (nu>0)) x = lambda/1e-6;
            else if ((nu>-1e-6) && (nu<0)) x = -lambda/1e-6;
            else x = lambda/nu;
            new_P = _clip(P-step_size*(P-alpha)/beta+step_size*x,Pmin,Pmax);
            y += num_nodes*(new_P - P);
            P = new_P;

            sum_lambda[nodeID-1] += lambda/out_deg;
            sum_nu[nodeID-1] += nu/out_deg;
            sum_y[nodeID-1] += y/out_deg;

            for (uint8_t i:neighbors) {received_from[i-1]=0;}
        }

        if (received_msg2 && run)
        {

            reg_num_var = reg_num_var_new + reg_num_var/out_deg;
            reg_den_var = reg_den_var_new + reg_den_var/out_deg;

            if ((reg_den_var<1e-6) && (reg_den_var>0)) reg_ratio = reg_num_var/1e-6;
            else if ((reg_den_var>-1e-6) && (reg_den_var<0)) reg_ratio = -reg_num_var/1e-6;
            else reg_ratio = reg_num_var/reg_den_var;
            reg_sum_num[nodeID-1] += reg_num_var/out_deg; reg_sum_den[nodeID-1] += reg_den_var/out_deg;
        }

        // if ((reg_sum_num[nodeID-1]>100) || (reg_sum_den[nodeID-1]>100)){
        if (k%100==0){
            _print_("Num run sum ",reg_sum_num[nodeID-1],6);
            _print_("Den run sum ",reg_sum_den[nodeID-1],6);

        }
        // if ((sum_lambda[nodeID-1]>1000) || (sum_nu[nodeID-1]>1000) || (sum_y[nodeID-1]>1000)){
        if (k%100==0){
            _print_("Sum lambda ",sum_lambda[nodeID-1],6);
            _print_("Sum nu ",sum_nu[nodeID-1],6);
            _print_("Sum y ",sum_y[nodeID-1],6);               
        }

    }
    Serial << "Computed solution:"<<endl; 
    _print_("ED active power ",P,6); _print_("Price ",x,6);
    _print_("Reg power ",reg_ratio*(Pmax-Pmin),6); _print_("Ratio ",reg_ratio,6);delay(5);
    unsigned long EndOfSimulation = millis();
    Serial << "Elapsed time: "<<(EndOfSimulation-StartOfSimulation)/1000.0<<endl;
    return true;
}




float OAgent_ED:: _clip(float x, float xmin, float xmax){
        if (x<xmin) return xmin;
        if (x>xmax) return xmax;
        return x;
    }

void OAgent_ED::_sender_helper32(float x,uint8_t* sign_y,uint32_t* y){
        if (x < 0) 
        {
            *y = (uint32_t) (-x*BASE32);
            *sign_y= 0;
        }
        else
        {
            *y = (uint32_t) (x*BASE32);
            *sign_y = 1;
        }
    }
void OAgent_ED::_sender_helper64(float x,uint8_t* sign_y,uint64_t* y){
        if (x < 0) 
        {
            *y = (uint64_t) (-x*BASE64);
            *sign_y= 0;
        }
        else
        {
            *y = (uint64_t) (x*BASE64);
            *sign_y = 1;
        }
    }

void OAgent_ED::_SendPacket(uint16_t recipientID, float* vars,uint16_t time) {
    uint8_t payload[37];

    payload[0] = ED_HEADER;
    payload[1] = ED_HEADER >> 8;
    payload[2] = recipientID;
    payload[3] = recipientID >> 8;

    // lmbda,nu,y;

    uint8_t sign_var; uint64_t var;
    for (int i=4,j=0;i<25,j<3;i=i+7,j++){
        _sender_helper64(vars[j],&sign_var,&var);
        payload[i]=sign_var;
        payload[i+1] = var;
        payload[i+2] = var >> 8;
        payload[i+3] = var >> 16;
        payload[i+4] = var >> 24;
        payload[i+5] = var >> 32;
        payload[i+6] = var >> 40;
    }
    
    uint32_t var2;
    for (int i=25,j=3;i<35,j<5;i=i+5,j++){
        _sender_helper32(vars[j],&sign_var,&var2);
        payload[i]=sign_var;
        payload[i+1] = var2;
        payload[i+2] = var2 >> 8;
        payload[i+3] = var2 >> 16;
        payload[i+4] = var2 >> 24;
    }
    payload[35] = time;
    payload[36] = time >> 8;

    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload)); // create zigbee transmit class
    unsigned long txTime = _xbee->sendTwo(_zbTx,false,true); // transmit with time stamp
    #ifdef VERBOSE
        Serial << _MEM(PSTR("Transmit time: ")) << txTime << endl;
    #endif
}


float* OAgent_ED::_getPacket() {
    float* a = new float[6];
    int64_t mag_x; int8_t sign_x; double x;
    for (int i=4,j=0;i<25,j<3;i=i+7,j++){
        mag_x = (int64_t(_rx->getData(i+6)) << 40) + (int64_t(_rx->getData(i+5)) << 32) + (int64_t(_rx->getData(i+4)) << 24) + (int64_t(_rx->getData(i+3)) << 16) + (int64_t(_rx->getData(i+2)) << 8) + int64_t(_rx->getData(i+1));
        sign_x = -1 + ((_rx->getData(i))*2);
        x = double(sign_x*mag_x);
        // Serial<<mag_x<<endl;
        a[j] = x/BASE64;

    }
    int32_t mag_x2; float x2;
    for (int i=25,j=3;i<35,j<5;i=i+5,j++){
        mag_x2 = (int32_t(_rx->getData(i+4)) << 24) + (int32_t(_rx->getData(i+3)) << 16) + (int32_t(_rx->getData(i+2)) << 8) + int32_t(_rx->getData(i+1));
        sign_x = -1 + ((_rx->getData(i))*2);
        x2 = float(sign_x*mag_x2);
        // Serial<<mag_x<<endl;
        a[j] = x2/BASE32;

    }
    a[5] = float((int32_t(_rx->getData(36)) << 8) + int32_t(_rx->getData(35)));
    return a;
}




/// Synchronization methods
bool OAgent_ED::sync(uint8_t attempts) {
    
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

bool OAgent_ED::resync(){
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


unsigned long OAgent_ED::_broadcastResyncBeginPacket(unsigned long period){

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


void OAgent_ED::_broadcastResyncResponsePacket(unsigned long t2, unsigned long received_id){

	uint16_t payload[5];
	payload[0] = RESYNC_RESPONSE_HEADER;
	_addUint32_tToPayload(uint32_t(t2),((uint8_t * )(&payload)),2);
	_addUint32_tToPayload(uint32_t(received_id),((uint8_t * )(&payload)),6);

	_zbTx = ZBTxRequest(_broadcastAddress,((uint8_t *)(&payload)),sizeof(payload));
    // send packet without timestamp and return time packet was sent
    _xbee->sendTwo(_zbTx,true,false);

}


bool OAgent_ED::_waitForResyncPacketResponse(unsigned long &rxTime, uint16_t timeout){

	return _waitForPacket(RESYNC_RESPONSE_HEADER, rxTime, true, timeout);      //assuming response is broadcasted from unsynced not
}

bool OAgent_ED::_waitForResyncFinalPacket(unsigned long timeout){

	return _waitForPacket(RESYNC_HEADER_FINAL, false, timeout);
}

void OAgent_ED::_broadcastResyncFinalPacket(long offset){

	uint16_t payload[3];
	payload[0] = RESYNC_HEADER_FINAL;
	_addUint32_tToPayload(uint32_t(offset),((uint8_t * )(&payload)),2);
	_zbTx = ZBTxRequest(_rx->getRemoteAddress64(),((uint8_t *)(&payload)),sizeof(payload));

    return _xbee->send(_zbTx);

}

////////////////////////////////////////////////

unsigned long OAgent_ED::myMillis() { 
	return millis() - (unsigned long)_offset; 
}

/// General xbee methods

/*
 * This function verifies the validity of an xbee packet.
 * It first checks to see if a packet is available then verifies that it is a zigbee rx packet.
 * If the packet it is valid the function will return true and it will store the response in the
 * ZBRxResponse parameter.
 */
bool OAgent_ED::_validPacketAvailable() {
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

bool OAgent_ED::_packetAvailable(uint16_t header, bool broadcast) {
    // read packet
    _xbee->readPacket();
    return _packetAvailableHelper(header,broadcast);
}

bool OAgent_ED::_packetAvailable(uint16_t header,  unsigned long &rxTime, bool broadcast) {
    // read packet and save rx time
    rxTime = _xbee->readPacketTwo(true);
    //Serial << "\n Before packetAvailableHelper \n";
    return _packetAvailableHelper(header,broadcast);
}

uint16_t OAgent_ED::_packetAvailable(bool broadcast) {
    _xbee->readPacket();
    if(_validPacketAvailable()) {
        if(((broadcast == true) && ((_rx->getOption() & 0x0F) == ZB_BROADCAST_PACKET)) || ((broadcast == false) && ((_rx->getOption() & 0x0F) == ZB_PACKET_ACKNOWLEDGED)))
            return _getHeaderFromPacket();
    }
    return 0x0;
}


bool  OAgent_ED::_packetAvailable2(unsigned long &rxTime, bool broadcast){

	rxTime = _xbee->readPacketTwo(true);

	if(_validPacketAvailable()) {
        if(((broadcast == true) && ((_rx->getOption() & 0x0F) == ZB_BROADCAST_PACKET)) || ((broadcast == false) && ((_rx->getOption() & 0x0F) == ZB_PACKET_ACKNOWLEDGED)))
            return true;
    }
}


 
bool OAgent_ED::_packetAvailableHelper(uint16_t header, bool broadcast) {
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

bool OAgent_ED::_packetACKed(int timeout) {
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
//uint16_t OAgent_ED::_getHeaderFromPacket() {
//	return (uint16_t(_rx->getData(1)) << 8) + _rx->getData(0);
//}

bool OAgent_ED::_waitForPacket(uint16_t header, unsigned long &rxTime, bool broadcast, int timeout) {
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

bool OAgent_ED::_waitForPacket(uint16_t header, bool broadcast, int timeout) { //Where it stays in an endless loop (if timeout =-1) until packet received
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

int  OAgent_ED::_waitForPacket2(uint16_t header1, uint16_t header2, unsigned long &rxTime, bool broadcast){

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

uint16_t OAgent_ED::_waitForValidPacket(bool broadcast, int timeout) {
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

bool OAgent_ED::_waitToStart(unsigned long startTime, bool useMyMillis, int timeout) {
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
uint16_t OAgent_ED::_genTxTime(uint16_t iterationPeriod, uint8_t ITF) {
	srand(analogRead(0));
	return (rand() % (iterationPeriod - 2*ITF)) + ITF;
}

/*
 * This function generates a random transmit time given an iteration period and inter-frame spacing.
 * A seed for the random number generation is accepted as an argument.
 */
uint16_t OAgent_ED::_genTxTime(uint16_t iterationPeriod, uint8_t ITF, int seed) {
	srand(seed);
	return (rand() % (iterationPeriod - 2*ITF)) + ITF;
}

bool OAgent_ED::_timeToTransmit(uint16_t startTime, uint16_t txTime) {
    if((int((millis() - startTime)) >= txTime))
        return true;
    else
        return false;
}


bool OAgent_ED::_getFlagFromPacket() {
    bool flag_ED = (bool) _rx->getData(9);
    
    return flag_ED;
}

bool OAgent_ED::linkActivationAlgorithm() {  
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

uint8_t OAgent_ED:: _assignLinkACTCODES() {
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

void OAgent_ED::_listenForLinkACTCODES(int timeout) { 
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

void OAgent_ED::_candactcodePacket(uint16_t recipientID) {
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


void OAgent_ED::_actcodePacket(uint16_t recipientID, uint8_t actcode) {
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

void OAgent_ED::_linksactPacket(uint16_t recipientID) {
    uint8_t payload[4];
    // put header in payload array
    payload[0] = LINKSACT_HEADER;
    payload[1] = LINKSACT_HEADER >> 8;
    payload[2] = recipientID;
    payload[3] = recipientID >> 8;

    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload));
    _xbee->send(_zbTx);
}


bool OAgent_ED::_waitForNeighborPacket(uint8_t &neighborID, uint16_t header, bool broadcast, int timeout) {
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

bool OAgent_ED::_waitForUnicastPacket(uint8_t &neighborID, uint8_t nodeID, uint16_t header, bool broadcast, int timeout) {
    unsigned long start;
    if(timeout != -1)
        start = millis();
    while(true) {
        if((timeout != -1) && (millis()-start >= timeout))
            return false;
        if(_waitForPacket(header,true,timeout)) {                       //unless the packet contains the expected header it will keep waiting
            int32_t aLsb = _rx->getRemoteAddress64().getLsb();
            uint16_t recipientID = _getRecipientIDFromPacket();
            uint8_t index;  
            if(_G->isInNeighbor(aLsb,index)) {
                if(recipientID == nodeID) {    //check that the packet's recipient ID matches the node ID
                    neighborID = index + 1;
                    return true;
                }
            }
        }
    }
}

 // End Sced communication methods



void OAgent_ED::_broadcastSchedulePacket(uint16_t header, unsigned long startTime, uint8_t numIterations, uint16_t period) {
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

void OAgent_ED::_broadcastSchedulePacketED(unsigned long startTime, uint8_t numIterations) {
    uint8_t payload[7];
    // put header in payload array
    payload[0] = SCHEDULE_ED_HEADER;
    payload[1] = SCHEDULE_ED_HEADER >> 8;
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

void OAgent_ED::_waitForSchedulePacket(uint16_t header, unsigned long &startTime, uint8_t &iterations, uint16_t &period, uint8_t id, int timeout) {
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

bool OAgent_ED::_waitForSchedulePacket_RSL(uint16_t header, unsigned long &startTime, uint8_t &iterations, uint16_t &period, int timeout) {
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
        else if(header == SCHEDULE_ED_HEADER)
        {      
            startTime   = _getStartTimeFromPacket();
            iterations  = _getIterationsFromPacket();
            period      = _getPeriodFromPacket();
            uint16_t start = millis();
            s->setStatus(neighborID, 3);
            l->updateLinkedList(s->getStatusP());   					//update linked list
            while(uint16_t(millis()-start) < 10)
                _broadcastACKPacket(SCHEDULE_ED_ACK_HEADER,neighborID);

            return _waitForACKPacket_RSL(SCHEDULE_ED_HEADER,SCHEDULE_TIMEOUT, startTime, iterations, period);
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

bool OAgent_ED::_waitForScheduleFeasibleFlowPacket(unsigned long &startTime, uint8_t &iterations, int timeout) {
    uint8_t neighborID;
    uint16_t header = SCHEDULE_ED_HEADER;
    LinkedList * l = _G->getLinkedList();                      						//get pointer to linked list
    OLocalVertex * s = _G->getLocalVertex(); 										// store pointer to local vertex 
    l->resetLinkedListStatus(s->getStatusP());                                      //gets linkedlist and resets status of online neighbors to 2 

    Serial << "Waiting for Schedule ED Packet"<<endl;
    delay(5);

    if(_waitForNeighborPacket(neighborID,header,true,timeout)) {                    //stays in loop until desired packet received

        Serial << "Received Schedule ED Packet"<<endl;
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
            _broadcastACKPacket(SCHEDULE_ED_ACK_HEADER,neighborID);
            if(_waitForUnicastPacket(neighborID,(_G->getLocalVertex())->getID(),SCHEDULE_ED_ACKACK_HEADER,true,100))                        //wait for an acknowledgement for candactcode packet
            {
                Serial << "received schedule ACKACK from node " << neighborID<<endl;
                delay(5);
                break;
            }
        }
        return _waitForSchedulePacketED(SCHEDULE_TIMEOUT,startTime,iterations);
    }
    else
        return false;
}

// uint16_t OAgent_ED::_waitForSchedulePacket(unsigned long &startTime, uint8_t &iterations, uint16_t &period, int timeout) {
//     uint16_t rsp = _waitForValidPacket(true,timeout);
//     if(rsp != 0x0) {
//         startTime   = _getStartTimeFromPacket();
//         iterations  = _getIterationsFromPacket();
//         period      = _getPeriodFromPacket();    
//         return rsp;
//     }
//     return 0x0;
// }

void OAgent_ED::_broadcastACKPacket(uint16_t header, uint8_t recipientID)
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

void OAgent_ED::_broadcastHeaderPacket(uint16_t header)
{
    uint8_t payload[2];
    // put header in payload array
    payload[0] = header;
    payload[1] = header >> 8;

    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload));
    _xbee->send(_zbTx);
}

void OAgent_ED::_waitForACKPacket(uint16_t header, unsigned long t0, unsigned long startTime, uint8_t iterations, uint16_t period)
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
bool OAgent_ED::_waitForACKPacket_RSL(uint16_t header, int timeout, unsigned long startTime, uint8_t iterations, uint16_t period ) { 
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

    if (header == SCHEDULE_ED_HEADER)
        headerACK = SCHEDULE_ED_ACK_HEADER;
    else if (header == SCHEDULE_MAXMIN_HEADER)
        headerACK = SCHEDULE_MAXMIN_ACK_HEADER;

    while (uint16_t(millis()-start) < timeout)
    {
            while (uint16_t(millis()-restart) < timeout*0.01)
            {
                if(_waitForNeighborPacket(neighborID,headerACK,true,100))
                {
                    if((headerACK == SCHEDULE_ED_ACK_HEADER) || (headerACK == SCHEDULE_MAXMIN_ACK_HEADER))
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
bool OAgent_ED::_waitForSchedulePacketED(int timeout, unsigned long startTime, uint8_t iterations)  {
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
    Serial << "Broadcasting Schedule ED Packet"<<endl;
    delay(5);
    _broadcastSchedulePacketED(startTime,iterations);
    while(uint16_t(millis()-start) < timeout)
    {
        while(uint16_t(millis()-restart) < timeout*0.01)
        {
            if(_waitForNeighborPacket(neighborID,SCHEDULE_ED_ACK_HEADER,true,50))
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
    
                    _broadcastACKPacket(SCHEDULE_ED_ACKACK_HEADER,neighborID);
                    if(counter==_G->getN())
                    {
                        l->updateLinkedList(s->getStatusP());                                     //update linked list
                        return true;
                    }
                }
            }
        }
        // Serial << "Broadcasting Schedule ED Packet"<<endl;
        // delay(5);
        _broadcastSchedulePacketED(startTime,iterations);
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

uint32_t OAgent_ED::_getAvailableAgentLsb(uint8_t i) {
    return _availableAgentLsb[i-1];
}

uint8_t OAgent_ED::_getUint8_tFromPacket(uint8_t &byteNumber) {
    byteNumber++;
    return _rx->getData(byteNumber-1);
}

uint32_t OAgent_ED::_getUint32_tFromPacket(uint8_t &lsbByteNumber) {
    lsbByteNumber += 4;
    return (uint32_t(_rx->getData(lsbByteNumber-1)) << 24) + (uint32_t(_rx->getData(lsbByteNumber-2)) << 16) + (uint16_t(_rx->getData(lsbByteNumber-3)) << 8) + _rx->getData(lsbByteNumber-4);
}

//  long OAgent_ED::_getLongFromPacket(uint8_t &lsbByteNumber) {
//	return long(_getUint32_tFromPacket(lsbByteNumber));
//}
/// End general coordination helper functions

/// Synchronization helper functions
bool OAgent_ED::_leaderSync() {
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

bool OAgent_ED::_targetSync(unsigned long tTwo) {
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


bool OAgent_ED::_nonTargetSync(unsigned long tTwo) {
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

unsigned long OAgent_ED::_broadcastSyncBeginPacket(uint8_t i) {
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

void OAgent_ED::_broadcastSyncFinalPacket(unsigned long tTwo, long d) {
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

bool OAgent_ED::_unicastSyncResponsePacket(unsigned long tTwo) {
	uint16_t payload[3];
	// put sync response header in bytes 0 and 1
	payload[0] = SYNC_RESPONSE_HEADER;
	// put receive time into bytes
    _addUint32_tToPayload(uint32_t(tTwo),((uint8_t * )(&payload)),2);
	_zbTx = ZBTxRequest(_rx->getRemoteAddress64(), ((uint8_t * )(&payload)), sizeof(payload)); // create zigbee transmit class
	_xbee->sendTwo(_zbTx,true); // transmit
	return _packetACKed(ACK_TIMEOUT);
}

bool OAgent_ED::_isTargetNode() {
    uint8_t ptr = 2;
    
	return _G->isLocalVertex(_getUint32_tFromPacket(ptr));
}

uint8_t OAgent_ED:: getStatusData(uint8_t neighborID)
{
	 OLocalVertex * s = _G->getLocalVertex();
	 return s->getStatus(neighborID - 1); 
}

uint8_t OAgent_ED::_addUint32_tToPayload(uint32_t data, uint8_t payload[], uint8_t ptr) {
    //Serial << "byte to payload: " << _DEC(data) << endl;
    payload[ptr]    = data;
    payload[ptr+1]  = data >> 8;
    payload[ptr+2]  = data >> 16;
    payload[ptr+3]  = data >> 24;
    return ptr + 4;
}

/// End synchronization helper functions
/// General helper functions

void OAgent_ED::_prepareOAgent_ED(XBee * xbee, ZBRxResponse * rx, OGraph_ED * G, bool leader, bool quiet) {
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