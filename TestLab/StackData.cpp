#include "StackData.h"


#pragma region Data<char>
StackData<char>::StackData()
{
	top = '\0';
	node = NULL;
}

void StackData<char>::push(char item)
{
	StackData<char>* temp = new StackData<char>();
	temp->top = this->top;
	temp->node = this->node;
	this->top = item;
	this->node = temp;
}

char StackData<char>::pop()
{
	pop
}
#pragma endregion

