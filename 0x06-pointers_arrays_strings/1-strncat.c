#include "main.h"

/**
 *_strncat - concatenates two strings
 *@dest: destination string
 *@src: source string
 *@n: The number of bytes from src to be appended to dest
 *Return: pointer to resulting`dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	char *conq = dest;

	while (*dest)
		dest++;
	while (*src && n--)
		*dest++ = *src++;
	*dest = '\0';
	return (conq);
}
