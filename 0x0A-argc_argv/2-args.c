#include <stdio.h>
/**
 * main - print all arguement it receives
 * @argc: number of command line arguement
 * @argv: array that contains the program command line arg
 * Return: (0) when successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
