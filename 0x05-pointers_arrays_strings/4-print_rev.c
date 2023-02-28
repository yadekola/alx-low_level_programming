#include <stdio.h>
#include "main.h"

/**
* print_rev - Printing strings in reverse order
* @s: Strings that needs reversing
*/

void print_rev(char *s)

{
	int len = 0;
	int r = 0;

	while (s[r++])
	{
		len++;
	}

	for (r = len - 1; r >= 0; r--)
	{
		_putchar(s[r]);
	}

	_putchar('\n');
}
