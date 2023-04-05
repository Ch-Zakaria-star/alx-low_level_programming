#include "main.h"

/**
 * _sqrt_recursion - finds sqrt in recursion
 * Return: square root value
 * @n: integer value
 */

int _sqrt_recursion(int n)
{
return (_sqrt_rec(n, 1));
}

/**
 * _sqrt_rec - Square root of a number
 * @n: int type
 * @x: int type
 * Return: x in square value
 **/

int _sqrt_rec(int n, int x)
{
if (n <= 0)
{
return (-1);
}
if (x * x > n)
{
return (-1);
}
if (n == x * x)
{
return (x);
}
return (_sqrt_rec(n, x + 1));
}
