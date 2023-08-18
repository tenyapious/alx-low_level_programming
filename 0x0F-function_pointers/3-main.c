#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - perform maths operations
 * @ac: argument count
 * @av: argument array
 *
 * Return: always 0
*/
int main(int ac, char *av[])
{
	int num1, num2, answer;
	char *operator;

	if (ac != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = (int)atoi(av[1]);
	num2 = (int)atoi(av[3]);
	operator = av[2];

	if (!(!strcmp(operator, "+") ||
				!strcmp(operator, "-") ||
				!strcmp(operator, "*") ||
				!strcmp(operator, "/") ||
				!strcmp(operator, "%"))
	   ) {
		printf("Error\n");
		return (99);
	}

	if ((!strcmp(operator, "/") || !strcmp(operator, "%"))
			&& (num2 == 0))
	{
		printf("Error\n");
		return (100);
	}

	answer = get_op_func(operator)(num1, num2);

	printf("%d\n", answer);

	return (0);
}
