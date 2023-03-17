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
	char i  = 'z';

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
