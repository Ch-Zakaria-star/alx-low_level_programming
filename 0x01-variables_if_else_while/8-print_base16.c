#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print base 16 numbers
 *
 * Return: 0 if it's true
 */

int main(void)
{
	char i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
	}
	for (i = 'a' ; i <= 'f' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
