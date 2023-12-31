#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main function
 * @argc: command line argument count
 * @argv: array of command line arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;
	int j;
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		j = 0;

		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		result += atoi(argv[i]);
	}

	printf("%d\n", result);

	return (0);
}
