#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
char *a, *r;
int i, j, total;

if (av == NULL || ac == 0)
{
return (NULL);
}

for (i = 0, total = 0; i < ac; i++)
{
for (j = 0; *(*(av + i) + j) != '\0'; j++, total++)
;
total++;
}
total++;

a = malloc(total *sizeof(char));
if (a == NULL)
return (NULL);

r = a;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
*a = av[i][j];
a++;
}

*a = '\n';
a++;
}

return (r);
}
