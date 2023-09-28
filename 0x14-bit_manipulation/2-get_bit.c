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
