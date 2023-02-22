#include "main.h"

/**
 * times_table - prints the 9 times table, starting 0
 * @z: product of the multiplication
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)

	{
		for (b = 0; b < 10; b++)
		{
			z = x * y;
			if (y == 0)
			{
				_putchar(z + '0');
			}
				(z < 10 && y != 0);
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else if (z >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
