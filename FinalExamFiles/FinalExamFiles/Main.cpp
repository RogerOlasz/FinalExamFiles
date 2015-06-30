#include "P2String.h"
#include <iostream>

int Fibonacci(const int index)
{
	if (index < 2)
	{
		return index;
	}

	return Fibonacci(index-1) + Fibonacci(index-2);
}

int main(int argv, char** argc)
{
	unsigned int a = 0;

	a = Fibonacci(6);

	printf("%d", a);

	getchar();

	return 0;
}