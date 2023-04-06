#include "main.h"

/**
 * prime - detect if the input is prime
 * @n: input number
 * @x: iterator
 *
 * Return: x
 */

int prime(int n, int x)
{
if (x >= (n / 2))
return (1);

if (n % x == 0)
return (0);
x++;
x = prime(n, x);
return (x);
}

/**
 * is_prime_number - Entry point
 * @n: input number
 *
 * Return: p
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);
else
return (prime(n, 2));
}
