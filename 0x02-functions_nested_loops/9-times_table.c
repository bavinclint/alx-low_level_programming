#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int k;
	int j;
	int y;

	for (k = 0; k <= 9; k++)
	{
		for (j = 0; j <= 9; j++)
		{
			y = j * k;

			if (j == 0)
			{
				_putchar('0' + y);
			}
			else if (y < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + y);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(y / 10 + '0');
				_putchar(y % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
