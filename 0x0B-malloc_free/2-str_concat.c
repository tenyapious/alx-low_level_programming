#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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

	temp[0] = s1;
	temp[1]	= s2;

	for (i = 0; i < 2; i++)
	{
		j = 0;
		while (temp[i][j] != '\0')
		{
			strLen++;
			j++;
		}
	}
	strLen++;

	str = malloc(strLen * sizeof(char));
	if (str == NULL)
	{
		printf("failed\n");
		return (NULL);
	}

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
	}
	str[strLen] = '\0';

	return (str);
}
