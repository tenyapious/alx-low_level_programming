#include <stdio.h>
#include "main.h"

/**
 * _strlen - count length of string
 * @s: string
 *
 * Return: length of string
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[++i] != '\0')
		;

	return (i);
}
