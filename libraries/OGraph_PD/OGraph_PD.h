/*
 *  OGraph_PD.h
 *  
 *
 *  Created by Stanton T. Cady on 06/15/12
 *  Last edited by Stanton T. Cady on 07/30/12
 *
 */

#ifndef OGraph_PD_h
#define OGraph_PD_h

#define INVALID_ARRAY_INDEX 255
#define NUM_BROADCAST_LAMBDA 3
#define LONG_ERROR 2147483647

#define NUM_REMOTE_VERTICES 22      //ENSURE THAT THESE PARAMETERS ARE SET APPROPRIATELY BASED ON GRAPH STRUCTURE
#define NUM_IN_NEIGHBORS 9         //maximum allowed number of neighbors (does not include itself)
//#define NULL 0

//#define VERBOSE

#include "../XBee/XBee.h" // Include header for xbee api
//#include "LinkedList.h" //Include header for linked list

class OVertex {
    public:
        // Constructors
        OVertex();
        OVertex(uint32_t aLsb);
        OVertex(XBeeAddress64 a);

        // Address
        inline uint32_t getAddressLsb() { return _aLsb; }
        
        // States
        inline void setYMin(long yMin) { _yMin = yMin; }
        inline void setYMax(long yMax) { _yMax = yMax; }
        inline void setYMinYMax(long yMin, long yMax) { _yMin = yMin; _yMax = yMax; }
        inline void addToYMin(long increment) { _yMin += increment; }
        inline void addToYMax(long increment) { _yMax += increment; }
        inline void addToYMinYMax(long incrementYMin, long incrementYMax) { _yMin += incrementYMin; _yMax += incrementYMax; }
        inline long getYMin() { return _yMin; }
        inline long getYMax() { return _yMax; }
        inline void getYMinYMax(long &yMin, long &yMax) { yMin = _yMin; yMax = _yMax; }
        inline void clearYMinYMax() { _yMin = 0; _yMax = 0; }
        void updateYMinYMax(uint8_t weight);
        
        // incoming states
        inline void setYMinIn(long yMinIn) { _yMinIn = yMinIn; }
        inline void setYMaxIn(long yMaxIn) { _yMaxIn = yMaxIn; }
        inline void setYMinInYMaxIn(long yMinIn, long yMaxIn) { _yMinIn = yMinIn; _yMaxIn = yMaxIn; }
        inline void addToYMinIn(long increment) { _yMinIn += increment; }
        inline void addToYMaxIn(long increment) { _yMaxIn += increment; }
        inline void addToYMinInYMaxIn(long incrementYMinIn, long incrementYMaxIn) { _yMinIn += incrementYMinIn; _yMaxIn += incrementYMaxIn; }
        inline void clearYMinInYMaxIn() { _yMinIn = 0; _yMaxIn = 0; }

        // broadcast states
        inline void setMuMin(long muMin) { _muMin = muMin; }
        inline void setMuMax(long muMax) { _muMax = muMax; }
        inline void setMuMinMuMax(long muMin, long muMax) { _muMin = muMin; _muMax = muMax; }
        inline long getMuMin() { return _muMin; }
        inline long getMuMax() { return _muMax; }
        inline void getMuMinMuMax(long &muMin, long &muMax) { muMin = _muMin; muMax = _muMax; }
        inline void clearMuMinMuMax() { _muMin = 0; _muMax = 0; }
        void updateMuMinMuMax(uint8_t weight);

        // Previously received values for robust algorithm
        bool setNuMin(uint8_t i, long nuMin);
        bool setNuMax(uint8_t i, long nuMax);
        long getNuMin(uint8_t i);
        long getNuMax(uint8_t i);
        bool clearNuMinNuMax(uint8_t i);
        void clearAllNuMinNuMax();


    protected:
        // Properties
        uint32_t _aLsb;
        uint8_t _nodeID;
        // States
        long _yMin;
        long _yMax;
        // Variable to keep track of incoming states
        long _yMinIn;
        long _yMaxIn;
        // Broadcast states for robust algorithm
        long _muMin;
        long _muMax;
        // Previous received values for robust algorithm
        long _nuMin[NUM_IN_NEIGHBORS];
        long _nuMax[NUM_IN_NEIGHBORS];
        // Methods
        // Helper functions
        void _prepareOVertex(uint32_t aLsb, uint8_t nodeID);
};





struct node {
    int data;
    node *mainNext;
    node *next;
};


// class LinkedList {
//     public:
//         // Constructor
//         LinkedList();
//         LinkedList(int n);
//         //States
//         inline void _setLLsize (int j) {_size = j;}
//         inline int getLLsize() { return _size; }
//         inline int getInheritorID() { return _inheritor; }

//         //method to display linked list of online node IDs
//         void _displayALL();
//         //method to prepare the linked list of online node IDs
//         void _prepareALL(int n);
//         //method to update the linked list of online node IDs based on neighbor status
//         void _updateALL(int *p);
//         //method to set node ID of inheritor
//         void _setInheritorID();

//     private:
//         //properties
//         node *_head, *_pseudoHead, *_tail, *_pseudoTail;
//         int _size, _inheritor;
// };





class OLocalVertex : public OVertex {
    public:
        // Constructors
        OLocalVertex();
        OLocalVertex(uint32_t aLsb, uint8_t nodeID, long min, long max, long alpha, long beta, uint8_t Dout, long base);
        OLocalVertex(XBeeAddress64 a, uint8_t nodeID, long min, long max, long alpha, long beta, uint8_t Dout, long base);
        // In-degree methods
        inline uint8_t getInDegree() { return _inDegree; }
        inline void incrementInDegree() { _inDegree++; }
        inline void decrementInDegree() { _inDegree--; }
        // Out-degree
        inline void setOutDegree(uint8_t Dout) { _outDegree = Dout; }
        inline uint8_t getOutDegree() { return _outDegree; }
        // Optimal dispatch functions
        long g(long lambda);
        // Base
        inline void setBase(long base) { _base = base; }
        inline long getBase() { return _base; }
        //nodeID
        inline int getID() {return _nodeID; }
        //get leader and deputy ID
        //inline int getleaderID() {return _leaderID; }
        //inline int getdeputyID() {return _deputyID; }
        //set leader and deputy ID
        //inline void setleaderID(int leaderID) {_leaderID = leaderID; }
        //inline void setdeputyID(int deputyID) {_deputyID = deputyID; }
        //use Linked List _l to choose an inheritor
        //int chooseInheritor();
        //use linked list to set number of neighbors
        // inline void setNeighborSize(int neighborSize) {_neighborSize = neighborSize; }
        //Status
        inline uint8_t getStatus(uint8_t nodeID) {return _status[nodeID-1]; }
        inline void setStatus(uint8_t nodeID, uint8_t status) { _status[nodeID-1] = status;  } 
        // State Z
        inline void setZ(long z) { _z = z; }
        inline void addToZ(long increment) { _z += increment; }
        inline long getZ() { return _z; }
        // Incoming state Z
        inline void setZIn(long zIn) { _zIn = zIn; }
        inline void addToZIn(long increment) { _zIn += increment; }
        inline void clearZIn() { _zIn = 0; }
        inline long getZIn() { return _zIn; }
        // Sigma -- broadcast state for robust algorithm
        inline void setSigma(long sigma) { _sigma = sigma; }
        inline void addToSigma(long increment) { _sigma += increment; }
        inline long getSigma() { return _sigma; }
        inline void clearSigma() { _sigma = 0; }
        // Tau -- state for robust algorithm
        bool setTau(uint8_t i, long tau);
        long getTau(uint8_t i);
        void clearAllTau();
        // Limits and cost coefficients
        inline long getMin() { return _min; }
        inline long getMax() { return _max; }
		inline void setMax(long max) { _max = max; }
        inline long getAlpha() { return _alpha; }
        inline long getBeta() { return _beta; }
        // Clear temporary states (zIn and sigma)
        inline void clearZInSigma() { _zIn = 0; _sigma = 0; }

        // Get directive for primal dual algorithm
        inline bool isGenBus() { return _genBus; }
        inline long getActiveSetpoint() { return _p; }
        inline long getReactiveSetpoint() { return _q; }
        inline long getSquareVoltage() { return _sqV; }
        inline long getMu() { return _mu; }
        inline long getNu() { return _nu; }
        inline float getWv() { return _Wv; }
        inline float getWp() { return _Wp; }
        inline float getWq() { return _Wq; }
        inline float getDp() { return _Dp; }
        inline float getDq() { return _Dq; }

        // Set directive for primal dual algorithm
        inline void setGenBusStatus(bool genBus) {_genBus = genBus; }
        inline void setActiveSetpoint(long p) {_p = p; }
        inline void setReactiveSetpoint(long q) {_q = q; }
        inline void setSquareVoltage(long sqV) {_sqV = sqV; }
        inline void setMu(long mu) {_mu = mu; }
        inline void setNu(long nu) {_nu = nu; }
        inline void setPrimalDualWeights(float Wv, float Wp, float Wq, float Dp, float Dq) {_Wv = Wv; _Wp = Wp; _Wq = Wq; _Dp = Dp; _Dq = Dq; }

        
	protected:
        /// Properties
        long _base;
        //status information based on interaction with other nodes in network; 0 - Not a neighbor, 1 - neighbor but offline link, 2 - neighbor with  online link
        uint8_t _status[NUM_REMOTE_VERTICES];
        //Pointer for node status to be used by choose inheritor function (added in by Olaolu)
        //int *_statusP;
        //leader and deputy ID
        //int _leaderID;
        //int _deputyID;
        // A linked list for IDs of online neghbors
        //LinkedList _l;
        //Number of online neighbors
        // int _neighborSize;
        // Ratio-consensus states
        long _z;
        long _zIn;
        // Robust algorithm states
        long _sigma;
        long _tau[NUM_IN_NEIGHBORS];
        // Limits and cost coefficients
        long _min;
        long _max;
        long _alpha;
        long _beta;
        // Graph degrees
        uint8_t _inDegree;
        uint8_t _outDegree;
        /// Methods
        void _prepareOLocalVertex(uint32_t aLsb, uint8_t nodeID, long min, long max, long alpha, long beta, uint8_t Dout, long base);
        long _computeLambda(long limit);

        //vertex property for primal dual algorithm
        bool _genBus //bus type (generator bus or load bus)

        //Decision variables for primal dual algorithm
        long _p; //per-unit active power setpoint
        long _q; //per-unit active power setpoint
        long _sqV;  //per-unit voltage magnitude squared
        long _mu; //lagrange multiplier for active power balance
        long _nu; //lagrange multiplier for reactive power balance

        //Weights for primal dual algorithm
        float _Wv;  //voltage weight
        float _Wp; //active power balance weight
        float _Wq; //reactive power balance weight
        float _Dp; //active power injection weight
        float _Dq; //reactive power injection weight
};

class OLocalReserveVertex : public OLocalVertex {
	public:
		OLocalReserveVertex();
        OLocalReserveVertex(uint32_t aLsb, long min, long max, long alpha, long beta, uint8_t Dout, long base);
        OLocalReserveVertex(XBeeAddress64 a, long min, long max, long alpha, long beta, uint8_t Dout, long base);
		inline long getReserveMin() { return _reserveMin; }
		inline void setReserveMin(long reserveMin) { _reserveMin = reserveMin; }
		inline long getReserveMax() { return _reserveMax; }
		inline void setReserveMax(long reserveMax) { _reserveMax = reserveMax; }
		inline bool getLimitExceeded() { return _limitExceeded; }
		inline void setLimitExceeded(bool limitExceeded) { _limitExceeded = limitExceeded; }
		inline float getLimitGamma() { return _limitGamma; }
		inline void setLimitGamma(float limitGamma) { _limitGamma = limitGamma; }
	private:	
		/// Properties
		long _reserveMin;
		long _reserveMax;
		bool _limitExceeded;
		float _limitGamma;
		/// Methods
		void _prepareOLocalReserveVertex(uint32_t aLsb, long min, long max, long alpha, long beta, uint8_t Dout, long base);
};

class ORemoteVertex : public OVertex {
    public:
        // Constructors
        ORemoteVertex();
        ORemoteVertex(XBeeAddress64 a, uint8_t nodeID, bool inNeighbor = false);
        ORemoteVertex(uint32_t aLsb, uint8_t nodeID, bool inNeighbor = false);
        ORemoteVertex(XBeeAddress64 a, uint8_t nodeID, long r, long x, bool inNeighbor = false);
        ORemoteVertex(uint32_t aLsb, uint8_t nodeID, long r , long x, bool inNeighbor = false);
        
        // Get directive for inNeighbor
        inline bool isInNeighbor() { return _inNeighbor; }
        inline uint8_t getIndex() { return _index; }
        
        // Get directive for primal dual algorithm
        inline long getResistance() { return _r; }
        inline long getReactance() { return _x; }
        
        inline long getActiveFlow() { return _fp; }
        inline long getReactiveFlow() { return _fq; }
        inline long getLambda() { return _lambda; }
        
        // Set directive for primal dual algorithm
        inline void setResistance(long r) {_r = r; }
        inline void setReactance(long x) {_x = x; }

        inline void setActiveFlow(long fp) {_fp = fp; }
        inline void setReactiveFlow(long fq) {_fq = fq; }
        inline void setLambda(long lambda) {_lambda = lambda; }

    private:
        /// Properties
        bool _inNeighbor;
        uint8_t _index;
        /// Methods
        // Constructor helper
        void _prepareORemoteVertex(uint32_t aLsb = 0x0, uint8_t nodeID = 0, long r = 0, long x = 0, bool inNeighbor = false);

        //vertex properties for primal dual algorithm
        long _r //per-unit resistance of electrical link
        long _x //per-unit reactance of electrical link

        //Decision variables for primal dual algorithm
        long _fp; //per-unit active flow along electrical link
        long _fq; //per-unit reactive flow along electrical link
        long _lambda; //lagrange multiplier for LinDistFlow
};

class OGraph_PD {
	public:
        /// Constructors
		OGraph_PD();
        OGraph_PD(OLocalVertex * s);
        
        /// Local vertex
        inline OLocalVertex * getLocalVertex() { return _self; }
        bool isLocalVertex(uint32_t aLsb);
        inline bool isLocalVertex(XBeeAddress64 a) { return isLocalVertex(a.getLsb()); }
        
        /// Graph properties
        inline uint8_t getN() { return _n; }
        inline uint8_t getNumberNonNeighbors() { return _n - _self->getInDegree() - 1; }
        
        /// In-neighbors
        // Add in-neighbor
        bool addInNeighbor(XBeeAddress64 , uint8_t nodeID);
        bool addInNeighbor(uint32_t aLsb, uint8_t nodeID);
        bool addInNeighbor(XBeeAddress64 a, uint8_t nodeID, long r, long x);
        bool addInNeighbor(uint32_t aLsb, uint8_t nodeID, long r, long x);
        //Remove in-neighbor
        bool removeInNeighbor(uint8_t nodeID);     //Olaolu
        // Determine if vertex is in-neighbor
        bool isInNeighbor(XBeeAddress64 a);
        bool isInNeighbor(uint32_t aLsb);
        bool isInNeighbor(XBeeAddress64 a, uint8_t &i);
        bool isInNeighbor(uint32_t aLsb, uint8_t &i);
        bool isInNeighbor(uint32_t aLsb, ORemoteVertex * &v);
        
        /// Non-neighbors
        // Add non-neighbor to array
        bool addNonNeighbor(XBeeAddress64 a, uint8_t nodeID);
        bool addNonNeighbor(uint32_t aLsb, uint8_t nodeID);
        bool addNonNeighbor(XBeeAddress64 a, uint8_t nodeID, long r, long x);
        bool addNonNeighbor(uint32_t aLsb, uint8_t nodeID, long r, long x);
        // Determine if vertex is non-neighbor
        bool isNonNeighbor(uint32_t aLsb);
        bool isNonNeighbor(XBeeAddress64 a);
        bool isNonNeighbor(uint32_t aLsb, uint8_t &i);
        bool isNonNeighbor(XBeeAddress64 a, uint8_t &i);
                        
        /// Common vertices
        // Methods to clear various states
        void clearAllNuTau();
        void clearAllYMinYMax();
        void clearAllInStates();
        void clearAllBroadcastStates();
        void clearAllBroadcastLambda();
        void clearAllStates();
        // Methods to get pointer to vertex
        OVertex * getVertexByAddressLsb(uint32_t aLsb);
        OVertex * getVertexByAddressLsb(uint32_t aLsb, uint8_t &i);
        OVertex * getVertexByAddress(XBeeAddress64 a);
        OVertex * getVertexByUniqueID(uint8_t i);
        ORemoteVertex * getRemoteVertex(uint8_t nodeID);

        uint8_t _getRemoteVertexIndex(uint32_t aLsb);

	private:
        /// Properties
        uint8_t _n;                         // Total number of vertices

        OLocalVertex * _self;               // Local vertex
        ORemoteVertex _remoteVertices[NUM_REMOTE_VERTICES];
        
        // Methods
        uint8_t _getRemoteVertexIndex(XBeeAddress64 a);
    	//uint8_t _getRemoteVertexIndex(uint32_t aLsb);        made this function public (*Sammy)
        bool _isRemoteVertex(uint32_t aLsb);
        bool _isRemoteVertex(uint32_t aLsb, uint8_t &i);
        bool _addRemoteVertex(uint32_t aLsb, long r, long x, bool inNeighbor = false);
};


#endif // OGraph_PD_h