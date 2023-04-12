#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimension grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: nothing.
 */

void print_grid(int **grid, int width, int height)
{
	int e;
	int f;

	f = 0;
	while (f < height)
	{
		e = 0;
		while (e < width)
		{
			printf("%d ", grid[f][e]);
			e++;
		}
		printf("\n");
		f++;
	}
}

/**
 * main - check the code for ALX School students
 *
 * Return: always 0
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
	free_grid(grid, 4);

	return (0);
}
