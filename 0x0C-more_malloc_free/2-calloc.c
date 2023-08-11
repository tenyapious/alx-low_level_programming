#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of array members
 * @size: size of memory to allocate
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (!nmemb || !size)
	{
		return (NULL);
	}

	ptr =  malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
