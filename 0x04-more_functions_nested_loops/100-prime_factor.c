#include<stdio.h>
#include<math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
long n;
int i;
int fac;

fac = -1;
n = 612852475143;

while (n % 2 == 0)
{
fac = 2;
n = n / 2;
}
for (i = 3; i <= sqrt(n); i = i + 2)
{
while (n % i == 0)
{
fac = i;
n = n / i;
}
}
if (n > 2)
{
fac = n;
}
printf("%d\n", fac);
return (0);
}
