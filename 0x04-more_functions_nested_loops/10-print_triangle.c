#include "main.h"

/**
 * print_triangle - print a triangle, using #
 * @size: size of triangle
 */

void print_triangle(int size)
{
	if (size <= o)
	{
		_putchar('\n');
		return;
	}
	for (int i = 1; i <= size; i++)
	{
		for (int j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
