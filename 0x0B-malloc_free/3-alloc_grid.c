#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - create 2d array with malloc
 * @width: width of the array
 * @height: height of the array
 *
 * Return: 2d array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	arr = malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
