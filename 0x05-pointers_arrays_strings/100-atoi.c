#include "main.h"

/**
 * _atoi - String Converter
 * @s: The string that needs to be converted.
 * Return: Converted integer
 */

int _atoi(char *s)

{
	int converter = 1;
	unsigned int n = 0;

	do {
		if (*s == '-')
			converter = converter * -1;

		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');

		else if (n > 0)
			break;

	} while (*s++);

	return (n * converter);
}
