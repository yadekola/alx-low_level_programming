#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Program to free allocated memory
 *@grid: Rows of table
 *@height: Columns
 * Return: a pointer to a 2D array
 */

void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
