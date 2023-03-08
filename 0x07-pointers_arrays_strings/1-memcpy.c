#include "main.h"

/**
* _memcpy - Just to copy memory location or area
* @dest: The output location or filr
* @src: Source of data, could be user input or read from a file
* @n: Total number of bytes to be copied
* Return: The content copied from source
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int tracker;
	char *P_dest = dest;
	char *P_src = src;

	for (tracker = 0; tracker < n; tracker++)
	{
		*P_dest++ = *P_src++;
	}

	return (dest);
}
