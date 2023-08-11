#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of int
 * @min: min int
 * @max: max int
 *
 * Return: pointer to the created array
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	if (min == 0)
	{
		max++;
	}

	ptr =  malloc(max * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}

	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}

	return (ptr);
}
