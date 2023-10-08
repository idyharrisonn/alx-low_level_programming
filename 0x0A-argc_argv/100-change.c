#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the minimum numbers of coin to make
 * a change for an amount
 * @argc: number of command line arg
 * @argv: command that holds the command line args
 * Return: (0) on success
 */
int main(int argc, char **argv)
{
	int cents = atoi(argv[1]);
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
		}
		else if (cents >= 5)
		{
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cents -= 2;
		}
		else if (cents >= 1)
		{
			cents -= 1;
		}
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
