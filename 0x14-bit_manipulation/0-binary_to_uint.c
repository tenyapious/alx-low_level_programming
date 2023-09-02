#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert binary to unsgined int
 * @b: string as a binary
 *
 * Return: unsigned int form of the binary
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i, n = 1, sum = 0;

	if (b == NULL)
		return (0);

	len = 0;
	while (b[len] != '\0')
	{
		if (!(b[len] - '0' == 0 || b[len] - '0' == 1))
			return (0);
		len++;
	}

	i = len;
	i--;
	while (len--)
	{
		if (i == len)
		{
			if (b[len] - '0')
				sum += 1;
		}
		else
		{
			n *= 2;
			if (b[len] - '0')
				sum += n;
		}
	}
	return (sum);
}
