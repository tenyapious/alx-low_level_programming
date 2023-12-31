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
 * get_endianness - determine how bytes are ordered in memory
 *
 * Return: 0, if big endian, or 1 if small endian
*/
int get_endianness(void)
{
	int n = 256;

	if (get_bit(n, 8) == 1)
		return (1);
	else
		return (0);
}
