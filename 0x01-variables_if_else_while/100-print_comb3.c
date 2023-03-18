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
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
if (i < j)
{
putchar(i);
putchar(j);
if (!(i == '8' && j == '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
