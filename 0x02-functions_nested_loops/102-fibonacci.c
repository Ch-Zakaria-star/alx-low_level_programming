#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: 0.
 */

int fib(void) {
int a = 0;
int b = 1;
int x = 50;
int c;
int i;

for (i = 0; i < x-1; i++) 
{
c = b;
b += a;
a = c;
printf("%ld", b);

if (i == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
