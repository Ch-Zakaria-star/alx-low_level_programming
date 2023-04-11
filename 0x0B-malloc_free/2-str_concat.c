#include "main.h"
# include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * Return: char pointer
 */

char *str_concat(char *s1, char *s2)
{
char *str;
int i = 0, j = 0, size = 0;

if (s1 != NULL)
for (; s1[i]; i++)
;
if (s2 != NULL)
for (; s2[j]; j++)
;

str = malloc(sizeof(char) * (i + j + 1));
if (str == NULL)
return (NULL);

while (size < i)
{
str[size] = s1[size];
size++;
}

while (size < i + j)
{
str[size] = s2[size - i];
size++;
}

str[size] = '\0';
return (str);
}
