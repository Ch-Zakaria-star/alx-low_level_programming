#include "main.h"

/**
 * _strncmp - compares two strings within b bytes.
 * @s1: string to check
 * @s2: string to check from
 * @b: number of bytes to check
 * Return: 0 if strings are the same
 * any other number if they are different.
 */

char *_strstr(char *haystack, char *needle)
{
char *bhaystack;
char *pneedle;

while (*haystack != '\0')
{
src = haystack;
sub = needle;

while (*haystack != '\0' && *sub != '\0' && *haystack == *sub)
{
haystack++;
sub++;
}
if (!*sub)
return (src);
haystack = src + 1;
}
return (0);
}
