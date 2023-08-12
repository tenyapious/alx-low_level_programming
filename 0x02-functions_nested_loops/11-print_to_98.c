#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - print from n to 98
 * @n: the starting point
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
		while (n <= 98)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
			n++;
		}
	else if (n > 98)
		while (n > 98)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
			n--;
		}
	printf("\n");
}
