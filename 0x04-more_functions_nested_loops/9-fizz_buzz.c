#include <stdio.h>

/**
 * main - main function
 * Return: 0;
 */
int main (void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s", "FIZZBUZZ");
		else if (i % 3 == 0)
			printf("%s", "FIZZ");
		else if (i % 5 == 0)
			printf("%s", "BUZZ");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
 
