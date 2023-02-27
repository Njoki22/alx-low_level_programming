#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: the string 
 * Return: The string of char *s in reverse
 */
void rev_string(char *s)
{
	int length, x, y;
	char r1, r2;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	x = length - 1;
	y = 0;

	while (x > y)
	{
		r1 = s[y];
		r2 = s[x];
		s[y] = r2;
		s[x] = r1;
		x--;
		y++;
	}
}
