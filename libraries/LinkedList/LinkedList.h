/*
 *  OGraph.cpp
 *  
 *
 *  Created by Olaolu Ajala on 09/16/2019
 *
 */


#include "OGraph.h"

struct node {
	int data;
	node *mainNext;
	node *next;
};


class LinkedList {
	public:
	    // Constructor
	    LinkedList ();
	    //States
		inline void _setLLsize (int j) {_size = j;}
		inline int getLLsize() { return _size; }
		inline int getInheritorID() { return _inheritor; }

		//method to display linked list of online node IDs
		void _displayALL();
		//method to prepare the linked list of online node IDs
		void _prepareALL();
		//method to update the linked list of online node IDs based on neighbor status
		void _updateALL(int *p);
		//method to create a linked list of online node IDs
		void _createALL();
		//method to set node ID of inheritor
		void _setInheritorID();

	private:
		//properties
		node *_head, *_pseudoHead, *_tail, *_pseudoTail;
		int _size, _inheritor;
};