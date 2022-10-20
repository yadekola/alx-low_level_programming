#include "main.h"

/**
* print_diagonal - prints a diagonal line with new line at the end
* @n: int from main
* AUTHOR: CHINWEIKE OKWUDUCHE
* Return: void.
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{

		for (j = n - i; j < n; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
