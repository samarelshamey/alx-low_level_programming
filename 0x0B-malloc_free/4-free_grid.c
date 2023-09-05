#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function to free memory
 *
 * @grid: two dimensional grid
 *
 * @height: height
 *
 * Return: nothing
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
