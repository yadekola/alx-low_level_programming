#include <stdio.h>
#include "main.h"

/**
* _puts - For printing strings
* @str: Represents strings
*/

void _puts(char *str)

{
	while (*str)
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
