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
void OAgent_ED::ed_reg_dispatch(float step_size,uint16_t iterations) {
    OLocalVertex * s = _G->getLocalVertex();                                                    // store pointer to local vertex
    LinkedList * l = _G->getLinkedList();

    // uint16_t nodeID = s->getID();
    double out_deg = (double)s->getOutDegree();
    double Pmin = (double)s->getMin(),Pmax = (double)s->getMax(),alpha = (double)s->getAlpha(),beta = (double)s->getBeta();
    uint8_t neighborID;

    uint8_t neighbors[_G->getN()-1];
    uint8_t *p = s->getStatusP();
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
    // Serial<<"Node has "<<_G->getN()-1<<" neighbors"<<endl;
    // delay(5);

    uint8_t deg = _G->getN()-1;
    int nei2index[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++)nei2index[i]=0;
    for (int i=0;i<deg;i++){
        nei2index[neighbors[i]-1] = i;
    } 

    double num_nodes = 5.0; 
    double Pref = 2.27/5.0, Pd = double((s->getActiveDemand(0))/10000.0), new_P, x = 0.0;
    float reg_ratio = 0.0;
    double P = Pref;
    double lambda = 0.0, new_lambda, y, new_y, nu = 1.0, new_nu;
    if (isLeader()) y = num_nodes*P;
    else y = num_nodes*(P-Pd);

    double sum_lambda[deg+1]; for (int i=0;i<deg;i++)sum_lambda[i]=0.0;
    double sum_nu[deg+1]; for (int i=0;i<deg;i++)sum_nu[i]=0.0;
    double sum_y[deg+1]; for (int i=0;i<deg;i++)sum_y[i]=0.0;

    sum_lambda[deg] = lambda/out_deg;
    sum_nu[deg] = nu/out_deg;
    sum_y[deg] = y/out_deg;

    float reg_num_var = (float)Pd-(Pmin-Pref), reg_den_var = (float)Pmax-Pmin, reg_num_var_new, reg_den_var_new;
    float reg_sum_num[deg+1]; for (int i=0;i<deg;i++)reg_sum_num[i]=0.0;
    float reg_sum_den[deg+1]; for (int i=0;i<deg;i++)reg_sum_den[i]=0.0;
    double load_change = 0.0;

    if (!isLeader()) reg_num_var = -(float)(Pmin-Pref);
    reg_sum_num[deg] = reg_num_var/out_deg; reg_sum_den[deg] = reg_den_var/out_deg;
    bool received_from[deg]; for (int i=0;i<deg;i++) received_from[i]=false;

    // Serial<<"out_deg="<<out_deg<<" alpha="<<alpha<<" beta="<<beta<<" Pmin="<<Pmin<<" Pmax="<<Pmax<<" Pd="<<Pd<<endl; delay(5);
    unsigned long start, time_read_regD = millis();
    uint16_t leader_time = 0, nonleader_time = 0;
    // unsigned long k = 0; 
    bool run = true;
    uint16_t count[deg]; for (int i=0;i<deg;i++)count[i]=0;
    // printCounters(counters,deg);
    // for (int i=0;i<NUM_REMOTE_VERTICES;i++){
    //     Serial.print(nei2index[i]);Serial<<" ";
    // }
    // Serial<<endl;
    // delay(5);
    uint8_t update_ed = 75;
    uint16_t stop = 150;
    while (1)
    {
        
        // Read next regulation signal
        if ((millis()-time_read_regD>4000) && isLeader() && run){

            time_read_regD = millis();
            // float data[6] = {float(leader_time),float(Pd),(float)P,(float)x,(float)Pmin-Pref+reg_ratio*(Pmax-Pmin),reg_ratio};
            // _print1Darray_(data,6,5);
            // for (int i=0;i<deg;i++){
            //     Serial.print(count[i]);Serial<<" ";
            // }
            // Serial<<endl;
            // delay(5);
            print_ed_reg_status(leader_time, float(P), float(x), reg_ratio, count, deg);
            // printCounters(count,deg);
            for (int i=0;i<deg;i++)count[i]=0;
            if ((leader_time>0) && (leader_time%update_ed==0)) Pref = P;
                    
            leader_time++;
            if (leader_time>stop) run = false;
            else Pd = double((s->getActiveDemand(leader_time))/10000.0); // this is actually a RegD signal
            reg_num_var = (float)Pd-(Pmin-Pref); reg_den_var = (float)Pmax-Pmin;
            // Serial<<reg_num_var<<endl;
            reg_sum_num[deg] = reg_num_var/out_deg; reg_sum_den[deg] = reg_den_var/out_deg;
            for (int i=0;i<deg;i++) {reg_sum_num[i]=0.0;reg_sum_den[i]=0.0;}
        }

        // if ((k>0) && (k%20==0)){

        //     Serial<<k<<endl;
        //     for (uint8_t i:neighbors) Serial<<counters[i-1]<<endl;
        //     Serial.print(lambda,10);Serial<<endl;
        //     Serial.print(nu,10); Serial<<endl; delay(5);
        // }
        // k++;

        double running_sums_ed[3] = {sum_lambda[deg],sum_nu[deg],sum_y[deg]};
        float running_sums_reg[2] = {reg_sum_num[deg],reg_sum_den[deg]};
        new_lambda = 0.0; new_nu = 0.0; new_y = 0.0; reg_den_var_new = 0.0; reg_num_var_new = 0.0;
        start = millis();   // initialize timer
        bool received_msg = false, received_msg2 = false;
        while (millis()-start<=200){
            if (millis()%2){
                if (isLeader()) send_ed_reg_packet(running_sums_ed,running_sums_reg,leader_time);
                else send_ed_reg_packet(running_sums_ed,running_sums_reg,nonleader_time);
            }
            if(_waitForNeighborPacket(neighborID,ED_HEADER,true,50))   
            {
                int nei_idx = nei2index[neighborID-1];
                if (!received_from[nei_idx]){
                    received_from[nei_idx]=true; received_msg = true; //Serial<<neighborID<<endl;
                    
                    double* tmp = get_ed_packet(); float* tmp_reg = get_reg_packet();
                    new_lambda += tmp[0] - sum_lambda[nei_idx];
                    new_nu += tmp[1]- sum_nu[nei_idx];
                    new_y += tmp[2] - sum_y[nei_idx];
                    sum_lambda[nei_idx] = tmp[0];sum_nu[nei_idx] = tmp[1];sum_y[nei_idx] = tmp[2];
                    if (!isLeader() && (nonleader_time<tmp_reg[2])) 
                    {

                        // float data[7] = {float(nonleader_time),(float)load_change,float(Pd),(float)P,(float)x,(float)Pmin-Pref+reg_ratio*(Pmax-Pmin),reg_ratio};
                        // _print1Darray_(data,7,5);
                        // for (int i=0;i<deg;i++){
                        //     Serial.print(count[i]);Serial<<" ";
                        // }
                        // Serial<<count[0]<<endl;
                        // Serial<<float(nonleader_time)<<" "<<float(Pd)<<endl;
                        // delay(5);
                        print_ed_reg_status(nonleader_time, float(P), float(x), reg_ratio, count, deg);
                        // printCounters(count,deg);
                        for (int i=0;i<deg;i++)count[i]=0;
                        // Serial<<k;
                        // for (uint8_t i:neighbors) Serial<<" "<<counter[i-1];
                        // Serial<<endl;
                        if ((nonleader_time>0) && (nonleader_time%update_ed==0)) Pref = P;

                        nonleader_time = uint16_t(tmp_reg[2]); 
                        if (nonleader_time>stop) run = false;
                        else{
                            double tmp2 = double((s->getActiveDemand(nonleader_time))/10000.0); // read active power demand measurement
                            new_y -= num_nodes*(tmp2 - Pd);
                            if (nonleader_time%update_ed==0) load_change = 0.0;
                            else load_change += tmp2-Pd;
                            reg_num_var = (float)load_change-(Pmin-Pref); reg_den_var = Pmax-Pmin;
                            reg_num_var_new = 0.0; reg_den_var_new = 0.0;
                            reg_sum_num[deg] = reg_num_var/out_deg; reg_sum_den[deg] = reg_den_var/out_deg;
                            for (int i=0;i<deg;i++) {reg_sum_num[i]=0.0;reg_sum_den[i]=0.0;}
                            Pd = tmp2;
                        }
                    }
                    if ((isLeader() && (leader_time==uint16_t(tmp_reg[2]))) || (!isLeader() && (nonleader_time == uint16_t(tmp_reg[2])))){

                        reg_num_var_new += tmp_reg[0] - reg_sum_num[nei_idx];
                        reg_den_var_new += tmp_reg[1] - reg_sum_den[nei_idx];
                        reg_sum_num[nei_idx] = tmp_reg[0]; reg_sum_den[nei_idx] = tmp_reg[1];
                        received_msg2 = true;
                        // Serial<<neighborID<<" "<<j<<" "<<counters[j]<<endl;
                        count[nei_idx] += 1;
                    }
                }
            }
        }
        // received_msg = false;
        if (received_msg && run)
        {
            lambda = new_lambda-double(step_size)*new_y + lambda/out_deg-double(step_size)*y/out_deg;
            nu = new_nu + nu/out_deg;

            new_P = clip_double(P-double(step_size)*(P-alpha)/beta+double(step_size)*x,Pmin,Pmax);
            x = lambda/nu;
            y = new_y + y/out_deg + num_nodes*(new_P - P);
            P = new_P;

            sum_lambda[deg] += lambda/out_deg;
            sum_nu[deg] += nu/out_deg;
            sum_y[deg] += y/out_deg;
        }
        for (int i=0;i<deg;i++) {received_from[i]=false;}
        // received_msg2 = false;
        if (received_msg2 && run)
        {

            reg_num_var = reg_num_var_new + reg_num_var/out_deg;
            reg_den_var = reg_den_var_new + reg_den_var/out_deg;

            if ((reg_den_var<1e-6) && (reg_den_var>0)) reg_ratio = reg_num_var/1e-6;
            else if ((reg_den_var>-1e-6) && (reg_den_var<0)) reg_ratio = -reg_num_var/1e-6;
            else reg_ratio = reg_num_var/reg_den_var;
            reg_sum_num[deg] += reg_num_var/out_deg; reg_sum_den[deg] += reg_den_var/out_deg;
        }

    }

}



void OAgent_ED::ed_reg_dispatch2(float step_size,uint16_t iterations) {

    OLocalVertex * s = _G->getLocalVertex();                                                    // store pointer to local vertex
    LinkedList * l = _G->getLinkedList();

    uint16_t nodeID = s->getID();
    uint8_t neighborID;

    uint8_t neighbors[_G->getN()-1];
    uint8_t *p = s->getStatusP();
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
    // Serial<<"Node has "<<_G->getN()-1<<" neighbors"<<endl;
    // delay(5);
    uint8_t num_nodes = 5;
    float out_deg = float(s->getOutDegree());    // store out degree, the +1 is to account for the self loops
    uint8_t deg = _G->getN()-1;
    int nei2index[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++)nei2index[i]=0;
    for (int i=0;i<deg;i++){
        nei2index[neighbors[i]-1] = i;
    } 

    float Pmin = s->getMin(),Pmax = s->getMax(),alpha = s->getAlpha(),beta = s->getBeta();
    float Pref = 2.27/5.0, Pd = (s->getActiveDemand(0))/10000.0, new_P, lambda = 0.0;
    float P = Pref;

    float lambdalo[num_nodes], lambdahi[num_nodes], Ylo[num_nodes], Yhi[num_nodes], Zlo[num_nodes], Zhi[num_nodes], ratioslo[num_nodes], ratioshi[num_nodes];
    float SumYlo[1+deg][num_nodes], SumYhi[1+deg][num_nodes], SumZlo[1+deg][num_nodes], SumZhi[1+deg][num_nodes];

    for(int i = 0; i < num_nodes; i++){ratioslo[i] = 0;ratioshi[i] = 0;}    
    init_ed(0,num_nodes,lambdalo,lambdahi,Ylo,Yhi,Zlo,Zhi);
    for (int i=0;i<1+deg;i++){
        for (int j=0;j<num_nodes;j++){
        	SumYlo[i][j]=0;SumYhi[i][j]=0;SumZlo[i][j]=0;SumZhi[i][j]=0;
        }
    }
	for(int i = 0; i < num_nodes; i++){
        SumYlo[deg][i]= Ylo[i]/out_deg; SumYhi[deg][i]= Yhi[i]/out_deg;
        SumZlo[deg][i]= Zlo[i]/out_deg; SumZhi[deg][i]= Zhi[i]/out_deg;
    }

    float reg_ratio = 0.0;
    float reg_num_var = Pd-(Pmin-Pref), reg_den_var = Pmax-Pmin, reg_num_var_new, reg_den_var_new;
    float reg_sum_num[deg+1]; for (int i=0;i<deg;i++)reg_sum_num[i]=0.0;
    float reg_sum_den[deg+1]; for (int i=0;i<deg;i++)reg_sum_den[i]=0.0;
    float load_change = 0.0;

    if (!isLeader()) reg_num_var = -(Pmin-Pref);
    reg_sum_num[deg] = reg_num_var/out_deg; reg_sum_den[deg] = reg_den_var/out_deg;


    uint8_t receivedlo = 1<<(nodeID-1), receivedhi = 1<<(nodeID-1);
    uint8_t shiftlo = 0, shifthi = 0;
    bool received_from[deg]; for (int i=0;i<deg;i++) received_from[i]=false;

    unsigned long start, time_read_regD = millis();
    uint16_t time_instant = 0;

    bool run = true;
    uint16_t count[deg]; for (int i=0;i<deg;i++)count[i]=0;
    uint8_t period_ed = 75;
    uint16_t stop = 150, next_round_ed = 75;
    unsigned long k = 30;
    while (1)
    {
        
        // if (millis()/1000>k) {Serial.print(count[0]);Serial.print(" ");Serial.println(k);k+=30;}
        // Read next regulation signal
        if ((millis()-time_read_regD>4000) && isLeader() && run){

            time_read_regD = millis();
            interpolate(P,lambda,lambdalo,lambdahi,ratioslo,ratioshi,num_nodes);
            print_ed_reg_status(time_instant, P, lambda, reg_ratio, count, deg);
            for (int i=0;i<deg;i++)count[i]=0;

            // _print_1d_array(ratioslo,num_nodes,4);
            // _print_1d_array(ratioshi,num_nodes,4);

            time_instant++;//Serial.println(time_instant);
            if (time_instant>stop) run = false;
            else
                {
                    Pd = (s->getActiveDemand(time_instant))/10000.0;

                    if ((time_instant>0) && (time_instant>=next_round_ed)) {
                        Pref = P;
                        init_ed(next_round_ed,num_nodes,lambdalo,lambdahi,Ylo,Yhi,Zlo,Zhi);
                        receivedlo = 1<<(nodeID-1); receivedhi = 1<<(nodeID-1);shiftlo = 0; shifthi = 0;
                        for (int i=0;i<1+deg;i++){
                            for (int j=0;j<num_nodes;j++){
                                SumYlo[i][j]=0;SumYhi[i][j]=0;SumZlo[i][j]=0;SumZhi[i][j]=0;
                            }
                        }
                        for(int i = 0; i < num_nodes; i++){
                            SumYlo[deg][i]= Ylo[i]/out_deg; SumYhi[deg][i]= Yhi[i]/out_deg;
                            SumZlo[deg][i]= Zlo[i]/out_deg; SumZhi[deg][i]= Zhi[i]/out_deg;
                        }
                        next_round_ed += period_ed;
                    }
                }
                    
            reg_num_var = Pd-(Pmin-Pref); reg_den_var = Pmax-Pmin;
            reg_sum_num[deg] = reg_num_var/out_deg; reg_sum_den[deg] = reg_den_var/out_deg;
            for (int i=0;i<deg;i++) {reg_sum_num[i]=0.0;reg_sum_den[i]=0.0;}
        }

        float running_sums_reg[2] = {reg_sum_num[deg],reg_sum_den[deg]};
        reg_den_var_new = 0.0; reg_num_var_new = 0.0;

        float newYlo[num_nodes], newYhi[num_nodes], newZlo[num_nodes], newZhi[num_nodes];
        for(int i = 0; i < num_nodes; i++){
            newYlo[i] = 0;newYhi[i] = 0;newZlo[i] = 0;newZhi[i] = 0;
        }
         
        bool is_comm_neigh_lo = false, is_comm_neigh_hi = false, comm_neighbor_lo[deg], comm_neighbor_hi[deg];
        for(int i = 0; i < deg; i++){ comm_neighbor_lo[i]=false;comm_neighbor_hi[i]=false;}

        bool send_lo = true; bool received_msg = false;
        start = millis();
        while (millis()-start<=200){

            uint8_t broadcastlo = 0; uint8_t packet_size = 0; uint8_t max_size = 1;
            partition_packet(broadcastlo,receivedlo,max_size,packet_size,shiftlo);
            unsigned long tmp = millis();
            if (tmp%4==1) {send_ed_reg_packet2(time_instant,packet_size,0,broadcastlo,lambdalo,SumYlo[deg],SumZlo[deg],running_sums_reg);send_lo = false;}

            uint8_t broadcasthi = 0; packet_size = 0;
            partition_packet(broadcasthi,receivedhi,max_size,packet_size,shifthi);                   
            if (tmp%4==2) {send_ed_reg_packet2(time_instant,packet_size,1,broadcasthi,lambdahi,SumYhi[deg],SumZhi[deg],running_sums_reg);send_lo = true;}

            if ( _waitForNeighborPacket(neighborID,ED_HEADER,true,20) )
            {
                int nei_idx = nei2index[neighborID-1]; uint8_t avail = _rx->getData(3);
                bool is_upper = _rx->getData(2) & 1; 
                uint8_t n_var = 0;
                for(int i = 0; i < 8; i++){
                    n_var += uint8_t((avail>>i) & 1);
                }
                uint16_t received_time = (uint16_t(_rx->getData(13+12*n_var)) << 8) + uint16_t(_rx->getData(12+12*n_var));
                // if (millis()/1000>k) {Serial.print(received_time);Serial.print(" ");Serial.println(k);k+=10;delay(10);}
                if (!received_from[nei_idx]){
                    received_from[nei_idx]=true; float* tmp_reg = read_packet(4+12*n_var,2);
                    if (!isLeader() && (time_instant<received_time)&& (received_time-time_instant<1000)) 
                    {
                        // Serial.println(received_time);
                        interpolate(P,lambda,lambdalo,lambdahi,ratioslo,ratioshi,num_nodes);
                        print_ed_reg_status(time_instant, P, lambda, reg_ratio, count, deg);
                        for (int i=0;i<deg;i++)count[i]=0;
                        // _print_1d_array(ratioslo,num_nodes,4);
                        // _print_1d_array(ratioshi,num_nodes,4);
                        // if (neighborID!=1) Serial<<neighborID<<endl;
                        time_instant = received_time; 
                        if (time_instant>stop) run = false;
                        else{
                            float new_load = (s->getActiveDemand(time_instant))/10000.0; // read active power demand measurement
                            if ((time_instant>0) && (time_instant>=next_round_ed)) 
                            {
                                Pref = P;
                                init_ed(next_round_ed,num_nodes,lambdalo,lambdahi,Ylo,Yhi,Zlo,Zhi);
                                receivedlo = 1<<(nodeID-1); receivedhi = 1<<(nodeID-1);shiftlo = 0; shifthi = 0;
                                for (int i=0;i<1+deg;i++){
                                    for (int j=0;j<num_nodes;j++){
                                        SumYlo[i][j]=0;SumYhi[i][j]=0;SumZlo[i][j]=0;SumZhi[i][j]=0;
                                    }
                                }
                                for(int i = 0; i < num_nodes; i++){
                                    SumYlo[deg][i]= Ylo[i]/out_deg; SumYhi[deg][i]= Yhi[i]/out_deg;
                                    SumZlo[deg][i]= Zlo[i]/out_deg; SumZhi[deg][i]= Zhi[i]/out_deg;
                                }
                                load_change = new_load - (s->getActiveDemand(next_round_ed - period_ed))/10000.0;
                                next_round_ed += period_ed;
                            }
                            else load_change += new_load - Pd;
                            reg_num_var = load_change-(Pmin-Pref); reg_den_var = Pmax-Pmin;
                            reg_num_var_new = 0.0; reg_den_var_new = 0.0;
                            reg_sum_num[deg] = reg_num_var/out_deg; reg_sum_den[deg] = reg_den_var/out_deg;
                            for (int i=0;i<deg;i++) {reg_sum_num[i]=0.0;reg_sum_den[i]=0.0;}
                            Pd = new_load;
                        }
                    }
                    if (time_instant == received_time){

                        reg_num_var_new += tmp_reg[0] - reg_sum_num[nei_idx];
                        reg_den_var_new += tmp_reg[1] - reg_sum_den[nei_idx];
                        reg_sum_num[nei_idx] = tmp_reg[0]; reg_sum_den[nei_idx] = tmp_reg[1];
                        received_msg = true;
                        count[nei_idx] += 1;
                    }
                }

                if (is_upper){

                    if (!comm_neighbor_hi[nei_idx])
                    {
                        is_comm_neigh_hi = true; comm_neighbor_hi[nei_idx] = true;
                        float *inLambdahi = read_packet(4,n_var);               
                        for(int i = 0,j=0; i < num_nodes; i++)
                        {
                            if ((avail>>i) & 1){

                                if (!((receivedhi>>i) & 1)){
                                    lambdahi[i] = inLambdahi[j];
                                    Yhi[i] = dual_function(alpha,beta,Pmax,Pmin,lambdahi[i]);
                                    receivedhi |= 1<<i;
                                    SumYhi[deg][i]= Yhi[i]/out_deg;
                                    // Serial<<"New lambda from node "<<i+1<<endl;
                                    // delay(5);
                                }
                                j++;
                            }
                            
                        }
                        float *inSumYhi = read_packet(4+4*n_var,n_var);
                        for(int i = 0,j=0; i < num_nodes; i++){
                            if ((avail>>i) & 1){
                                newYhi[i] += inSumYhi[j] - SumYhi[nei_idx][i];
                                SumYhi[nei_idx][i] = inSumYhi[j];
                                j++;
                            }
                        }
                        float *inSumZhi = read_packet(4+8*n_var,n_var);
                        for(int i = 0,j=0; i < num_nodes; i++){
                            if ((avail>>i) & 1){
                                newZhi[i] += inSumZhi[j] - SumZhi[nei_idx][i];
                                SumZhi[nei_idx][i] = inSumZhi[j];
                                j++;
                            }
                        }
                    }
                }
                else
                {
                    if (!comm_neighbor_lo[nei_idx])
                    {
                        is_comm_neigh_lo = true; comm_neighbor_lo[nei_idx] = true;
                        float *inLambdalo = read_packet(4,n_var);             
                        for(int i = 0,j=0; i < num_nodes; i++)
                        {
                            if ((avail>>i) & 1){

                                if (!((receivedlo>>i) & 1)){
                                    lambdalo[i] = inLambdalo[j];
                                    Ylo[i] = dual_function(alpha,beta,Pmax,Pmin,lambdalo[i]);
                                    receivedlo |= 1<<i;
                                    SumYlo[deg][i]= Ylo[i]/out_deg;
                                    // Serial<<"New lambda from node "<<i+1<<endl;
                                    // delay(5);
                                }
                                j++;
                            }
                            
                        }
                        float *inSumYlo = read_packet(4+4*n_var,n_var);
                        for(int i = 0,j=0; i < num_nodes; i++){
                            if ((avail>>i) & 1){
                                newYlo[i] += inSumYlo[j] - SumYlo[nei_idx][i];
                                SumYlo[nei_idx][i] = inSumYlo[j];
                                j++;
                            }
                        }
                        float *inSumZlo = read_packet(4+8*n_var,n_var);
                        for(int i = 0,j=0; i < num_nodes; i++){
                            if ((avail>>i) & 1){
                                newZlo[i] += inSumZlo[j] - SumZlo[nei_idx][i];
                                SumZlo[nei_idx][i] = inSumZlo[j];
                                j++;
                            }
                        }
                    }
                
                }
            }
        }
        for (int i=0;i<deg;i++) {received_from[i]=false;}

        if (received_msg && run)
        {

            reg_num_var = reg_num_var_new + reg_num_var/out_deg;
            reg_den_var = reg_den_var_new + reg_den_var/out_deg;

            if ((reg_den_var<1e-6) && (reg_den_var>0)) reg_ratio = reg_num_var/1e-6;
            else if ((reg_den_var>-1e-6) && (reg_den_var<0)) reg_ratio = -reg_num_var/1e-6;
            else reg_ratio = reg_num_var/reg_den_var;
            reg_sum_num[deg] += reg_num_var/out_deg; reg_sum_den[deg] += reg_den_var/out_deg;
        }


    	for(int i = 0; i < num_nodes; i++){ 
    		if (((receivedlo>>i) & 1) && is_comm_neigh_lo){
            	Ylo[i] = newYlo[i] + Ylo[i]/out_deg;SumYlo[deg][i]+= Ylo[i]/out_deg; 
            	Zlo[i] = newZlo[i] + Zlo[i]/out_deg;SumZlo[deg][i]+= Zlo[i]/out_deg;
	            ratioslo[i] = Ylo[i]/Zlo[i];
        	}
    		if (((receivedhi>>i) & 1) && is_comm_neigh_hi){
                Yhi[i] = newYhi[i] + Yhi[i]/out_deg;SumYhi[deg][i]+= Yhi[i]/out_deg;
                Zhi[i] = newZhi[i] + Zhi[i]/out_deg;SumZhi[deg][i]+= Zhi[i]/out_deg;
	            ratioshi[i] = Yhi[i]/Zhi[i];
	        }
        }

    }

}

void OAgent_ED::init_ed(uint16_t time_instant, uint8_t num_nodes, float *lambdalo,float *lambdahi,float *Ylo,float *Yhi,float *Zlo,float *Zhi){

    OLocalVertex * s = _G->getLocalVertex();                                                    // store pointer to local vertex
    uint16_t nodeID = s->getID();

    float Pmin = s->getMin(),Pmax = s->getMax(),alpha = s->getAlpha(),beta = s->getBeta();
    float Pd = (s->getActiveDemand(time_instant))/10000.0;
    Serial<<"New load "<<s->getActiveDemand(time_instant)<<endl;
    for(int i = 0; i < num_nodes; i++){ 
        Ylo[i] = 0;Yhi[i] = 0;
        if (!isLeader()) {Zlo[i] = Pd;Zhi[i] = Pd;}
        else {Zlo[i] = 0;Zhi[i] = 0;}
        lambdalo[i] = 0;lambdahi[i] = 0;
    }    
    lambdalo[nodeID-1] = (Pmin-alpha)/beta; lambdahi[nodeID-1] = (Pmax-alpha)/beta;
    Ylo[nodeID-1] = dual_function(alpha,beta,Pmax,Pmin,lambdalo[nodeID-1]);
    Yhi[nodeID-1] = dual_function(alpha,beta,Pmax,Pmin,lambdahi[nodeID-1]);

}

float OAgent_ED:: clip(float x, float xmin, float xmax){
        if (x<xmin) return xmin;
        if (x>xmax) return xmax;
        return x;
    }

double OAgent_ED::clip_double(double x, double xmin, double xmax){
        if (x<xmin) return xmin;
        if (x>xmax) return xmax;
        return x;
    }

float OAgent_ED::dual_function(float alpha, float beta, float Pmax, float Pmin, float lambda){

    float lambdalo = (Pmin-alpha)/beta; float lambdahi = (Pmax-alpha)/beta;
    if (lambda<lambdalo) return Pmin;
    if (lambda>lambdahi) return Pmax;
    return alpha + lambda*beta;


}

void OAgent_ED::interpolate(float &P,float &lambda,float *lambdalo,float *lambdahi,float *ratioslo,float *ratioshi, uint8_t num_nodes){

    OLocalVertex * s = _G->getLocalVertex();                                                    // store pointer to local vertex
    float Pmin = s->getMin(),Pmax = s->getMax(),alpha = s->getAlpha(),beta = s->getBeta();

    float valueMinPlus[2] = {-100,100};
    float ratioMinPlus[2] = {-100,100};
    for(int i = 0; i < num_nodes; i++){
        if (ratioslo[i]<=1 and 1-ratioMinPlus[0]>1-ratioslo[i]) {
            ratioMinPlus[0] = ratioslo[i];valueMinPlus[0] = lambdalo[i];
        }
        if (ratioslo[i]>=1 and ratioMinPlus[1]-1>ratioslo[i]-1) {
            ratioMinPlus[1] = ratioslo[i];valueMinPlus[1] = lambdalo[i];
        }
        if (ratioshi[i]<=1 and 1-ratioMinPlus[0]>1-ratioshi[i]) {
            ratioMinPlus[0] = ratioshi[i];valueMinPlus[0] = lambdahi[i];
        }
        if (ratioshi[i]>=1 and ratioMinPlus[1]-1>ratioshi[i]-1) {
            ratioMinPlus[1] = ratioshi[i];valueMinPlus[1] = lambdahi[i];
        }
    }
    lambda = valueMinPlus[1] - ( (ratioMinPlus[1] - 1)*((valueMinPlus[1] - valueMinPlus[0])/(ratioMinPlus[1]-ratioMinPlus[0])) );
    P = Pmin;           
    if ( lambda < ((Pmin - alpha)/beta) )
        P = Pmin;
    else if  ( lambda > ((Pmax - alpha)/beta) )
        P = Pmax;
    else
        P = alpha + (lambda*beta);

}

void OAgent_ED::partition_packet(uint8_t &broadcastlo,uint8_t &receivedlo,uint8_t max_size,uint8_t &packet_size,uint8_t &shiftlo) {
        int cnt = 0;
        while ((packet_size<max_size) and (cnt<8)){
            if ((receivedlo>>shiftlo) & 1){broadcastlo |= 1<<shiftlo; packet_size++;}
            shiftlo++; if (shiftlo>7) shiftlo = 0;
            cnt++;
        }
    }


void OAgent_ED::send_ed_reg_packet(double* vars_ed,float* vars_reg,uint16_t time) {

    union{
        unsigned long a;
        float b;
    } float2bin;

    union{
        unsigned long long a;
        double b;
    } double2bin;

    // uint8_t payload[38];
    uint8_t payload[36];

    payload[0] = ED_HEADER;
    payload[1] = ED_HEADER >> 8;
    payload[2] = time;
    payload[3] = time >> 8;

    // lmbda,nu,y;
    // Serial<<"To send"<<endl;
    for (int i=4,j=0;i<28,j<3;i=i+8,j++){
        double2bin.b = vars_ed[j];
        payload[i] = double2bin.a;
        payload[i+1] = double2bin.a>>8;
        payload[i+2] = double2bin.a >> 16;
        payload[i+3] = double2bin.a >> 24;
        payload[i+4] = double2bin.a >> 32;
        payload[i+5] = double2bin.a >> 40;
        payload[i+6] = double2bin.a >> 48;
        payload[i+7] = double2bin.a >> 56;
    }
    for (int i=28,j=0;i<36,j<2;i=i+4,j++){
        float2bin.b = vars_reg[j];
        payload[i] = float2bin.a;
        payload[i+1] = float2bin.a>>8;
        payload[i+2] = float2bin.a >> 16;
        payload[i+3] = float2bin.a >> 24;
        // Serial.print(float2bin.a,HEX); Serial<<endl;
        // unsigned int* ptr = (unsigned int*) &vars[j];
        // payload[i] = *ptr;
        // payload[i+1] = *ptr>>8;
        // payload[i+2] = *ptr >> 16;
        // payload[i+3] = *ptr >> 24;
        // Serial.print(*ptr,15); Serial<<endl;
    }


    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload)); // create zigbee transmit class
    unsigned long txTime = _xbee->sendTwo(_zbTx,false,true); // transmit with time stamp
    #ifdef VERBOSE
        Serial << _MEM(PSTR("Transmit time: ")) << txTime << endl;
    #endif
}

void OAgent_ED::send_ed_reg_packet2(uint16_t time, uint8_t n_var, uint8_t upper, uint8_t broadcast,float *lambda,float *SumY,float *SumZ, float *vars_reg) {
    uint8_t payload[14+12*n_var];

    //construct payload
    payload[0] = ED_HEADER;
    payload[1] = ED_HEADER >> 8;
    payload[2] = upper;
    payload[3] = broadcast;

    union{
        unsigned long a;
        float b;
    } float2bin;
    

    for (int i=4,j=0;j<8;j++){
        if ((broadcast>>j) & 1){

            float2bin.b = lambda[j];
            payload[i] = float2bin.a;
            payload[i+1] = float2bin.a >> 8;
            payload[i+2] = float2bin.a >> 16;
            payload[i+3] = float2bin.a >> 24;

            float2bin.b = SumY[j];
            payload[i+4*n_var] = float2bin.a;
            payload[i+4*n_var+1] = float2bin.a >> 8;
            payload[i+4*n_var+2] = float2bin.a >> 16;
            payload[i+4*n_var+3] = float2bin.a >> 24;
            
            float2bin.b = SumZ[j];
            payload[i+8*n_var] = float2bin.a;
            payload[i+8*n_var+1] = float2bin.a >> 8;
            payload[i+8*n_var+2] = float2bin.a >> 16;
            payload[i+8*n_var+3] = float2bin.a >> 24;
            i+=4;
        }
    }

    for (int i=4+12*n_var,j=0;i<12+12*n_var,j<2;i=i+4,j++){
        float2bin.b = vars_reg[j];
        payload[i] = float2bin.a;
        payload[i+1] = float2bin.a>>8;
        payload[i+2] = float2bin.a >> 16;
        payload[i+3] = float2bin.a >> 24;
    }

    payload[12+12*n_var] = time;
    payload[13+12*n_var] = time >> 8;

    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload)); // create zigbee transmit class
    unsigned long txTime = _xbee->sendTwo(_zbTx,false,true); // transmit with time stamp
    #ifdef VERBOSE
        Serial << _MEM(PSTR("Transmit time: ")) << txTime << endl;
    #endif
}

float* OAgent_ED::read_packet(uint8_t pos,uint8_t n_var) {

    // uint8_t num_nodes = 5;
    static float a[5];
    unsigned long binary_value; //if ((pos==28) && (_rx->getData(2)>0)) Serial<<"Received hi sums"<<endl;
    for (int i=pos,j=0;j<n_var;i=i+4,j++){
        binary_value = ((unsigned long)(_rx->getData(i+3)) << 24) | ((unsigned long)(_rx->getData(i+2)) << 16) | ((unsigned long)(_rx->getData(i+1)) << 8) | (unsigned long)(_rx->getData(i));
        a[j] = reinterpret_cast<float&>(binary_value);
        // if ((pos==28) && (_rx->getData(2)>0)){Serial.print(a[j],4);Serial<<" ";}
    }
    // if ((pos==28) && (_rx->getData(2)>0)) Serial<<endl;

    return a;
}

double* OAgent_ED::get_ed_packet() {

    static double a[3];
    uint64_t binary_value;
    // Serial<<"To receive"<<endl;
    for (int i=4,j=0;i<28,j<3;i=i+8,j++){
        binary_value = (uint64_t(_rx->getData(i+7)) << 56) | (uint64_t(_rx->getData(i+6)) << 48) | (uint64_t(_rx->getData(i+5)) << 40) | (uint64_t(_rx->getData(i+4)) << 32) | (uint64_t(_rx->getData(i+3)) << 24) | (uint64_t(_rx->getData(i+2)) << 16) | (uint64_t(_rx->getData(i+1)) << 8) | uint64_t(_rx->getData(i));
        a[j] = reinterpret_cast<double&>(binary_value);
        // Serial.print(binary_value,HEX); Serial<<endl;
        // Serial.print(a[j],15); Serial<<endl;
    }

    return a;
}

float* OAgent_ED::get_reg_packet() {

    static float a[3];
    uint32_t binary_value;
    // Serial<<"To receive"<<endl;
    for (int i=28,j=0;i<36,j<2;i=i+4,j++){
        binary_value = (uint32_t(_rx->getData(i+3)) << 24) | (uint32_t(_rx->getData(i+2)) << 16) | (uint32_t(_rx->getData(i+1)) << 8) | uint32_t(_rx->getData(i));
        a[j] = reinterpret_cast<float&>(binary_value);
        // Serial.print(binary_value,HEX); Serial<<endl;
        // Serial.print(a[j],15); Serial<<endl;
    }

    a[2] = float((int32_t(_rx->getData(3)) << 8) + int32_t(_rx->getData(2)));

    return a;
}


float OAgent_ED::EconomicDispatch2(float step_size,uint16_t iterations) {

    OLocalVertex * s = _G->getLocalVertex();                                                    // store pointer to local vertex
    LinkedList * l = _G->getLinkedList();

    uint16_t nodeID = s->getID();
    float Pmin = s->getMin(),Pmax = s->getMax(),alpha = s->getAlpha(),beta = s->getBeta();
    uint8_t neighborID;

    uint8_t neighbors[_G->getN()-1];
    uint8_t *p = s->getStatusP();
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
    // Serial<<"Node has "<<_G->getN()-1<<" neighbors"<<endl;
    // delay(5);

    uint8_t deg = _G->getN()-1;
    int nei2index[NUM_REMOTE_VERTICES]; for (int i=0;i<NUM_REMOTE_VERTICES;i++)nei2index[i]=0;
    for (int i=0;i<deg;i++){
        nei2index[neighbors[i]-1] = i;
    } 

    // for (int i=0;i<NUM_REMOTE_VERTICES;i++){
    //  Serial<<nei2index[i]<<" ";
    // }
    // Serial<<endl;

    float Pref = 2.27/5.0, Pd = float((s->getActiveDemand(0))/10000.0), new_P, x = 0.0;

    float out_deg = float(s->getOutDegree());    // store out degree, the +1 is to account for the self loops

    uint8_t num_nodes = 5;
    uint8_t receivedlo = 1<<(nodeID-1), receivedhi = 1<<(nodeID-1);

    float lambdalo[num_nodes], lambdahi[num_nodes], Ylo[num_nodes], Yhi[num_nodes], Zlo[num_nodes], Zhi[num_nodes], ratioslo[num_nodes], ratioshi[num_nodes];
    for(int i = 0; i < num_nodes; i++){ 
        Ylo[i] = 0;Yhi[i] = 0;
        if (!isLeader()) {Zlo[i] = Pd;Zhi[i] = Pd;}
        else {Zlo[i] = 0;Zhi[i] = 0;}
        lambdalo[i] = 0;lambdahi[i] = 0;
        ratioslo[i] = 0;ratioshi[i] = 0;
    }    
    lambdalo[nodeID-1] = (Pmin-alpha)/beta; lambdahi[nodeID-1] = (Pmax-alpha)/beta;

    String str;
    str = "High lambdas: ";_print_str_1d_array(str,lambdahi,num_nodes,4);
    str = "Low lambdas: ";_print_str_1d_array(str,lambdalo,num_nodes,4);

    Ylo[nodeID-1] = dual_function(alpha,beta,Pmax,Pmin,lambdalo[nodeID-1]);
    Yhi[nodeID-1] = dual_function(alpha,beta,Pmax,Pmin,lambdahi[nodeID-1]);

    float SumYlo[1+deg][num_nodes], SumYhi[1+deg][num_nodes], SumZlo[1+deg][num_nodes], SumZhi[1+deg][num_nodes];
    for (int i=0;i<1+deg;i++){
        for (int j=0;j<num_nodes;j++){
            SumYlo[i][j]=0;SumYhi[i][j]=0;SumZlo[i][j]=0;SumZhi[i][j]=0;
        }
    }
    for(int i = 0; i < num_nodes; i++){
        SumYlo[deg][i]= Ylo[i]/out_deg; SumYhi[deg][i]= Yhi[i]/out_deg;
        SumZlo[deg][i]= Zlo[i]/out_deg; SumZhi[deg][i]= Zhi[i]/out_deg;
    }
    
    uint8_t shiftlo = 0, shifthi = 0;
    for(int k = 0; k < 1000; k++)
    {

        // Serial<<"Iteration "<<k<<" "<<receivedlo<<" ";Serial.print(SumZlo[deg][1],4);Serial<<" "; Serial.print(Zlo[1],4);Serial<<endl;
        // for (int i=0;i<deg;i++){
        //  Serial.print(SumZlo[i][1],4);Serial<<" ";Serial.print(SumZlo_prev[i][1],4);Serial<<" ";
        // }
        // Serial<<endl;

        float newYlo[num_nodes], newYhi[num_nodes], newZlo[num_nodes], newZhi[num_nodes];
        for(int i = 0; i < num_nodes; i++){
            newYlo[i] = 0;newYhi[i] = 0;newZlo[i] = 0;newZhi[i] = 0;
        }
         
        bool is_comm_neigh_lo = false, is_comm_neigh_hi = false, comm_neighbor_lo[deg], comm_neighbor_hi[deg];
        for(int i = 0; i < deg; i++){ comm_neighbor_lo[i]=false;comm_neighbor_hi[i]=false;}

        unsigned long start = millis();   // initialize timer
        // uint8_t next_receivedhi = receivedhi, next_receivedlo = receivedlo;
        bool send_lo = true;
        while( uint16_t(millis()-start) < 200 )
        {
            uint8_t broadcastlo = 0; uint8_t packet_size = 0; uint8_t max_size = 3;
            partition_packet(broadcastlo,receivedlo,max_size,packet_size,shiftlo); 
            if (send_lo) {send_ed_packet(packet_size,0,broadcastlo,lambdalo,SumYlo[deg],SumZlo[deg]);send_lo = false;}

            uint8_t broadcasthi = 0; packet_size = 0;
            partition_packet(broadcasthi,receivedhi,max_size,packet_size,shifthi);                   
            if (!send_lo) {send_ed_packet(packet_size,1,broadcasthi,lambdahi,SumYhi[deg],SumZhi[deg]);send_lo = true;}

            if ( _waitForNeighborPacket(neighborID,ED_HEADER,true,50) )
            {
                int nei_idx = nei2index[neighborID-1]; uint8_t avail = _rx->getData(3);
                bool is_upper = _rx->getData(2) & 1;
                uint8_t n_var = 0;
                for(int i = 0; i < 8; i++){
                    n_var += uint8_t((avail>>i) & 1);
                }

                if (is_upper){

                    if (!comm_neighbor_hi[nei_idx])
                    {
                        is_comm_neigh_hi = true; comm_neighbor_hi[nei_idx] = true;
                        float *inLambdahi = read_packet(4,n_var);               
                        for(int i = 0,j=0; i < num_nodes; i++)
                        {
                            if ((avail>>i) & 1){

                                if (!((receivedhi>>i) & 1)){
                                    lambdahi[i] = inLambdahi[j];
                                    Yhi[i] = dual_function(alpha,beta,Pmax,Pmin,lambdahi[i]);
                                    receivedhi |= 1<<i;
                                    SumYhi[deg][i]= Yhi[i]/out_deg;
                                    // Serial<<"New lambda from node "<<i+1<<endl;
                                    // delay(5);
                                }
                                j++;
                            }
                            
                        }
                        float *inSumYhi = read_packet(4+4*n_var,n_var);
                        for(int i = 0,j=0; i < num_nodes; i++){
                            if ((avail>>i) & 1){
                                newYhi[i] += inSumYhi[j] - SumYhi[nei_idx][i];
                                SumYhi[nei_idx][i] = inSumYhi[j];
                                j++;
                            }
                        }
                        float *inSumZhi = read_packet(4+8*n_var,n_var);
                        for(int i = 0,j=0; i < num_nodes; i++){
                            if ((avail>>i) & 1){
                                newZhi[i] += inSumZhi[j] - SumZhi[nei_idx][i];
                                SumZhi[nei_idx][i] = inSumZhi[j];
                                j++;
                            }
                        }
                    }
                }
                else
                {
                    if (!comm_neighbor_lo[nei_idx])
                    {
                        is_comm_neigh_lo = true; comm_neighbor_lo[nei_idx] = true;
                        float *inLambdalo = read_packet(4,n_var);             
                        for(int i = 0,j=0; i < num_nodes; i++)
                        {
                            if ((avail>>i) & 1){

                                if (!((receivedlo>>i) & 1)){
                                    lambdalo[i] = inLambdalo[j];
                                    Ylo[i] = dual_function(alpha,beta,Pmax,Pmin,lambdalo[i]);
                                    receivedlo |= 1<<i;
                                    SumYlo[deg][i]= Ylo[i]/out_deg;
                                    // Serial<<"New lambda from node "<<i+1<<endl;
                                    // delay(5);
                                }
                                j++;
                            }
                            
                        }
                        float *inSumYlo = read_packet(4+4*n_var,n_var);
                        for(int i = 0,j=0; i < num_nodes; i++){
                            if ((avail>>i) & 1){
                                newYlo[i] += inSumYlo[j] - SumYlo[nei_idx][i];
                                SumYlo[nei_idx][i] = inSumYlo[j];
                                j++;
                            }
                        }
                        float *inSumZlo = read_packet(4+8*n_var,n_var);
                        for(int i = 0,j=0; i < num_nodes; i++){
                            if ((avail>>i) & 1){
                                newZlo[i] += inSumZlo[j] - SumZlo[nei_idx][i];
                                SumZlo[nei_idx][i] = inSumZlo[j];
                                j++;
                            }
                        }
                    }
                
                }
            }

         //    if (millis()%3==1) {_broadcastEDPacketLo(receivedlo,lambdalo,SumYlo[deg],SumZlo[deg],num_nodes);}
            // else if (millis()%3==2) {_broadcastEDPacketHi(receivedhi,lambdahi,SumYhi[deg],SumZhi[deg],num_nodes);}

        }

        // receivedhi = next_receivedhi;
        // receivedlo = next_receivedlo;
        // if (newZlo[1]<0){
        //  for(int i = 0; i < deg; i++){
           //   Serial.print(SumZlo[i][1],4);Serial<<" ";Serial.print(SumZlo_prev[i][1],4);;Serial<<" ";
           //  }
           //  Serial<<endl;
        // }
        for(int i = 0; i < num_nodes; i++){ 
            if (((receivedlo>>i) & 1) && is_comm_neigh_lo){
                Ylo[i] = newYlo[i] + Ylo[i]/out_deg;SumYlo[deg][i]+= Ylo[i]/out_deg; 
                Zlo[i] = newZlo[i] + Zlo[i]/out_deg;SumZlo[deg][i]+= Zlo[i]/out_deg;
                ratioslo[i] = Ylo[i]/Zlo[i];
            }
            if (((receivedhi>>i) & 1) && is_comm_neigh_hi){
                Yhi[i] = newYhi[i] + Yhi[i]/out_deg;SumYhi[deg][i]+= Yhi[i]/out_deg;
                Zhi[i] = newZhi[i] + Zhi[i]/out_deg;SumZhi[deg][i]+= Zhi[i]/out_deg;
                ratioshi[i] = Yhi[i]/Zhi[i];
            }
        }


        // String str;
        if (k>0 && k%10==0){
            Serial<<"Iteration "<<k<<endl;
            // str = "High lambdas: ";_print_str_1d_array(str,lambdahi,num_nodes,4);
            // str = "Low lambdas: ";_print_str_1d_array(str,lambdalo,num_nodes,4);
            str = "Low ratio values: ";_print_str_1d_array(str,ratioslo,num_nodes,4);
            str = "High ratio values: ";_print_str_1d_array(str,ratioshi,num_nodes,4);
            // str = "Y hi running sums: ";_print_str_1d_array(str,SumYhi[deg],num_nodes,4);
            // str = "Y lo running sums: ";_print_str_1d_array(str,SumYlo[deg],num_nodes,4);;
            // str = "Z hi running sums: ";_print_str_1d_array(str,SumZhi[deg],num_nodes,4);
            // str = "Z lo running sums: ";_print_str_1d_array(str,SumZlo[deg],num_nodes,4);;
            // str = "Z hi: ";_print_str_1d_array(str,Zhi,num_nodes,4);
            // str = "Z lo: ";_print_str_1d_array(str,Zlo,num_nodes,4);
            // str = "Y hi running sums: ";_print_str_1d_array(str,SumYhi[deg],num_nodes,4);
            // str = "Y lo running sums: ";_print_str_1d_array(str,SumYlo[deg],num_nodes,4);;
            // str = "Y hi: ";_print_str_1d_array(str,Yhi,num_nodes,4);
            // str = "Y lo: ";_print_str_1d_array(str,Ylo,num_nodes,4);

            float valueMinPlus[2] = {-100,100};
            float ratioMinPlus[2] = {-100,100};
            for(int i = 0; i < num_nodes; i++){
                if ((receivedhi>>i) & 1) {
                    if (ratioslo[i]<=1 and 1-ratioMinPlus[0]>1-ratioslo[i]) {
                        ratioMinPlus[0] = ratioslo[i];valueMinPlus[0] = lambdalo[i];
                    }
                    if (ratioslo[i]>=1 and ratioMinPlus[1]-1>ratioslo[i]-1) {
                        ratioMinPlus[1] = ratioslo[i];valueMinPlus[1] = lambdalo[i];
                    }
                    if (ratioshi[i]<=1 and 1-ratioMinPlus[0]>1-ratioshi[i]) {
                        ratioMinPlus[0] = ratioshi[i];valueMinPlus[0] = lambdahi[i];
                    }
                    if (ratioshi[i]>=1 and ratioMinPlus[1]-1>ratioshi[i]-1) {
                        ratioMinPlus[1] = ratioshi[i];valueMinPlus[1] = lambdahi[i];
                    }
                }

            }
         //    Serial<<"Low ratio value : "<<valueMinPlus[0]<<" "<<ratioMinPlus[0]<<endl;
            // delay(5);
            // Serial<<"High ratio value : "<<valueMinPlus[1]<<" "<<ratioMinPlus[1]<<endl;
            // delay(5);
            float lambda = valueMinPlus[1] - ( (ratioMinPlus[1] - 1)*((valueMinPlus[1] - valueMinPlus[0])/(ratioMinPlus[1]-ratioMinPlus[0])) );
            Serial<<"lambda : "<<lambda<<endl;
            delay(5);
            float setpoint = Pmin;
            
            if ( lambda < ((Pmin - alpha)/beta) )
                setpoint = Pmin;
            else if  ( lambda > ((Pmax - alpha)/beta) )
                setpoint = Pmax;
            else
                setpoint = alpha + (lambda*beta);

            String str = "setpoint";
            _print_(str,setpoint,6);

        }

    }
    float valueMinPlus[2] = {-100,100};
    float ratioMinPlus[2] = {-100,100};
    for(int i = 0; i < num_nodes; i++){
        if ((receivedhi>>i) & 1) {
            if (ratioslo[i]<=1 and 1-ratioMinPlus[0]>1-ratioslo[i]) {
                ratioMinPlus[0] = ratioslo[i];valueMinPlus[0] = lambdalo[i];
            }
            if (ratioslo[i]>=1 and ratioMinPlus[1]-1>ratioslo[i]-1) {
                ratioMinPlus[1] = ratioslo[i];valueMinPlus[1] = lambdalo[i];
            }
            if (ratioshi[i]<=1 and 1-ratioMinPlus[0]>1-ratioshi[i]) {
                ratioMinPlus[0] = ratioshi[i];valueMinPlus[0] = lambdahi[i];
            }
            if (ratioshi[i]>=1 and ratioMinPlus[1]-1>ratioshi[i]-1) {
                ratioMinPlus[1] = ratioshi[i];valueMinPlus[1] = lambdahi[i];
            }
        }
    }

    float lambda = valueMinPlus[1] - ( (ratioMinPlus[1] - 1)*((valueMinPlus[1] - valueMinPlus[0])/(ratioMinPlus[1]-ratioMinPlus[0])) );
 //    Serial<<"lambda : "<<lambda<<endl;
    // delay(5);
    float setpoint = Pmin;
    
    if ( lambda < ((Pmin - alpha)/beta) )
        setpoint = Pmin;
    else if  ( lambda > ((Pmax - alpha)/beta) )
        setpoint = Pmax;
    else
        setpoint = alpha + (lambda*beta);

    return setpoint;
}



void OAgent_ED::send_ed_packet(uint8_t n_var, uint8_t upper, uint8_t broadcast,float *lambda,float *SumY,float *SumZ) {
    uint8_t payload[4+12*n_var];

    //construct payload
    payload[0] = ED_HEADER;
    payload[1] = ED_HEADER >> 8;
    payload[2] = upper;
    payload[3] = broadcast;

    union{
        unsigned long a;
        float b;
    } float2bin;
    

    for (int i=4,j=0;j<8;j++){
        if ((broadcast>>j) & 1){

            float2bin.b = lambda[j];
            payload[i] = float2bin.a;
            payload[i+1] = float2bin.a >> 8;
            payload[i+2] = float2bin.a >> 16;
            payload[i+3] = float2bin.a >> 24;

        	float2bin.b = SumY[j];
            payload[i+4*n_var] = float2bin.a;
            payload[i+4*n_var+1] = float2bin.a >> 8;
            payload[i+4*n_var+2] = float2bin.a >> 16;
            payload[i+4*n_var+3] = float2bin.a >> 24;
            
            float2bin.b = SumZ[j];
            payload[i+8*n_var] = float2bin.a;
            payload[i+8*n_var+1] = float2bin.a >> 8;
            payload[i+8*n_var+2] = float2bin.a >> 16;
            payload[i+8*n_var+3] = float2bin.a >> 24;
            i+=4;
        }
    }


    _zbTx = ZBTxRequest(_broadcastAddress, ((uint8_t * )(&payload)), sizeof(payload)); // create zigbee transmit class
    unsigned long txTime = _xbee->sendTwo(_zbTx,false,true); // transmit with time stamp
    #ifdef VERBOSE
        Serial << _MEM(PSTR("Transmit time: ")) << txTime << endl;
    #endif
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