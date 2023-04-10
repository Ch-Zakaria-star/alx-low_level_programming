#include "main.h"

/**
 *_strstr - find the first occurence
 *@haystack: string
 *@needle: string
 *
 *Return: the pointer to the first occurence
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
