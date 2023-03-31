#include "main.h"
#include <string.h>

/**
 * *_strcat - function concatenate two strings
 * @dest: parameter pointer to a char
 * @src: parameter pointer to a char
 * Return: pointer of string dest
 */

char *_strcat(char *dest, char *src)
{
char *ret = dest;

while (*dest)
dest++;
while (*src)
*dest++ = *src++;
*dest = *src;
return (ret);
}
