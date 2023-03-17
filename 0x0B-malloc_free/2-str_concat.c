#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Function that Concatnates two strings
 *@s1: string 1
 *@s2: string 2
 * Return: pointer should point to concatnated output
 */

char *str_concat(char *s1, char *s2)

{
	char *stroriginal = NULL;
	unsigned int i;
	int n1;
	int n2;
	int counter;

	counter = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		;
	stroriginal = (char *)malloc((n1 + n2 + 1) * sizeof(char));
	if (stroriginal == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		stroriginal[i] = s1[i];
	for (; s2[counter] != '\0'; i++)
	{
		stroriginal[i] = s2[counter];
		counter++;
	}
	return (stroriginal);
}
