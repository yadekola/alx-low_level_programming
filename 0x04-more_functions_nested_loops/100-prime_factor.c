#include <stdio.h>
#include <math.h>

/**
* main - finds the largest prime
* Author - Chinweike Okwuduche
* Return: 0 if no errors
*/

int main(void)
{
	unsigned long i = 2;
	unsigned long biggest = 0;
	unsigned long num = 612852475143;

	while (num > i)
	{
		while (num % i == 0)
		{
			if (i > biggest)
				biggest = i;
			num = num / i;
		}
		i++;
	}
	printf("%lu\n", biggest);
	return (0);
}
