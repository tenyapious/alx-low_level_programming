#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print a list of numbers separated by a string
 * @separator: the number separator
 * @n: the length of the list
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list numbers;

	if (separator == NULL)
		return;

	va_start(numbers, n);

	while (i < n)
	{
		printf("%d", va_arg(numbers, int));
		if (i + 1 < n)
			printf("%s", separator);
		i++;
	}

	va_end(numbers);

	printf("\n");
}
