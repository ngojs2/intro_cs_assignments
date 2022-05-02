/******************************************************************************
** Program name : Lab  7
** Author : Jeffrey Ngo
** Date : 11 / 17 / 2019
** Description : Queue class with head pointer and functions such as isEmpty
** addBack, getFront, removeFront and printe Queue
** QueueNode struct, with val, next, and prev variables.
******************************************************************************/

#include "queue.hpp"
#include <cstdlib>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Default constructor
// Initialize head
Queue::Queue()
{
	head = nullptr;
}

// Function to check if the Queue is empty
// Return true if queue is empty
// Return false if queue is not empty
bool Queue::isEmpty()
{
	if (head == nullptr)
	{
		return true;
	}

	else
	{
		return false;
	}
}

// Function to add node to back of queue

void Queue::addBack(int val)
{
	// Create new node 
	QueueNode* newNode = new QueueNode();
	newNode->val = val;

	if (isEmpty())
	{
		newNode->next = newNode->prev = newNode;
		head = newNode;
	}

	else
	{
		QueueNode* nPtr = head->prev;
		// new node next to head
		newNode->next = head;
		// Set new node previous to head
		head->prev = newNode;
		// Set new head previous to previous head
		newNode->prev = nPtr;
		// new head next to old
		nPtr->next = newNode;
	}
}

// Function to get front node value
// If queue is empty, print empty
// If not empty, print head value
int Queue::getFront()
{
	QueueNode* nPtr = head;

	if (isEmpty())
	{
		cout << "The queue is empty" << endl;
	}

	else
	{
		// Print head value
		cout << nPtr->val;
		return nPtr->val;
	}
}

// Function to remove front node
// If queue is empty, print empty
// If not empty, delete the front node
void Queue::removeFront()
{
	QueueNode* nPtr = head;

	if (isEmpty())
	{
		cout << "The queue is empty" << endl;
	}

	else
	{
		// If there is one only one in queue
		if (head->next == nullptr)
		{
			delete head;
			head = nullptr;
		}

		else
		{
			// set head to the next one
			head = head->next;
			// set head previous to previous head
			head->prev = nPtr->prev;
			// previous head point to new head
			nPtr->prev->next = head;
			// delete old head
			delete nPtr;
		}
	}

}

// Function to print the queue
// If the queue is empty, print message
// If the queue is not empty print values
// Start with the head value and get next values
// Until it reaches the head
void Queue::printQueue()
{
	QueueNode* nPtr = head;

	if (isEmpty())
	{
		cout << "The queue is empty" << endl;
	}

	else
	{
		do
		{
			cout << nPtr->val << " ";
			nPtr = nPtr->next;
		}

		while (nPtr != head);
	}
}

// Destructor
Queue::~Queue()
{
	QueueNode* nPtr = head;

	while (head != nullptr)
	{
		head = head->next;
		nPtr->next = nullptr;
		delete nPtr;
		head = nullptr;
	}

}