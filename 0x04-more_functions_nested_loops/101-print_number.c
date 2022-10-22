#include "main.h"

/**
* print_number - This function prints an integer
* @n: represents integer
* Return: void
*/

void print_number(int n)
{
	unsigned int x, y, counter;

	if (n < 0)
	{
		_putchar(45);
		x = n * -1;

	}
	else
	{
		x = n;
	}

	y = x;
	counter = 1;

	while (y > 9)
	{
		y = y / 10;
		counter = counter * 10;
	}

	for (; counter >= 1; counter = counter / 10)
	{
		_putchar(((x / counter) % 10) + 48);
	}

}
