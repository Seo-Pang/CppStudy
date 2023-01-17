#include "StackData.h"

template <typename Data>
void StackData<Data>::push(Data item)
{
	StackData<Data>* temp = new StackData<Data>();
	temp->top = this->top;
	temp->node = this->node;
	this->top = item;
	this->node = temp;
}

#pragma region Data<char>
StackData<char>::StackData()
{
	top = '\0';
	node = NULL;
}
char StackData<char>::pop()
{
	char temp = this->top;
	this->top = this->node->top;
	this->node = this->node->node;
	return temp;
}
#pragma endregion

#pragma region Data<float>
StackData<float>::StackData()
{
	top = 0;
	node = NULL;
}
float StackData<float>::pop()
{
	float temp = this->top;
	this->top = this->node->top;
	this->node = this->node->node;
	return temp;
}

#pragma endregion

#pragma region Data<int>
StackData<int>::StackData()
{
	top = 0;
	node = NULL;
}
int StackData<int>::pop()
{
	int temp = this->top;
	this->top = this->node->top;
	this->node = this->node->node;
	return temp;
}
#pragma endregion