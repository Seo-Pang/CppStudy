#pragma once
template <typename Data>
class QueueNode
{
public:
	QueueNode();
private:
	Data item;
	QueueNode* node;
};
