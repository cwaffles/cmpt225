// Filename: queue.h/queue.cpp
// Created by eric on 16/06/16.
// Description:
//A data collection Queue ADT class. This class ***must not*** print anything
//on the computer monitor screen. Name this class Queue (Queue.h and Queue.cpp).
//Use an array-based implementation for this Queue class and make sure our
//implementation abides to its Public Interface described below (expressed in C++):


#ifndef INC_3_QUEUE_H
#define INC_3_QUEUE_H

#include "ClassException.h"

const unsigned int queueDefaultMax = 101; //as defined by Anne

//Class invariants: FIFO or LILO
class queue
{
private:
	unsigned int startPos; //starting position of the queue

	unsigned int endPos; //ending position of the queue. endPos - startPos = how many items currently of queue

	string* queueElements; //array of events in the queue

public:

	// Description: default constructor for an empty queue
	queue();

	// Description: default destructor for an empty queue
	~queue();

	// Description: Returns "true" is this queue is empty, otherwise "false".
	// Time Efficiency: O(1)
	bool isEmpty() const;
	
	// Description: Adds inputData to the "back" of this queue and
	//              returns "true" if successful, otherwise "false".
	// Time Efficiency: O(1)
	bool enqueue(const string & inputData);

	// Description: Removes the element at the "front" of this queue and
	//              returns "true" if successful, otherwise "false".
	// Precondition: This queue is not empty.
	// Time Efficiency: O(1)
	bool dequeue();

	// Description: Retrieves (but does not remove) the element at the
	//              "front" of this queue and returns it.
	// Precondition: This queue is not empty.
	// Postcondition: This queue is unchanged.
	// Exceptions: Throws EmptyDataCollectionException if this queue is empty.
	// Time Efficiency: O(1)
	string peek() const throw(ClassException);

	//Description: prints out the contents of the queue
	//Preconditions: none
	//Postconditions: prints out the contents of the queue
	void print(void) const; //debug
};


#endif //INC_3_QUEUE_H
