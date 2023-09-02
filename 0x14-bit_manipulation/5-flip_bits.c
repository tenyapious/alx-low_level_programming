#include <stdio.h>
#include "main.h"

/**
 * get_bit - get value of bit at given index of an int
 * @n: given int
 * @index: given index
 *
 * Return: value of bit or -1
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
 * flip_bits - flip bits to go from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, len, count;

	len = sizeof(n) * 8;

	count = 0;
	i = 0;
	while (i < len)
	{
		if (get_bit(n, i) != get_bit(m, i))
			count++;
		i++;
	}
	return (count);
}
