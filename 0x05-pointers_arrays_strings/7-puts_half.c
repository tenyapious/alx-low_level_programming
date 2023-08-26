#include <stdio.h>
#include "main.h"

/**
 * str_len - get length of string
 * @str: string
 *
 * Return: length of string
*/
int str_len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * puts_half - prints half of a string
 * @str: the string
*/
void puts_half(char *str)
{
	int len;

	len = str_len(str);
	if (len % 2 == 1)
	{
		len /= 2;
		len++;
	}
	else
	{
		len /= 2;
	}

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
