#include "main.h"

/**
 * print_last_digit - function that prints last digit of a number
 * @y: last digit number result
 * Return: value of last digit
 */
int print_last_digit(int y)
{
	int x;

	x  = (y % 10);

	_putchar(x + '0')

	return (x);
}
