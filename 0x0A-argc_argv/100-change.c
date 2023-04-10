#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * _isnumber - checks if string is a number
 * @s: string
 *
 * Return: On success 1.
 * If not a number, 0 is returned.
 */

int main(int argc, char *argv[])
{
int min, r;

r = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
min = atoi(argv[1]);
if (value < 0)
{
printf("%d\n", 0);
return (0);
}
if (min % 25 >= 0)
{
r += min / 25;
value = value % 25;
}
if (min % 10 >= 0)
{
r += min / 10;
min = min % 10;
}
if (min % 5 >= 0)
{
r += min / 5;
min = min % 5;
}
if (min % 2 >= 0)
{
r += min / 2;
min = min % 2;
}
if (min % 1 >= 0)
{
r += min / 1;
}
printf("%d\n", r);

return (0);
}
