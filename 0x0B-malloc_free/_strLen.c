#include <stdio.h>

/**
 * _strLen - count string char
 * @str: string to count
 *
 * Return: length of string
 */
int _strLen(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	return (j);
}
