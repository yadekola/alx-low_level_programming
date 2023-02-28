#include <stdio.h>
#include "main.h"

/**
* puts_half - To print half of string
* @str: Set of strings that needs to be printed
*/

void puts_half(char *str)

{
	int g = 0;
	int len = 0;
	int h;

	while (str[g++])
	{
		len = len + 1;
	}

	if (len % 2 == 0)
	{
		h = len / 2;
	}
	else
	{
		h = (len + 1) / 2;
	}
	for (g = h; g < len; g = g + 1)
	{
		_putchar(str[g]);
	}

	_putchar('\n');

}
