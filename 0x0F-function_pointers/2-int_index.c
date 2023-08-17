#include <stdio.h>

/**
 * int_index - find a int in an array of ints
 * @array: the array of ints
 * @size: the size of the array
 * @cmp: the fn to check if the int is in the array
 *
 * Return: 1 if int is found or -1 otherwise
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}

	return (-1);
}
