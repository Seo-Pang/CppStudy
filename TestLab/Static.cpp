#include "Static.h"

char Static::staticMember = '\0';

Static::Static()
{
	inStatic('a'); //���� ���� ����
	staticMember = 'c'; //���� ���� ����
}

void Static::outStatic()
{
	std::cout << staticMember;
}

void Static::inStatic(char item)
{
	staticMember = item;
}