#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: string to be searched
 * @c: character to be searched in str
 * Return: number of characters
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'  ; i++)
{
if (s[i] == c)
{
return (s + i);
}
}

return ('\0');
}
