
/*
 *  OGraph.cpp
 *  
 *
 *  Created by Olaolu Ajala on 09/16/2019
 *
 */

#include "LinkedList.h"

//// LinkedList
/// Public methods
// Constructors

LinkedList::LinkedList() {
	_prepareALL();
}



//create a linked list of online neighbors, using their node IDs 
void LinkedList::_prepareALL() {
	_head = NULL;
	_tail = NULL;
	_inheritor = 1;
	for (int i = 0; i < NUM_REMOTE_VERTICES; i++)
	{
		node *tmp = new node;
		tmp->data = i + 1;
		tmp->mainNext = NULL;

		if (_head == NULL)
		{
			_head = tmp;
			_tail = tmp;
		}
		else
		{
			_tail->mainNext = tmp;
			_tail = tmp;
		}
	}
	_setLLsize (NUM_REMOTE_VERTICES);
}



//create a linked list of online neighbors, using their node IDs 
void LinkedList::_updateALL(int *p) {
	int i=0, j=0;
	_pseudoHead = NULL;
	node *tmp;
	tmp = _head;
	while (tmp != NULL)
	{
		if (*(p+i) == 2)
		{
			if (_pseudoHead == NULL)
			{
				_pseudoHead = tmp;
				_pseudoTail = tmp;
			}
			else
			{
				_pseudoTail->next = tmp;
				_pseudoTail = tmp;
			}
			j++;
		}
		tmp = tmp->mainNext;
		i++;
	}
	_pseudoTail->next = NULL;
	_setLLsize (j);
}



//display a linked list
void LinkedList::_displayALL() {
	node *tmp;
	tmp = _pseudoHead;
	while (tmp != NULL)
	{
		cout << tmp->data << ' ';
		tmp = tmp->next;
	}
}



//get node ID of inheritor
void LinkedList::_setInheritorID() {
	node *tmp;
	tmp = _pseudoHead;
	int ID = 0;
	int index;

	if (tmp == NULL)
	{
		return;
	}
	else
	{
		// randomly choose an online neighbor to be inheritor
		srand (time (0));	
		index = rand () % getLLsize ();
		for (int i = 0; i <= index; i++)
		{
			ID = tmp->data;
			tmp = tmp->next;
		}
		_inheritor = ID;
	}
}

// int main() {
// 	node *LL_1;
// 	int node_status[] = { 1, 2, 2, 0, 2, 1, 2, 1, 2, 2 };
// 	int *node_statusP = node_status;
// 	LinkedList l;
// 	l.createArrayLL (node_statusP, 2);
// 	l.displayLL ();
// 	cout << "\nThe inheritor's ID is: " << l._setInheritorID ();
// 	return 0;
// }