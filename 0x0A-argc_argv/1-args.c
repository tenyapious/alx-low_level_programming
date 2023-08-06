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
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
