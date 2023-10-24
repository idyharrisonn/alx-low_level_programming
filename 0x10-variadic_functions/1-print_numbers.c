#include "variadic_functions.h"
/**
 * print_numbers - print integers
 * @seperator: string to be printed btwn numbers
 * @n: number of ints to print
 * Return: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i, arr;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		arr = va_arg(ptr, const unsigned int);
		printf("%d", arr);

		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(ptr);
}
