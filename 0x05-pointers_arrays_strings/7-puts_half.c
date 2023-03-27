#include "main.h"

/**
 *puts_half - prints half of a character
 *@str: holds characters to be printed
 */

void puts_half(char *str)
{
int i = 0;
while (str[i])
{
i++;
}
i = (i - 1) / 2;
while (str[++i])
{
_putchar(str[i]);
}
_putchar('\n');
}
