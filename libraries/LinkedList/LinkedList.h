/*
 *  OGraph.cpp
 *  
 *
 *  Created by Olaolu Ajala on 09/16/2019
 *
 */

#ifndef NULL
#define NULL 0

struct node {
	int data;
	node *mainNext;
	node *next;
};


class LinkedList {
	public:
	    // Constructor
	    LinkedList();
	    LinkedList(int n);
	    //States
		inline void _setLLsize (int j) {_size = j;}
		inline int getLLsize() { return _size; }
		inline int getInheritorID() { return _inheritor; }

		//method to display linked list of online node IDs
		void _displayALL();
		//method to prepare the linked list of online node IDs
		void _prepareALL(int n);
		//method to update the linked list of online node IDs based on neighbor status
		void _updateALL(int *p);
		//method to set node ID of inheritor
		void _setInheritorID();

	private:
		//properties
		node *_head, *_pseudoHead, *_tail, *_pseudoTail;
		int _size, _inheritor;
};

#endif // LinkedList.h