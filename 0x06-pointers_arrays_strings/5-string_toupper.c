#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Converts lowercases to uppercases
 * @str: The string to be converted
 * Return: Returns a pointer to the converted string.
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
