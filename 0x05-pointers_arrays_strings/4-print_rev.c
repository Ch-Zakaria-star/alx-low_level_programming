#include "main.h"

/**
* print_rev - prints a string in reverse
* @s: string to be printd.
*/

void print_rev(char *s)
{
int i = 0;
while (s[i])
{
i++;
}
while (--i >= 0)
{
_putchar(s[i]);
}
_putchar('\n');
}
