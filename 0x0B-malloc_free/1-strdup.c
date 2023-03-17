#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to new space
 *@str: string to be duplicated
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)

{
	char *stroriginal = NULL;
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	stroriginal = (char *)malloc(n + 1 * sizeof(char));
	if (stroriginal != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			stroriginal[i] = str[i];
	} else
	{
		return (NULL);
	}
	stroriginal[i] = '\0';
	return (stroriginal);
}
