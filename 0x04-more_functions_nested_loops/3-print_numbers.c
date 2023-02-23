#include "main.h"

/**
 * print_numbers - prints the numbers, 0 through 9
 * followed by new line
 */
void print_numbers(void)
{
	c = 0;
	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}

	_putchar('\n');
}
