#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 *@n: number to be checked
 * Return: 1 for positive num, -1 for negative num and zero for anything else
 */
int print_sign(int n)
{
	int n;
	{
		if (n > 0)
			_putchar(+);
			return (1);
	}
	{
		else if (n == 0)
			_putchar(0);
			return (0);
	}
	{
		else
			_putchar(-);
			return (-1);
	}
	return (0);
}
