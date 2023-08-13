#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the first 50 Fibonacci numbers.
 *
 * Return: Always 0.
*/
int main(void)
{
	unsigned long int i = 0, first = 0;
	unsigned long int second = 1, result = 0;

	while (i < 50)
	{
		result = first + second;

		if (i < 49)
			printf("%ld, ", result);
		else
			printf("%ld\n", result);

		first = second;
		second = result;

		i++;
	}

	return (0);
}
