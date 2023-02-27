#include <stdio.h>
#include "main.h"

/**
* swap_int - swaps a and b values
* @a: first swap
* @b: second swap
* Return: void
*/

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
