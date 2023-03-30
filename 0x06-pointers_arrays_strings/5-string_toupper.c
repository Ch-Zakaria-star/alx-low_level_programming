#include "main.h"

/**
 *string_toupper - Changes all lowercase to uppercase
 * @c: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */

char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
if (s[i] > 96 && s[i] < 123)
s[i] -= 32;
return (s);
}
