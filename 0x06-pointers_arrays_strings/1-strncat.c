#include <stdio.h>
#include "main.h"

/**
* _strncat - Used to concatnate strings
* @dest: Where to append the string to
* @src: The receiving doc
* @n: The number of bytes from passed in doc
* Return: Returns passed in details
*/

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
