#include "main.h"
#include <stdio.h>

/**
* _strcmp - Compares given sets of strings
* @s1: Points to the 1st string
* @s2: Points to the second string
* Return: Returns according to the evaluation
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
