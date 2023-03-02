#include <stdio.h>
#include "main.h"

/**
* reverse_array - Reverses given set of array
* @a: The arrays to be reversed
* @n: The number of elements to be revered
*/

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
