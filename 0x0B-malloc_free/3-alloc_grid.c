#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int **alloc_grid(int width, int height)
{
	int ***grid;
	int **box[width][height];
	int i, j;

	grid = box;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			box[i][j] = malloc(height * width * sizeof(int *));
			box[i][j] = 0;
		}
	}



	return (grid);
}

int main()
{
	alloc_grid(2,2);
	return (0);
}
