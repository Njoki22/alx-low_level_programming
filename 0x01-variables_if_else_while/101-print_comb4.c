#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of three digits
 * 		in ascending order
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int x;
	int y = 0;
	while (y < 10)
	{
		n = 0
		while (n < 10)
		{
			if (x != n && x < n && y != n && y < n)
			{
				putchar('0' + x);
				putchar('0' + y);
				putchar('0' + n);

				if (n + x + y != 18)
				{
					putchar(',');
					putchar( );
				}
			}
			x++;
		}
		y++:
	}
	n++;
	putchar('\n')
	return (0);
}
		

