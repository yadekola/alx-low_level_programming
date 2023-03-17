#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function that concatenates arguments of my program
 * @ac: number of arguments to be concatenated
 * @av: input array of arguments
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int counter = 0;
	int i;
	int j = 0;
	int k = 0;
	char *ptr = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i][k] != '\0')
		{
			counter = counter + 1;
			k++;
		}
		counter++;
		k = 0;
	}

	counter++;
	ptr = malloc(counter * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{

		while (av[i][k] != '\0')
		{
			ptr[j++] = av[i][k];
			k++;
		}
		ptr[j++] = '\n';
		k = 0;
	}

	ptr[j] = '\0';

	return (ptr);
}
