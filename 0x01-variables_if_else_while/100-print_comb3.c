#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description:prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int x;
	int n = 0;

	for (x = 0; x < 10; x++)
	{
		n = 0;
		for  (n = 0; n < 10; n++)
		{
			if (n != x && x < 10)
			{
				putchar('0' + n);
				putchar('0' + x);

				if (x + n != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
