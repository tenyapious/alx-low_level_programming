#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - allocate and fill memory with char
 * @size: size of the memory
 * @c: the char
 *
 * Return: a pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	char *strArr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	strArr = malloc(size * sizeof(char));

	if (strArr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		strArr[i] = c;
	}

	return (strArr);
}
