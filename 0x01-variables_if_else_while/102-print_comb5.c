#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print all combinations possible of two two digits
 *
 * Return: 0 if it's true
 */

int main(void)
{
int i = '0';
int j = '0';
int k = '0';
int l = '0';
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
for (k = '0'; k <= '9'; k++)
{
for (l = '0'; l <= '9'; l++)
{
if ((i < k) && (j <= l))
{
putchar(i);
putchar(j);
putchar(' ');
putchar(k);
putchar(l);
if (!(i == '8' && j == '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
