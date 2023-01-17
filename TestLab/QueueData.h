#pragma once
#include <iostream>
#include "QueueNode.h"

template <typename Data>
class QueueData
{
public:
	QueueData();
	void enqueue(Data);
	Data dequeue();

private:
	QueueNode<Data>* frontNode;
	QueueNode<Data>* rearNode;
	friend class QueueNode<Data>;
};



