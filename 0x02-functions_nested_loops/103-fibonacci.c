#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the first 50 Fibonacci numbers.
 *
 * Return: Always 0.
*/
int main(void)
{
	unsigned long int first = 0, second = 1;
	unsigned long int result = 0, sum = 0;

	while (result <= 4000000)
	{
		result = first + second;

		if (result % 2 == 0)
			sum += result;

		first = second;
		second = result;
	}

	printf("%ld\n", sum);

	return (0);
}
