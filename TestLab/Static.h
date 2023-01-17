#pragma once

#include <iostream>



class Static
{
public:
	Static();
	static char staticMember;

	static void inStatic(char item);
	static void outStatic();
};



