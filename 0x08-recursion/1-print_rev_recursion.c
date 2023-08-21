#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - print string in reverse
 * @s: string to print out
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
