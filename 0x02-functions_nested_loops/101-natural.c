#include "main.h"

/**
* main - sums nultplies of 3 or 5
* Return: 0
*/

int main(void)
{
int i;
int sum = 0;

for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum += i;
}

_putchar(sum);

return (0);
}
