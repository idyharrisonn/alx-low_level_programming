#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenate all programme argument
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer to the array of char
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int index = 0;
	int i;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}
	char *result = (char *)malloc(total_length + ac - 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < ac; i++)
	{
		strcpy(result + index, av[i]);
		index += strlen(av[i]);
		result[index] = '\n';
		index++;
	}
	result[index - 1] = '\0';
	return (result);
}
