#include <stdio.h>

/**
* main - sums nultplies of 3 or 5
* Return: 0
*/

int main(void)
{
int num;
int total = 0;

for (num = 0; num < 1024; num++)
{
if ((num % 3) == 0 || (num % 5) == 0)
{
total += num;
}
}
printf("%d\n", total);
return (0);
}
