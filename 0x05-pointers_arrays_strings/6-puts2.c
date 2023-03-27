#include "main.h"

/**
 * puts2 - print every character of a string.
 * @str: character
 */

void puts2(char *str)
{
int i, j;

for (j = 0; str[j]; j++)
	;
for (i = 0; i < j; i += 2)
_putchar(str[i]);
_putchar('\n');
}
