#include "QueueData.h"

template <typename Data>

void QueueData<Data>::enqueue(Data item)
{

}

#pragma region Data<char>
QueueData<char>::QueueData()
{
	frontNode = NULL;
	rearNode = NULL;
	
}

char QueueData<char>::dequeue()
{
	char item = '0'; //수정필요
	return item;
}
#pragma endregion

#pragma region Queue

template <typename Data>
QueueNode<Data>::QueueNode()
{

}
#pragma endregion