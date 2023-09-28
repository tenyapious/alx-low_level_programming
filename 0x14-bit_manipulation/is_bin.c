#include <stdio.h>
#include "main.h"

/**
 * is_bin - check if a string is binary
 * @b: string
 *
 * Return: 1 or 0 if not
*/
int is_bin(const char *b)
{
	int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	return (1);
}
