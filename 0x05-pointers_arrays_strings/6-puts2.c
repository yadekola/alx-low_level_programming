#include <stdio.h>
#include "main.h"

/**
* puts2 - Prints a character at a time
* @str: String literals
*/

void puts2(char *str)

{
	int p = 0;
	int len = 0;

	while (str[p++])
	{
		len++;
	}

	for (p = 0; p < len; p = p + 2)
	{
		_putchar(str[p]);
	}

	_putchar('\n');
}
