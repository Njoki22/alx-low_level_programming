#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: The string
 * Return: The string for char *s in reverse
 */
void print_rev(char *s)
{
	int length;
	int i = 0;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
