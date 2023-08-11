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
	int arrLen;

	if (min > max)
	{
		return (NULL);
	}
	else if (min == max)
	{
		arrLen = 2;
	}
	else if (min == 0)
	{
		arrLen = max + 1;
	}
	else
	{
		arrLen = max;
	}

	ptr =  malloc(arrLen * sizeof(int));
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
