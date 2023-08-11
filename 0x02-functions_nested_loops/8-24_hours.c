#include <stdio.h>
#include "main.h"

/**
 * print_cur_time - print time
 * @timeArr: array of the time
 */
void print_cur_time(int *timeArr[])
{
	_putchar(*timeArr[0] + 48);
	_putchar(*timeArr[1] + 48);
	_putchar(':');
	_putchar(*timeArr[2] + 48);
	_putchar(*timeArr[3] + 48);
	_putchar('\n');
}

/**
 * jack_bauer - print time
 */
void jack_bauer(void)
{
	int m1 = 0, m2 = 0;
	int s1 = 0, s2 = 0;
	int *time[4];

	time[0] = &m2;
	time[1] = &m1;
	time[2] = &s2;
	time[3] = &s1;

	while (m2 <= 2)
	{
		m1 = 0;
		while (m1 <= 3)
		{
			s2 = 0;
			while (s2 <= 5)
			{
				s1 = 0;
				while (s1 <= 9)
				{
					time[3] = &s1;
					print_cur_time(time);
					s1++;
				}
				s2++;
			}
			m1++;
		}
		m2++;
	}
}
