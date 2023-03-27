#include "main.h"

/**
 * _puts - prints a string
 * @str: character of the string
 * Return: void
 */

void _puts(char *str)
{
int i;

for (i = 0; str[i]; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
