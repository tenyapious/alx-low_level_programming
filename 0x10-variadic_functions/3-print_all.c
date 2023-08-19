#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print values of diff data type
 * @format: formatting string
 */
void print_all(const char * const format, ...)
{
	int i = 0, separate = 0;
	char *separator = "", *str;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (separate)
			separator = ", ";
		switch (format[i])
		{
			case 'c':
				printf("%s", separator);
				printf("%c", va_arg(args, int));
				separate = 1;
				break;
			case 'i':
				printf("%s", separator);
				printf("%d", va_arg(args, int));
				separate = 1;
				break;
			case 'f':
				printf("%s", separator);
				printf("%.2f", va_arg(args, double));
				separate = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", separator);
				printf("%s", str);
				separate = 1;
				break;
		}
		i++;
	}
	va_end(args);

	printf("\n");
}
