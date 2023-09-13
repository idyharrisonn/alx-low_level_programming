#include "main.h"
#include <stdio.h>
/**
 * times_table - function to print multiplication table 1 to 10
 */
void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; i++)
		{
			result = i = j;

			if (j == 0)
				printf("%d, ", result);
			else
			{
				printf("%2d", result);
				if (j != 9)
					printf(",");
			}
		}
		printf("\n");
	}
}
