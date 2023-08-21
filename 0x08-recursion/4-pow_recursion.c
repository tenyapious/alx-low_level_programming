#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - compute the exponential value of a number
 * @x: the number
 * @y: the exponent
 *
 * Return: the result
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
