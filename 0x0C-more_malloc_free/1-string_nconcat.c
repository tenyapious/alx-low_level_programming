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
	return (str);
}


/**
 * string_nconcat - concatenate two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes of s2 to use
 *
 * Return: a pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, k, strLen = 0, strsLen = 0;
	char *temp[2];

	temp[0] = validateStr(s1);
	temp[1]	= validateStr(s2);

	for (i = 0; i < 2; i++)
	{

		strLen = _strLen(temp[i]);
		if (i == 1)
		{
			if (n >= strLen)
			{
				strsLen += strLen;
			} else
			{
				strsLen += n;
			}
		} else
		{
			strsLen += strLen;
		}
	}

	strsLen++;

	str = malloc(strsLen * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	k = 0;
	for (i = 0; i < 2; i++)
	{
		j = 0;
		if (i == 1)
		{
			if (n < strLen)
			{
				while (j < n)
				{
					str[k] = temp[i][j];
					k++;
					j++;
				}
			} else
			{
				while (temp[i][j] != '\0')
				{
					str[k] = temp[i][j];
					k++;
					j++;
				}
			}
		} else
		{
			while (temp[i][j] != '\0')
			{
				str[k] = temp[i][j];
				k++;
				j++;
			}
		}
	}
	str[k] = '\0';

	return (str);
}
