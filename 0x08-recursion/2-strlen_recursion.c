#include "main.h"

/**
 * _strlen_recursion - Function that returns Length of a String
 * @s: Stands for string
 * Return: Always 0 when all went well.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
