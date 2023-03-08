#include "main.h"

/**
* _memset - Function tofill memory with constants
* @s: This represents the output
* @b: The entered set of strings
* @n: The volume of bytes
* Return: Pointer to a string pointer
*/

char *_memset(char *s, char b, unsigned int n)

{

	unsigned int tracker;

	for (tracker = 0; tracker < n; tracker++)
	{
		s[tracker] = b;
	}

	return (s);
}
