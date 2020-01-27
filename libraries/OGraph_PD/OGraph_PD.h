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
    uint8_t data;
    node *mainNext;
    node *next;
    node *codedNext;
};


class LinkedList {
    public:
        // Constructor
        LinkedList();
        LinkedList(int n);
        //States
        inline void setLLsize (uint8_t j) {_size = j;}
        inline void resetLLsize () {_size = 0;}
        inline uint8_t getLLsize() { return _size; }
        inline void setNumCodedLinks (uint8_t j) {_numCodedLinks = j;}
        inline uint8_t getNumCodedLinks() { return _numCodedLinks; }
        // inline int getInheritorID() { return _inheritor; }

        //method to display linked list of online node IDs
        void displayLinkedList();
        //method to unlink a specific neighbor from the linkedlist
        void unlinkNeighbor(int neighborID);
        //method to get maximum activation code
        uint8_t getMaxActCode();
        //method to see if a link is still available
        bool isCodedLinkAvailable(int neighborID);
        //method to unlink the first node the linkedlist points to and return its data
        uint8_t unlinkLinkedListNodes();
        //method to update the linked list of online node IDs based on neighbor status
        void updateLinkedList(int *p);
        //method to find an uncoded link
        void updateCodedLinks(ORemoteVertex *n);
        //method to unlink a coded link
        void unlinkCodedLink(uint8_t neighborID)
        //method to find an uncoded link
        uint8_t findUncodedLink(ORemoteVertex *n);
        //method to check if an activation code is available
        bool isActCodeAvailable(uint8_t code, ORemoteVertex *n, bool &flag);
        //method to check if an activation code is used; if yes, the ID of the remote vertex is returned
        uint8_t isActCodeUsed(uint8_t code, ORemoteVertex *n);


    private:
        //properties
        node *_head, *_pseudoHead, *_codedHead, *_tail, *_pseudoTail, *_codedTail;
        uint8_t _size;  //size of linked list
        uint8_t _numCodedLinks;  //number of coded links

        // Helper functions
        void _prepareLinkedList(int n);
};





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
        inline void setNeighborSize(int neighborSize) {_neighborSize = neighborSize; }
        //get number of neighbors
        inline int getNeighborSize() {return _neighborSize; }
        //Status
        inline uint8_t getStatus(uint8_t neighborID) {return _status[neighborID-1]; }
        inline int * getStatusP() {return _statusP; }
        inline void setStatus(uint8_t neighborID, uint8_t status) { _status[neighborID-1] = status;  } 
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
        inline float getActiveSetpoint() { return _p; }
        inline float getReactiveSetpoint() { return _q; }
        inline float getActiveDemand() { return _pd; }
        inline float getReactiveDemand() { return _qd; }
        inline float getActiveBalance() { return _bp; }
        inline float getReactiveBalance() { return _bq; }
        inline float getSquareVoltage() { return _sqV; }
        inline float getMu() { return _mu; }
        inline float getNu() { return _nu; }
        inline float getWv() { return _Wv; }
        inline float getWp() { return _Wp; }
        inline float getWq() { return _Wq; }
        inline float getDp() { return _Dp; }
        inline float getDq() { return _Dq; }

        // Set directive for primal dual algorithm
        inline void setGenBusStatus(bool genBus) {_genBus = genBus; }
        inline void setActiveSetpoint(float p) {_p = p; }
        inline void setReactiveSetpoint(float q) {_q = q; }
        inline void setActiveDemand(float pd) {_pd = pd; }
        inline void setReactiveDemand(float qd) {_qd = qd; }
        inline void setActiveBalance(float bp) {_bp = bp; }
        inline void setReactiveBalance(float bq) {_bq = bq; }
        inline void setSquareVoltage(float sqV) {_sqV = sqV; }
        inline void setMu(float mu) {_mu = mu; }
        inline void setNu(float nu) {_nu = nu; }
        inline void setPrimalDualWeights(float Wv, float Wp, float Wq, float Dp, float Dq) {_Wv = Wv; _Wp = Wp; _Wq = Wq; _Dp = Dp; _Dq = Dq; }
        // LinkedList method
        inline LinkedList * getLinkedList() { return _list; }

        
	protected:
        /// Properties
        long _base;
        //status information based on interaction with other nodes in network; 0 - Not a neighbor, 1 - neighbor but offline link, 2 - neighbor with  online link
        uint8_t _status[NUM_REMOTE_VERTICES];
        //Pointer for node status (added in by Olaolu)
        int *_statusP;
        //leader and deputy ID
        //int _leaderID;
        //int _deputyID;
        // A linked list for IDs of online neghbors
        LinkedList * _list;
        //Number of online neighbors
        int _neighborSize;
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
        float _p; //per-unit active power setpoint
        float _q; //per-unit reactive power setpoint
        float _pd; //per-unit active power demand
        float _qd; //per-unit reactive power demand
        float _bp; //per-unit active power balance
        float _bq; //per-unit reactive power balance
        float _sqV;  //per-unit voltage magnitude squared
        float _mu; //lagrange multiplier for active power balance
        float _nu; //lagrange multiplier for reactive power balance

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
        ORemoteVertex(XBeeAddress64 a, uint8_t neighborID, bool inNeighbor = false);
        ORemoteVertex(uint32_t aLsb, uint8_t neighborID, bool inNeighbor = false);
        ORemoteVertex(XBeeAddress64 a, uint8_t neighborID, long r, long x, bool inNeighbor = false);
        ORemoteVertex(uint32_t aLsb, uint8_t neighborID, long r , long x, bool inNeighbor = false);
        
        // Get directive for inNeighbor
        inline bool isInNeighbor() { return _inNeighbor; }
        inline uint8_t getIndex() { return _index; }
        
        // Get directive for primal dual algorithm
        inline float getResistance() { return _r; }
        inline float getReactance() { return _x; }
        
        inline float getActiveFlow() { return _fp; }
        inline float getReactiveFlow() { return _fq; }
        inline float getLambda() { return _lambda; }

        inline uint8_t getLinkActCode() { return _linkActCode; }
        inline bool isLinkActLead() { return _linkActLead; }
        
        // Set directive for primal dual algorithm
        inline void setResistance(float r) {_r = r; }
        inline void setReactance(float x) {_x = x; }

        inline void setActiveFlow(float fp) {_fp = fp; }
        inline void setReactiveFlow(float fq) {_fq = fq; }
        inline void setLambda(float lambda) {_lambda = lambda; }

        inline void setLinkActCode(uint8_t linkActCode) {_linkActCode = linkActCode; }
        inline void setLinkActLead(bool linkActLead) {_linkActLead = linkActLead; }                 //when a candactcode packet is received from a neighbor, that neighbor is said to be a link activation lead

    private:
        /// Properties
        bool _inNeighbor;
        uint8_t _index;
        /// Methods
        // Constructor helper
        void _prepareORemoteVertex(uint32_t aLsb = 0x0, uint8_t neighborID = 0, long r = 0, long x = 0, bool inNeighbor = false);

        //vertex properties for primal dual algorithm
        float _r //per-unit resistance of electrical link
        float _x //per-unit reactance of electrical link

        //Decision variables for primal dual algorithm
        float _fp; //per-unit active flow along electrical link
        float _fq; //per-unit reactive flow along electrical link
        float _lambda; //lagrange multiplier for LinDistFlow

        //link activation code (used to decide when a link should be activated, links with same activation code are activated simultaneously)
        uint8_t _linkActCode;

        //check if neighbor is a link activation lead
        bool _linkActLead;
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
        bool addInNeighbor(XBeeAddress64 , uint8_t neighborID);
        bool addInNeighbor(uint32_t aLsb, uint8_t neighborID);
        bool addInNeighbor(XBeeAddress64 a, uint8_t neighborID, long r, long x);
        bool addInNeighbor(uint32_t aLsb, uint8_t neighborID, long r, long x);
        //Remove in-neighbor
        bool removeInNeighbor(uint8_t neighborID);     //Olaolu
        // Determine if vertex is in-neighbor
        bool isInNeighbor(XBeeAddress64 a);
        bool isInNeighbor(uint32_t aLsb);
        bool isInNeighbor(XBeeAddress64 a, uint8_t &i);
        bool isInNeighbor(uint32_t aLsb, uint8_t &i);
        bool isInNeighbor(uint32_t aLsb, ORemoteVertex * &v);
        
        /// Non-neighbors
        // Add non-neighbor to array
        bool addNonNeighbor(XBeeAddress64 a, uint8_t neighborID);
        bool addNonNeighbor(uint32_t aLsb, uint8_t neighborID);
        bool addNonNeighbor(XBeeAddress64 a, uint8_t neighborID, long r, long x);
        bool addNonNeighbor(uint32_t aLsb, uint8_t neighborID, long r, long x);
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
        ORemoteVertex * getRemoteVertex(uint8_t neighborID);

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