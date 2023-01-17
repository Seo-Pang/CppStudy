#pragma once

#include <iostream>

template <typename Data>

class StackData
{
public:
	Data top;

	StackData();
	void push(Data item);
	Data pop();

private:
	StackData* node;
};