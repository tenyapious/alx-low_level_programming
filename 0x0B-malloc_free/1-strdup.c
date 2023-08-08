#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - makes a copy of a given string
 * @str: given string
 *
 * Return: a pointer to the copied string
 */
char *_strdup(char *str)
{
	char *strCpy;
	int strLen = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[strLen] != '\0')
	{
		strLen++;
	}
	strLen++;

	strCpy = malloc(strLen * sizeof(char));
	if (strCpy == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}

	strLen = 0;
	while (str[strLen] != '\0')
	{
		strCpy[strLen] = str[strLen];
		strLen++;
	}
	strCpy[strLen] = '\0';

	return (strCpy);
}
