#include "main.h"

/**
 * print_triangle - print a triangle of a size
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
int m, n, o;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (m = 0; m < size; m++)
{
for (n = size - m; n > 1; n--)
{
_putchar(32);
}
for (o = 0; o <= m; o++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
