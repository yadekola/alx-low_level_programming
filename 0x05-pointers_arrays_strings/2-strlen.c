#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strlen - Used to return lenght of a sring
* @str: Represents string
* Return: Lenght of string
*/

size_t _strlen(const char *str)

{
	size_t len = 0;

	while (*str++)
	{
		len++;
	}
	return (len);
}
