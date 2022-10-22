#include <stdio.h>

/**
* main - checks prime factors
* Return: Always 0
*/

int main(void)
{
	long int number, x;

	number = 612852475143;

	for (x = 2; x <= number; x++)
	{
		if (number % x == 0)
		{
			number /= x;

			x--;
		}
	}

	printf("%ld\n", x);

	return (0);
}
