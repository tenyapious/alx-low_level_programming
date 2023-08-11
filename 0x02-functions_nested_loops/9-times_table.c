#include <stdio.h>
#include "main.h"

/**
 * print_db - print double digites
 * @result: times table cell result
 * @i: times table row multiplier
 */
void print_db(int result, int i)
{
	int ones, tense;

	tense = 0;
	ones = 0;
	while (result)
	{
		ones++;
		if (ones > 9)
		{
			tense += 1;
			ones = 0;
		}
		result--;
	}

	if (i <= 9)
	{
		_putchar(' ');
	}
	_putchar(48 + tense);
	_putchar(48 + ones);
	if (i < 9)
	{
		_putchar(',');
	}

}

/**
 * times_table - print the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, result;

	j = 0;
	while (j <= 9)
	{
		i = 0;
		while (i <= 9)
		{
			result = i * j;
			if (result > 9)
			{
				print_db(result, i);
			} else
			{
				if (i <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(48 + result);
				if (i < 9)
				{
					_putchar(',');
				}
			}
			i++;
		}
		_putchar('\n');
		j++;
	}
}
