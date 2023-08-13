#include <stdio.h>
#include "main.h"

/**
 * print_hundreds - print triple digites
 * @result: times table cell result
 * @i: times table row multiplier
 * @n: multiplication table length
 */
void print_hundreds(int result, int i, int n)
{
	int ones = 0, tens = 0, hundreds = 0;

	while (result)
	{
		ones++;
		if (ones > 9)
		{
			tens += 1;
			ones = 0;
		}
		if (tens > 9)
		{
			hundreds += 1;
			tens = 0;
		}
		result--;
	}

	if (i <= n)
		_putchar(' ');
	_putchar(48 + hundreds);
	_putchar(48 + tens);
	_putchar(48 + ones);
	if (i < n)
		_putchar(',');
}

/**
 * print_tens - print double digites
 * @result: times table cell result
 * @i: times table row multiplier
 * @n: multiplication table length
*/
void print_tens(int result, int i, int n)
{
	int ones = 0, tens = 0;

	while (result)
	{
		ones++;
		if (ones > 9)
		{
			tens += 1;
			ones = 0;
		}
		result--;
	}

	if (i <= n)
	{
		_putchar(' ');
		_putchar(' ');
	}
	_putchar(48 + tens);
	_putchar(48 + ones);
	if (i < n)
	{
		_putchar(',');
	}
}

/**
 * print_ones - print single digites
 * @result: times table cell result
 * @i: times table row multiplier
 * @n: multiplication table length
*/
void print_ones(int result, int i, int n)
{
	if (i > 0 && i <= n)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar(48 + result);
	if (i < n)
	{
		_putchar(',');
	}
}

/**
 * print_times_table - print the n times table, starting with 0
 * @n: multiplication table length
*/
void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
	{
		return;
	}
	j = 0;
	while (j <= n)
	{
		i = 0;
		while (i <= n)
		{
			result = i * j;
			if (result > 99)
				print_hundreds(result, i, n);
			else if (result > 9)
				print_tens(result, i, n);
			else
				print_ones(result, i, n);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
