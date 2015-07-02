#include "P2String.h"
#include <iostream>

unsigned int Fibonacci(const unsigned int index)
{
	if (index < 2)
	{
		return index;
	}

	return Fibonacci(index-1) + Fibonacci(index-2);
}

unsigned int FibonacciIterative(unsigned int index)
{
	unsigned int curr_pos = 0;
	unsigned int fibo_num = 1, prev_fibo_num = 0, tmp;

	while (curr_pos != index)
	{
		tmp = fibo_num;
		fibo_num += prev_fibo_num;
		prev_fibo_num = tmp;

		curr_pos++;
	}
	return fibo_num;
}

int main(int argv, char** argc)
{
	unsigned int a = 0;

	a = Fibonacci(6);

	printf("%d", a);

	getchar();

	return 0;
}