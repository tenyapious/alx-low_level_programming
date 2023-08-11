#include <stdio.h>
#include <stdlib.h>

/**
 * _arrLen - set array length
 * @min: min int
 * @max: max int
 *
 * Return: array length
 */
int _arrLen(int min, int max)
{
	int len;

	if (min == max)
	{
		len = 2;
	}
	else if (min == 0)
	{
		len = max + 1;
	}
	else
	{
		len = max;
	}

	return (len);
}

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
	arrLen = _arrLen(min, max);

	ptr =  malloc(arrLen * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}

	if (min == max)
	{
		ptr[0] = min;
		ptr[1] = max;
	}
	else
	{
		while (min <= max)
		{
			ptr[i] = min;
			min++;
			i++;
		}
	}

	return (ptr);
}
