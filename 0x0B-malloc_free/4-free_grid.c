#include "main.h"
#include <stdlib.h>
/**
 * free_grind - Entry point
 * @grid: the grid
 * @height: how tall
 * Description: naso
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
