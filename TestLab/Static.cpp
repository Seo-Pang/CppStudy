#include "Static.h"

char Static::staticMember = '\0';

Static::Static()
{
	inStatic('a'); //둘이 같은 역할
	staticMember = 'c'; //둘이 같은 역할
}

void Static::outStatic()
{
	std::cout << staticMember;
}

void Static::inStatic(char item)
{
	staticMember = item;
}