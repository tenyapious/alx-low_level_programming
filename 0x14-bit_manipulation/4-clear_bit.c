#include <stdio.h>
#include <stdio.h>
#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: int
 * @index: index
 *
 * Return: value of a bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((sizeof(n) * 8) < index)
		return (-1);

	if ((n >> index) & 1)
		return (1);
	else
		return (0);
	return (-1);
}

/**
 * clear_bit - set the value of a bit to 0 at given index
 * @n: number
 * @index: index
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	int val;

	if ((sizeof(*n) * 8) < index)
		return (-1);

	val = get_bit(*n, index);

	i = 1;
	while (index--)
		i *= 2;

	if (val == -1)
		return (-1);
	else if (val)
		*n = *n ^ i;
	else
		*n = *n & i;

	return (1);
}
