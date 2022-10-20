#include "main.h"

/**
* print_line - draws line using underscore
* @n: an int from main
* Return: void
*/

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
