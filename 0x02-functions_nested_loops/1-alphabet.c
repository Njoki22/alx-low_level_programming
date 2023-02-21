#include "main.h"

/**
 * main - entry point
 * description: prints the alphabet, in lowercase, followed by a new line
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alphabet;

	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			
			_putchar(alphabet);
	}

	_putchar('\n');
	return (0);
}
