#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: is the number of times the character
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			_putchar('\n');
	
		else
			_putchar('\\');
	}
}