#include "main.h"

/**
 * _strstr - Locating a substring
 * @needle: Occurance to find
 * @haystack: String to search
 * Return: Pointer
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
