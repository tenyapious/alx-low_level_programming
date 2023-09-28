#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	if ((n >> 1) == 0)
	{
		if (n & 1)
			_putchar(1 + '0');
		else
			_putchar(0 + '0');
		return;
	}
	print_binary(n >> 1);

	if (n & 1)
		_putchar(1 + '0');
	else
		_putchar(0 + '0');
}
