#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* countCoins - counts coins
* @num: money
*
* Return: number of coins
*/
int countCoins(int num)
{
	int coins = 0;

	while (num != 0)
	{
		if (num >= 25)
		{
			num = num - 25;
			coins++;
		}
		else if (num >= 10)
		{
			num = num - 10;
			coins++;
		}
		else if (num >= 5)
		{
			num = num - 5;
			coins++;
		}
		else if (num >= 2)
		{
			num = num - 2;
			coins++;
		}
		else if (num >= 1)
		{
			num = num - 1;
			coins++;
		}
	}
	return (coins);
}

/**
 * main - main function
 * @argc: command line argument count
 * @argv: array of command line arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;
	int num;
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = 0;

	while (argv[1][i] != '\0')
	{
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			return (0);
		}
		i++;
	}

	num = atoi(argv[1]);

	coins = countCoins(num);

	printf("%d\n", coins);

	return (0);
}
