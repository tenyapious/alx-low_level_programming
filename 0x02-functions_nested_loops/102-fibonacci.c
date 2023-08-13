#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the first 50 Fibonacci numbers.
 *
 * Return: Always 0.
*/
int main(void)
{
	int i = 0, first = 0, second = 1, result = 0;

	while (i < 50)
	{
		result = first + second;

		printf("%d\n", result);

		first = second;
		second = result;

		i++;
	}

	return (0);
}
