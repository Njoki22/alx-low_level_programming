#include "main.h"

/**
 * print_last_digit - function that prints last digit of a number
 * @num: last digit number result
 * Return: value of last digit
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;
	_putchar("The last digit of %d is %d\n", num, last_digit);
	
	return (last_digit);
}
