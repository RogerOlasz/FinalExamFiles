#include "P2String.h"
#include <iostream>

int main(int argv, char** argc)
{
	P2String string_1("Hola Roger");

	string_1.Substitude('o', 'i');

	printf("%s", string_1.getString());

	getchar();

	return 0;
}