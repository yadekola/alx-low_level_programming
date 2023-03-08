#include "main.h"

/**
 * factorial - Function that gets factorial of n
 * instead of using for loop iteration
 * @n: Represents integer
 * Return: 1 when successful -1 when otherwise
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
