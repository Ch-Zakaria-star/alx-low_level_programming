#include "main.h"

/**
 *_strlen_recursion - length of a string
 *@s: pointer block of memory to fill
 *Return: strlen_recursion
 */

int _strlen_recursion(char *s)
{
if (!*s)
{
return (0);
}
return (1 + _strlen_recursion(++s));
}
