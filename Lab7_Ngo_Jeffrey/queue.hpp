/******************************************************************************
** Program name : Lab  7
** Author : Jeffrey Ngo
** Date : 11 / 17 / 2019
** Description : Queue class with head pointer and functions such as isEmpty
** addBack, getFront, removeFront and printe Queue
** QueueNode struct, with val, next, and prev variables.
******************************************************************************/

#ifndef QUEUE_HPP
#define QUEUE_HPP

// Queue class
class Queue
{
private:

	// QueueNode member variables
	struct QueueNode
	{
		int val;
		QueueNode* next;
		QueueNode* prev;
		
	};
	// Head pointer
	QueueNode* head;

public:
	// Default constructor
	Queue();

	// Functions
	bool isEmpty();
	void addBack(int val);
	int getFront();
	void removeFront();
	void printQueue();

	// Decsonstructor
	~Queue();
};
#endif