#include <stdio.h>
#include "main.h"

/**
 * _strlen - count length of string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[++i] != '\0')
		;

	return (i);
}

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

/**
 * binary_to_uint - convert binary number to an unsigned int
 * @b: string
 *
 * Return: the converted number, or 0 if b is NULL or b is not binary
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int n = 2, sum = 0;

	if (b == NULL || is_bin(b) == 0)
		return (0);

	len = _strlen(b) - 1;

	if (b[len] == '1')
		sum = 1;

	while (--len >= 0)
	{
		if (b[len] == '1')
			sum += n;
		n *= 2;
	}

	return (sum);
}
