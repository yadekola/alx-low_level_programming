#include "main.h"
#include <stdio.h>

/**
* _strncpy - To copy content of source file to destination file
* @dest: Where the copied contents are temporarily held
* @src: The source
* @n: The number of bytes to handle
* Return: Returns a pointer to the required string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
