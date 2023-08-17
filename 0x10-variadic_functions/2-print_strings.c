#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print a list of strings separated by a string
 * @separator: the string separator
 * @n: the length of the list
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *temp;
	va_list strings;

	va_start(strings, n);

	while (i < n)
	{
		temp = va_arg(strings, char*);

		if (temp == NULL)
			printf("(nil)");
		else
			printf("%s", temp);

		if (separator != NULL)
			if (i + 1 < n)
				printf("%s", separator);
		i++;
	}

	va_end(strings);

	printf("\n");
}
