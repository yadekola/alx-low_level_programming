#include <stdio.h>
#include "main.h"

/**
* _strcpy - Used to copy a string from Destination to Source
* @dest: Destination - buffer
* @src: Source
* Return: Returns a pointer to the destination
*/

char *_strcpy(char *dest, char *src)

{
	int start = 0;

	for (start = 0; src[start] != '\0'; start++)
	{
		dest[start] = src[start];
	}

	dest[start] = '\0';

	return (dest);
}
