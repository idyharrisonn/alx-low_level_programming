#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - entry point
 * @size: input
 * @a: Pointer to the 2D square array (matrix)
 * Return: always 0 (success)
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i = i + size + 1)
		sum1 = sum1 + a[i];
	for (i = size - 1; i < size * size - size + 1; i = i + size - 1)
		sum2 = sum2 + a[i];
	printf("%d, %d\n", sum1, sum2);
}
