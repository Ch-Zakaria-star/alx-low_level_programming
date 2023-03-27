#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - generates random passwords
  * Return: 0
  */

int main(void)
{
int sum;
char r;

srand(time(NULL));
while (sum <= 2645)
{
r = rand() % 128;
sum += r;
putchar(r);
}
putchar(2772 - sum);

return (0);
}
