#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grip of integers
 * @grid: the address of the two dimention
 * @width: with of grid
 * @height: height of the grid
 *
 * Return: nothing.
 */

void print_grid(int **grid, int width, int height)
{
	int i;
	int j;

	j = 0;
	while (j < height)
	{
		i = 0;
		while (i < width)
		{
			printf("%d ", grid[j][i]);
			i++;
		}
		printf("\n");
		j++;
	}
}

/**
 * main - check the code for ALX School students
 *
 * Return: aAlways 0.
 */

int main(void)
{
	int **grid;

	grid = alloc_grid(6, 4);
	if (grid == NULL)
	{
		return (1);
	}

	print_grid(grid, 6, 4);
	printf("\n");
	grid[0][3] = 98;
	grid[3][4] = 402;
	print_grid(grid, 6, 4);

	return (0);
}
