#include <stdio.h>

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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
