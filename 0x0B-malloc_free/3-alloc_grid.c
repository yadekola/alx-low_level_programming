#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to 2D array
 *@width: Rows
 *@height: Columns
 * Return: a pointer to a 2D array
 */

int **alloc_grid(int width, int height)

{
	int **table;
	int i;
	int j;
	int l;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	table = (int **)malloc(height * sizeof(int *));
	if (table == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(table + i) = (int *)malloc(width * sizeof(int));
		if (*(table + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				p = table[i];
				free(p);
			}
			free(table);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (j = 0; j < width; j++)
		{
			table[l][j] = 0;
		}
	}
	return (table);
}
