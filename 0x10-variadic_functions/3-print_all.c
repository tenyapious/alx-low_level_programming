#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print values of diff data type
 * @format: formatting string
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *separator = ", ";
	char *str;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i + 1] == '\0')
			separator = "";
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				printf("%s", separator);
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				printf("%s", separator);
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				printf("%s", separator);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				printf("%s", separator);
				break;
		}
		i++;
	}
	va_end(args);

	printf("\n");

}
