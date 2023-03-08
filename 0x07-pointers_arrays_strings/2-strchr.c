#include "main.h"
#include <stddef.h>
/**
 * _strchr - To locate character
 * @s: This is the input string
 * @c: This is the character
 * Return: Return NULL when no character
 */
char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);
		if (*s == 0)
			return (NULL);
	}
	return (NULL);
}
