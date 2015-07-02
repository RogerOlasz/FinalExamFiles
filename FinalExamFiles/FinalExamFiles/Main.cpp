#include "Tree.h"
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
	Tree<char> tree1('1');

	tree1.Add('2', '1');
	tree1.Add('3', '1');
	tree1.Add('4', '1');
	tree1.Add('5', '2');
	tree1.Add('6', '2');
	tree1.Add('7', '3');
	tree1.Add('8', '4');
	tree1.Add('9', '4');
	tree1.Add('10', '4');
	tree1.Add('11', '6');

	DList<TreeNode<char>*> check_list;
	tree1.WidthIterative(&check_list);

	check_list.Info();

	getchar();

	return 0;
}