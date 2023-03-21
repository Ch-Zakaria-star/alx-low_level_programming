#include "main.h"

/**
 * times_table - prints the 9 times-table starting with 0
 *
 * Returns: void
 */

void times_table(void)
{
	int r, c, result;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c = 1; c <= 9; c++)
		{
			result = (r * c);
		if ((result / 10) > 0)
		{
			_putchar((result / 10) + '0');
		}
		else
		{
			_putchar(' ');
		}
			_putchar((result % 10) + '0');
		if (c < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
		_putchar('\n');
	}
}
