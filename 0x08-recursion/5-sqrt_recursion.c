#include "main.h"
/**
 * _sqrt_a - Recursively calculates the square root of a number using
 * using Herons method
 * @a: The number for which to calculate the square root
 * @b: The current approximation.
 * Return: square root or -1
 */
int _sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (_sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square
 * @n: the input number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_a(n, 0));
}
