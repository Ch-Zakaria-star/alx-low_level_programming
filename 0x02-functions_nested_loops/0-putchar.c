#include "main.h"

/**
 * main - print -putchar
 *
 * Return: 0
 */

int main(void)
{
char s[7] = "_putchar";
int i;

for (i = 0; i < 8; i++)
{
_putchar(s[i]);
}
_putchar('\n');
return (0);
}
