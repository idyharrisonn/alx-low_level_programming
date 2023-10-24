#include "variadic_functions.h"
/**
 * print_all - print any oter arguement provided
 * to function
 * @format: the arguement specifier
 * Return: any arguement given based on format specifier
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str;
	va_list spc;

	va_start(spc, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(spc, int));
				break;
			case 'f':
				printf("%f", va_arg(spc, double));
				break;
			case 'c':
				printf("%c", va_arg(spc, int));
				break;
			case 's':
				str = va_arg(spc, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		if (i != 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(spc);
}
