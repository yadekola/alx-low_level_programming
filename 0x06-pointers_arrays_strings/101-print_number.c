#include "main.h"

/**
* print_number - To print an integer
* @n: Set or list of integers to be printed
*/

void print_number(int n)
{
	unsigned int fig = n;

	if (n < 0)
	{
		_putchar('-');
		fig = -fig;
	}

	if ((fig / 10) > 0)
		print_number(fig / 10);

	_putchar((fig % 10) + '0');
}
