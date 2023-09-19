#include "main.h"
/**
 * _strcpy - copies string from source to destination
 * @dest: destination buffer where the string is copied to
 * @src: source string to be copied
 * Return: A pointer to the destination buffer 'dest'
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
