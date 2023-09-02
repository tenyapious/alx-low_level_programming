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
	if ((sizeof(n) * 8) < (index + 1))
		return (-1);

	if ((n >> index) > 0)
	{
		if ((n >> index) & 1)
			return (1);
		else
			return (0);
	}
	return (-1);
}
