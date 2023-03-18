#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print all combinations possible of two digits
 *
 * Return: 0 if it's true
 */

int main(void)
{
int i;
int j;
int k;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
for (k = '0'; k <= '9'; k++)
{
if (i < j && j < k)
{
putchar(i);
putchar(j);
putchar(k);
if (!(i == '7' && j == '8' && k == '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
