#include <stdio.h>

/**
 * main - Entry point
 * Description: prints lowercase alphabetsin reverse ordeir
 *
 * Return: 0
*/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
