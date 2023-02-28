#include <stdio.h>
#include "main.h"

/**
* print_array - This prints user entered arrays
* @a: Arrays
* @n: Total number of elements in an array
*/

void print_array(int *a, int n)

{
	int begin;

	for (begin = 0; begin < n; begin = begin + 1)
	{
		printf("%i", a[begin]);

		if (begin == n - 1)
		{
			continue;
		}
		printf(", ");
	}

	printf("\n");
}
