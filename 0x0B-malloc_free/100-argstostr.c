#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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

/**
 * validateStr - check if string is not NULL
 * @str: the string
 *
 * Return: empty string if invalid else the same string
 */
char *validateStr(char *str)
{
	if (str == NULL)
	{
		return ("");
	}
	else
	{
		return (str);
	}
}

/**
 * alloc_mem - allocate memory for str concatenation
 * @temp: array of two str
 *
 * Return: pointer to allocated memory
 */
char *alloc_mem(char *temp[])
{
	char *str;
	int i, strLen = 0;

	for (i = 0; i < 2; i++)
	{
		strLen += _strLen(temp[i]);
	}
	strLen++;

	if (temp[0][0] != '\0')
	{
		strLen++;
	}

	str = malloc(strLen * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	return (str);
}

/**
 * str_concat - concatenate two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: a pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, strLen = 0;
	char *temp[2];

	temp[0] = validateStr(s1);
	temp[1]	= validateStr(s2);

	str = alloc_mem(temp);

	strLen = 0;
	for (i = 0; i < 2; i++)
	{
		j = 0;

		while (temp[i][j] != '\0')
		{
			str[strLen] = temp[i][j];
			strLen++;
			j++;
		}
		if (temp[0][0] != '\0' && i == 0)
		{
			str[strLen] = '\n';
			strLen++;
		}
	}
	str[strLen] = '\0';

	return (str);
}

/**
 * argstostr - concatenate all arguments
 * @ac: arguments count
 * @av: arguments array
 *
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *string = NULL;
	int i;

	for (i = 1; i < ac; i++)
	{
		string = str_concat(string, av[i]);
	}

	return (string);
}
