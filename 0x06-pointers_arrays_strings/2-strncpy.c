#include "main.h"

/**
* _strncpy - copy string
*@dest: input
*@src: src
*@n: number of char
*Return: pointer dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *conq = dest;

	while (*src && n)
	{
		*dest++ = *src++;
		n--;
	}
	while (n--)
		*dest++ = '\0';
	return (conq);
}
