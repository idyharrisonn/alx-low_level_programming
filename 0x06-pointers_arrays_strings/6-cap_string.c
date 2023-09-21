#include "main.h"
/**
 * cap_string - capitilizies each first char of a word
 * @str: the string input
 * Return: str which is the modified string
 */
char *cap_string(char *Str)
{
	int i, j;

	char c[] = {44, 59, 46, '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'};

	for (i = 0; Str[i] != '\0'; i++)
	{
		if (i == 0 && Str[i] >= 'a' && Str[i] <= 'z')
		{
			Str[i] = Str[i] - 32;
		}
		for (j = 0; c[j] != '\0'; j++)
		{
			if (c[j] == Str[i] && (Str[i + 1] >= 'a' && Str[i + 1] <= 'z'))
			{
				Str[i + 1] = Str[i + 1] - 32;
			}
		}
	}
	return (Str);
}
