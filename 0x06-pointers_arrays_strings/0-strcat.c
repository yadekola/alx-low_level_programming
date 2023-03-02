#include <stdio.h>
#include "main.h"

/**
* _strcat - Contcatnates (i.e combines) strings
* @dest: Points to the destination
* @src: Source document
* Return: Returns the passed in details
*/

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
