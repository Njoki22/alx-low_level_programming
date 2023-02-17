#include <stdio.h>

/**
 * main - Entry point
 * Description: prints lowercase alphabetsin reverse ordeir
 *
 * Return: 0
*/ 
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
