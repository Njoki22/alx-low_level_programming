#include "main.h"

/**
 * _print_rev_recursion - function that prints a string
 * in reverse
 * @s: The string
 * Return: (void)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	while (*s)
	{
		_putchar(*s);
	}
	s--;
	_print_rev_recursion(s + 1);
}