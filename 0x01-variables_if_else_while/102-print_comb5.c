#include <stdio.h>
/**
 * main - main fuction
 *
 * Return: always 0
 */
int main(void)
{
	int num1, num2, num3, num4;

	for (num1 = 0; num1 <= 9; num1++)
    {
	    for (num2 = 0; num2 <= 9; num2++)
	{
		for (num3 = 0; num3 <= 9; num3++)
	    {
		    for (num4 = 0; num4 <= 9; num4++)
		{
			if ((num3 + num4 > num1 + num2 && num3 >= num1) || num1 < num3)
		    {
			    putchar(num1 + '0');
			putchar(num2 + '0');
			putchar(' ');
			putchar(num3 + '0');
			putchar(num4 + '0');
			if (num1 + num2 + num3 + num4 == 17 && num1 == 9)
			{
				break;
			    else
			{
				putchar(',');
			    putchar(' ')
			}
		    }
		}
	    }
	}
    }
    return (0);
}
