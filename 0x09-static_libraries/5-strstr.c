#include "main.h"
#ifndef NULL
#define NULL ((void *)0)
#endif

/**
 * _strstr - entry point
 * @haystack: input string
 * @needle: substring to search for
 * Return: pointer to the first occurrence of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)

	{
	char *one = haystack;
	char *two = needle;

	while (*one == *two && *two != '\0')
	{
	one++;
	two++;
	}
	if (*two == '\0')
	return (haystack);
	}
	return (NULL);
}
