#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description:prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int n;
	int x = 0;

	while (n < 10)
	{
		x = 0
		while (x < 10)
		{
			if (x != &&x < n)
			{
				putchar('0' + x);
				putchar('0' + n);

			if (x + n != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}
		x++;
	}
	n++;

	putchar('\n');
	return (0);
}
