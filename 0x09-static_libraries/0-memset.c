#include "main.h"

/**
 * _memset - fills memory with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to s.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; n > 0 ; n--)
{
s[i] = b;
i++;
}
return (s);
}
