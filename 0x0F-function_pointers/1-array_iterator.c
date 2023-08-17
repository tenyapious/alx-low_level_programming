#include <stdio.h>

/**
 * array_iterator - call a fn on an array of element
 * @array: the array
 * @size: size of the array
 * @action: the function to call
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
