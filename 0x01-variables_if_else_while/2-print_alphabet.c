#include <stdio.h>

/**
 * main - Prints alphabet in lowercase followed by a new line
 * Return: 0 if it's true
 */

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
