#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints alphabets reversed
 *
 * Return: 0 if it's true
 */

int main(void)
{
	int char = 'z';

	for (char = 'z'; char >= 'a'; char--)
		putchar(char);
	putchar('\n');
	return (0);
}
