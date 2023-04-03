#include "main.h"

/**
 * _strspn - get length of a prefix substring
 * @s: string
 * @accept: bytes being compared
 * Description: finds number of bytes required to find accept
 * Return: bytes required to find accept
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j, spn = 0;

for (i = 0; s[i] >= '\0'; i++)
{
for (j = 0; accept[j] > '\0'; j++)
{
if (s[i] == accept[j])
{
spn++;
break;
}
}
if (accept[j] == '\0')
{
break;
}
}
return (spn);
}
