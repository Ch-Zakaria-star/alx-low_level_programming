#include "main.h"

/**
 * print_last_digit - last digit of a number
 * @n: compute a number
 * Return: 0
 */

int print_last_digit(int)
{
int r;

r = n % 10;
if (r < 0)
{
r = r * (-1);
}
_putchar('0' + r);
return (r);
}
