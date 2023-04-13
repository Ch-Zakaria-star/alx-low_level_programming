#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of bytes of s2 to copy
 *
 * Return: char pointer to newly allocated place in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int l1, i, e;
char *a;

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
s2 = "";
l1 = 0;
while (s1[l1])
l1++;

a = malloc(sizeof(*a) * l1 + n + 1);

if (a == NULL)
{
return (NULL);
}

for (i = 0, e = 0; i < (l1 + n); i++)
{
if (i < l1)
{
a[i] = s1[i];
}
else
{
a[i] = s2[e++];
}
}
a[i] = '\0';
return (a);
}
