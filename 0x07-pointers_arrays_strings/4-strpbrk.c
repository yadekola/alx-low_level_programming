
#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: This is the input string
 * @accept: This is the string to locate
 * Return: Returns a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int position, tracker;

	for (position = 0; s[position] != '\0'; position++)
	{
		for (tracker = 0; accept[tracker] != '\0'; tracker++)
		{
			if (accept[tracker] == s[position])
			{
				return (&s[position]);
			}
		}
	}
	return (NULL);
}
