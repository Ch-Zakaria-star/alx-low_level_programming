#include <stdio.h>

/**
 * main - main block
 * 
 * Return: 0
 */

int main(void)
{
int i;
unsigned long a = 0, b = 1, d;

for (i = 0; i < 50; i++)
{
d = a + b;
printf("%lu", d);

a = b;
b = d;

if (i == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
