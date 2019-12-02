/*
 *  OAgent.h
 *  
 *
 *  Created by Stanton T. Cady on 06/15/12
 *  Edited by Laura Haller on 01/11/13
 *  Last edited by Stanton T. Cady on 01/16/13
 *
 */

#ifndef OAgent_h
#define OAgent_h


//#define VERBOSE

#include "XBee.h"   // Include header for xbee api
#include "OGraph.h"
#include "Dyno.h"

#define SCHEDULE_FAIR_SPLIT_HEADER       0x7346 // schedule coordinate header is ascii sC
#define FAIR_SPLITTING_HEADER            0x6653 // fair splitting ratio-consensus header is ascii fS
#define OPTIMAL_DISPATCH_HEADER          0x6f44 // optimal dispatch header is ascii oD
#define ACK_START_HEADER                 0x6B55 //acknowledgment header is ascii kU (used to ensure start packet has been received by all neighbor nodes)
//#define TEST_PACKET_HEADER               0x7450
//#define LAMBDA_MIN_MAX_HEADER            0x624C // broadcast lambda header is ascii bL
#define SCHEDULE_OPTIMAL_DISPATCH_HEADER 0x7344 // schedule optimal dispatch header is ascii sD
#define INCLUDE_LAMBDA_MIN_MAX_SUBHEADER 0x0F   // include lambda min max subheader is 0b00001111
#define NO_LAMBDA_MIN_MAX_SUBHEADER      0x03   // no lambda min max subheader is 0b00000011
#define SYNC_BEGIN_HEADER                0x7342	// HRTS sync_begin header is ascii sB
#define SYNC_RESPONSE_HEADER             0x7352 // HRTS sync_response header is ascii sR
#define SYNC_FINAL_HEADER                0x7346	// HRTS sync_final header is ascii sF
#define SYNC_TIMEOUT                     2500   // time out period to wait for response to HRTS sync_begin broadcast in milliseconds
#define ACK_TIMEOUT                      500    // time out period to wait for an ack
#define SYNC_RETRY_PERIOD                250    // period to wait between broadcasting HRTS sync_begin packet
#define SYNC_ERROR                       8      // calibrate for small amount of error
	 
#define LOG_TORQUE_ERROR_KEY			 0x45   // log torque error key is ascii E
#define LOG_INITIAL_TORQUE_KEY			 0x49	// log initial torque key is ascii I
#define LOG_GAMMA_KEY					 0x47	// log gamma key is ascii G	 
#define LOG_LAMBDA_KEY					 0x4C	// log gamma key is ascii L	

class OAgent {
	public:
        /// Constructors
		OAgent();
        OAgent(XBee * xbee, OGraph * G, bool leader = false, bool quiet = true);
        OAgent(XBee * xbee, ZBRxResponse * rx, OGraph * G, bool leader = false, bool quiet = true);
        
        /// Methods
        inline OGraph * getGraph() { return _G; }
        //unsigned int getRxAddress();
        //void broadcastTestPacket();
        //bool waitForTestPacket();
        
        // Get / set leader directive
        inline void setLeader(bool leader) { _leader = leader; }
        inline bool isLeader() { return _leader; }
        
        // Get / set quiet directive
        inline void setQuiet(bool quiet) { _quiet = quiet; }
        inline bool isQuiet() { return _quiet; }
        
        // Fair splitting methods
        float fairSplitRatioConsensus(long x, uint8_t iterations, uint16_t period); 
        long computeFairSplitFinalValue(float gamma);
        long leaderFairSplitRatioConsensus(long initial, uint8_t iterations, uint16_t period);
        void leaderFairSplitRatioConsensusWithDyno(Dyno &d, uint8_t iterations, uint16_t period, uint8_t &ledPin);
        long nonleaderFairSplitRatioConsensus(long initial, uint8_t id);
        void nonleaderFairSplitRatioConsensusWithDyno(Dyno &d, uint8_t &ledPin);
		void reserveFairSplitRatioConsensusWithDyno(Dyno &d, long trueMax, uint8_t &ledPin);
        
        // Optimal dispatch Methods
        long optimalDispatch(long x, uint8_t iterations, uint16_t period);
		long optimalDispatchWithDyno(long x, uint8_t iterations, uint16_t period, Dyno &d);
		void leaderOptimalDispatchWithDyno(Dyno &d, uint8_t iterations, uint16_t period, uint8_t &ledPin);
        long leaderOptimalDispatch(long initial, uint8_t iterations, uint16_t period, uint8_t &ledPin);
        long nonleaderOptimalDispatch(long initial, uint8_t &ledPin);
		void nonleaderOptimalDispatchWithDyno(Dyno &d, uint8_t &ledPin);
        
        void leaderDGC(Dyno &d, float k, int vref, uint8_t epsilon);
        void nonleaderDGC();
        
        // HRT Synchronization methods
        bool sync(uint8_t attempts = 10);
        inline bool isSynced() { return _synced; }
        unsigned long myMillis();
        inline float getbufferdata(int index){ return _buffer[index]; }
        inline long getbuffer2() {return _buffer2; }
                                        

	private:
        //// Properties
        /// XBee stuff
        XBee * _xbee;
        ZBRxResponse * _rx;
        ZBTxRequest _zbTx;
        ZBTxStatusResponse _txStatus;
        XBeeAddress64 _broadcastAddress;
        uint32_t _aMsb;
        uint32_t _availableAgentLsb[8];
        
        /// Graph
        OGraph * _G;
        
        
        /// Agent properties
        bool _leader;
        bool _quiet;
        bool _synced;
        long _offset;
        unsigned long _start_millis;
        uint8_t _iterations;
        uint16_t _period;
        
        //Sammy's addition to contain iterates
        float _buffer[200];
        long _buffer2;
        //// Methods
        /// Fair splitting
        inline void _waitForScheduleFairSplitPacket(unsigned long &startTime, uint8_t &iterations, uint16_t &period, uint8_t id,int timeout = -1) {
            _waitForSchedulePacket(SCHEDULE_FAIR_SPLIT_HEADER,startTime,iterations,period,id,timeout);
        }
        inline void _broadcastScheduleFairSplitPacket(unsigned long startTime, uint8_t iterations, uint16_t period) {
            _broadcastSchedulePacket(SCHEDULE_FAIR_SPLIT_HEADER,startTime,iterations,period);
        }
        inline bool _fairSplitPacketAvailable() { return _packetAvailable(FAIR_SPLITTING_HEADER,true); }
        void _initializeFairSplitting(OLocalVertex * s, long x);
        void _broadcastFairSplitPacket(OLocalVertex * s);
        long _getMuFromPacket();
        long _getSigmaFromPacket();
        long _getpacketcheck();
        
        /// Optimal dispatch methods
        void _initializeOptimalDispatch(OLocalVertex * s, long x);
        void _updateOptimalDispatchStates(OLocalVertex * s, uint8_t Dout);
        
        // Methods dealing with packets
        void _broadcastOptimalDispatchPacket(OLocalVertex * s);
        inline bool _optimalDispatchPacketAvailable() { return _packetAvailable(OPTIMAL_DISPATCH_HEADER,true); }
        void _processOptimalDispatchPacket(OLocalVertex * s, uint8_t i);
        uint8_t _getPayloadSize();
        uint8_t _getNumberLambdaMinMax();
        uint8_t _addDataToPayload(OVertex * v, uint8_t payload[], uint8_t ptr);
        inline void _waitForSchedulleOptimalDispatchPacket(unsigned long &startTime, uint8_t &iterations, uint16_t &period, uint8_t id,int timeout = -1) {
            _waitForSchedulePacket(SCHEDULE_OPTIMAL_DISPATCH_HEADER,startTime,iterations,period,id, timeout);
        }
        inline void _broadcastScheduleOptimalDispatchPacket(unsigned long startTime, uint8_t iterations, uint16_t period) {
            _broadcastSchedulePacket(SCHEDULE_OPTIMAL_DISPATCH_HEADER,startTime,iterations,period);
        }

        void _broadcastACKPacket(uint16_t header, uint8_t id);

        
        // Methods for finding final solution
        void _computeFinalOptimalDispatchRatios(OLocalVertex * s, float ratios[]);
        //uint8_t _addRatioToArray(OVertex * v, long &z, float ratios[], uint8_t ptr);
        inline float _computeRatio(long num, long dem) { return float(num)/float(dem); }
        void _printRatios(float ratios[], uint8_t num);
        void _findMinRatioMaxRatio(float ratios[], uint8_t num, float &min, float &max);
        void _printFinalYMinYMax(OLocalVertex * s);
        void _printStates(OLocalVertex * s, uint8_t k, bool printY = false);
		void _printLambdas(OLocalVertex * s);
        long _findLambdaStar(OLocalVertex * s);
        void _updateLambdaMinLambdaMax(OVertex * v, long &z, float &min, float &max, long &lambdaMinus, long &lambdaPlus);
        uint8_t _checkRatio(float &min, float &max, float ratio);
        
        // Synchronization helper functions
        bool _leaderSync();
        bool _targetSync(unsigned long tTwo);
        bool _nonTargetSync(unsigned long tTwo);
        unsigned long _broadcastSyncBeginPacket(uint8_t i);
        void _broadcastSyncFinalPacket(unsigned long tTwo, long d);
        bool _unicastSyncResponsePacket(unsigned long tTwo);
        inline bool _waitForSyncBeginPacket(unsigned long &rxTime) { return _waitForPacket(SYNC_BEGIN_HEADER,rxTime,true,-1); }
        inline bool _waitForSyncResponsePacket(unsigned long &rxTime) { return _waitForPacket(SYNC_RESPONSE_HEADER,rxTime,false,SYNC_TIMEOUT); }
        inline bool _waitForSyncFinalPacket(int timeout = -1) { return _waitForPacket(SYNC_FINAL_HEADER,true,timeout); }
        bool _isTargetNode();
        
        // General xbee methods
        bool _validPacketAvailable();
        bool _packetAvailable(uint16_t header, bool broadcast = false);
        bool _packetAvailable(uint16_t header, unsigned long &rxTime, bool broadcast = false);
        uint16_t _packetAvailable(bool broadcast);
        bool _packetAvailableHelper(uint16_t header, bool broadcast = false);
        bool _packetACKed(int timeout);
        inline uint16_t _getHeaderFromPacket() { return (uint16_t(_rx->getData(1)) << 8) + _rx->getData(0); }
        bool _waitForPacket(uint16_t header, unsigned long &rxTime, bool broadcast = false, int timeout = -1);
        bool _waitForPacket(uint16_t header, bool broadcast = false, int timeout = -1);
        uint16_t _waitForValidPacket(bool broadcast = false, int timeout = -1);
        
        // General scheduling methods
        void _WaitForACKPacket(uint16_t header, unsigned long t0, unsigned long startTime, uint8_t iterations, uint16_t period);
        inline uint8_t _getIDFromPacket() {  return _rx->getData(2); }

        bool _waitToStart(unsigned long startTime, bool useMyMillis, int timeout = -1);
        inline uint32_t _getStartTimeFromPacket() {
            return (uint32_t(_rx->getData(5)) << 24) + (uint32_t(_rx->getData(4)) << 16) + (uint16_t(_rx->getData(3)) << 8) + _rx->getData(2);
        }
        inline uint8_t _getIterationsFromPacket() { return _rx->getData(6); }
        inline uint16_t _getPeriodFromPacket() { return (uint16_t(_rx->getData(8)) << 8) + _rx->getData(7); }
        
        // Generate transmit time
        uint16_t _genTxTime(uint16_t iterationPeriod, uint8_t ITF);
        uint16_t _genTxTime(uint16_t iterationPeriod, uint8_t ITF, int seed);
        
        // General coordination helper functions
        bool _timeToTransmit(uint16_t startTime, uint16_t txTime);
        void _waitForSchedulePacket(uint16_t header, unsigned long &startTime, uint8_t &iterations, uint16_t &period, uint8_t id, int timeout);
        uint16_t _waitForSchedulePacket(unsigned long &startTime, uint8_t &iterations, uint16_t &period, int timeout = - 1);
        void _broadcastSchedulePacket(uint16_t header, unsigned long startTime, uint8_t numIterations, uint16_t period);
        uint32_t _getAvailableAgentLsb(uint8_t i);
        uint32_t _getUint32_tFromPacket(uint8_t &lsbByteNumber);
        inline long _getLongFromPacket(uint8_t &lsbByteNumber) { return long(_getUint32_tFromPacket(lsbByteNumber)); }
        uint8_t _getUint8_tFromPacket(uint8_t &byteNumber);
        uint8_t _addUint32_tToPayload(uint32_t data, uint8_t payload[], uint8_t ptr);
        
        // Constructor helper function
        void _prepareOAgent(XBee * xbee, ZBRxResponse * rx, OGraph * G, bool leader = false, bool quiet = true);
};

#endif // OAgent_h