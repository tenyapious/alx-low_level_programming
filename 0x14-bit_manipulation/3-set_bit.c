#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: int
 * @index: index
 *
 * Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if ((sizeof(*n) * 8) < index)
		return (-1);

	i = 1;
	while (index--)
		i *= 2;

	*n = *n | i;

	return (1);
}
