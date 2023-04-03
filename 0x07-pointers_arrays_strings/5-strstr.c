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
while (*haystack)
{
char *src = haystack;
char *dest = needle;

while (*haystack && *dest && *haystack == *dest)
{
haystack++;
dest++;
}
if (!*dest)
return (src);
haystack = src + 1;
}
return (0);
}
