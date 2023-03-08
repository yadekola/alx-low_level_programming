#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum the diognal
 * @a: This is the array to sum
 * @size: Length of the array
 */

void print_diagsums(int *a, int size)
{
	int num1, num2, i, total1, total2;

	total1 = total2 = 0;
	num1 = 0;
	num2 = size - 1;
	for (i = 0; i < size; i++)
	{
		total1 += *(a + i * size + num1);
		total2 += *(a + i * size + num2);
		num1 += 1;
		num2 -= 1;
	}
	printf("%d, %d\n", total1, total2);
}
