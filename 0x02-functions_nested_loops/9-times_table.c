#include "main.h"

/**
 * times_table - prints the 9 times-table starting with 0
 *
 * Returns: void
 */
void times_table(void)
{
int n;
int i;

for (n = 0; n <= 9; n++)
{
_putchar('0');
for (i = 1; i <= 9; i++)
{
int result = n * i;

_putchar(',');
_putchar(' ');
if (result <= 9)
{
_putchar(' ');
}
else
{
_putchar('0' + (result / 10));
_putchar('0' + (result % 10));
}
}
_putchar('\n');
}
}
