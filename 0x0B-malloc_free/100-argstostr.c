#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _argStrLen - count string char
 * @ac: args length
 * @av args array
 *
 * Return: length of array string
 */
int _argStrLen(int ac, char **av)
{
	int i, j, len = 0;

	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
		}

		if (i > 1)
		{
			j++;
		}

		len += j;
	}
	len++;

	return (len);
}

/**
 * argstostr - concatenate args of a program
 * @ac: args length
 * @av: args array
 *
 * Return: concatenated str
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, argStrLen;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	argStrLen = _argStrLen(ac, av);

	str = malloc(argStrLen * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[k] = av[i][j];
			k++;
			j++;
		}

		if (i + 1 < ac)
		{
			str[k] = '\n';
			k++;
		}
	}
	str[k] = '\0';

	return (str);
}
