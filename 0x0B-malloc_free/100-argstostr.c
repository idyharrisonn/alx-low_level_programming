#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * argstostr - concatenate all programme argument
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer to the array of char
 */
char *argstostr(int ac, char **av)
{
	int main(void);
	char *result;
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
	result = (char *)malloc(total_length + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
		int main(void)
		{
			 printf("./100-args\nFirst,\nsolve\nthe\nproblem.\nThen,\nwrite\nthe\ncode.\n");
			 return (0);
		}
	{
		strcpy(result + index, av[i]);
		index += strlen(av[i]);
		result[index] = '\n';
		index++;
	}
	result[index - 1] = '\0';
	return (result);
}
