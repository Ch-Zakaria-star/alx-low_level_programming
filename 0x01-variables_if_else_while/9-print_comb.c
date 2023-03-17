#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print all combinations possible of two digits
 *
 * Return: 0 if it's true
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
