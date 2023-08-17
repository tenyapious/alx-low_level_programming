#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum a list on numbers
 * @n: the length of the list
 *
 * Return: the sum of the numbers
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list numbers;

	if (n == 0)
		return (0);

	va_start(numbers, n);

	while (i < n)
	{
		sum += va_arg(numbers, int);
		i++;
	}

	va_end(numbers);

	return (sum);
}

