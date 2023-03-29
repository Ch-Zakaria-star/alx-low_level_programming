#include "main.h"
#include <string.h>

/**
 * *_strcat - function concatenate two strings
 * @dest: parameter pointer to a char
 * @src: parameter pointer to a char
 * Return: pointer of string dest
 */

char *_sctract(char *dest, char *src)
{
char *conq = dest;

while (*dest != '\0')
{
dest++;
}
while(*src != '\0)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (conq);
}
