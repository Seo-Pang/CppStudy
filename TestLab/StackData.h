#pragma once

#include <iostream>

template <typename Data>
class StackData
{
public:
	StackData();
	void push(Data);
	Data pop();

private:
	Data top;
	StackData* node;
};