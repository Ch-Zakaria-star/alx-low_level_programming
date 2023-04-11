#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy
 * @str: pointer to string
 * Return: pointer
 */

char *_strdup(char *str)
{
char *s;
unsigned int size = 0, i;

if (str == NULL)
{
return (NULL);
}

for (i = 0; str[i] != '\0'; i++)
{
size++;
}
s = malloc(sizeof(char) * (size + 1));

if (s == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
s[i] = str[i];
s[size] = '\0';
return (s);
}
