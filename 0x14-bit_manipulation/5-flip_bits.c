#include "main.h"

/**
 * countSetBits - counter
 * @n: containing the number
 * Return: the converted number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m, bits = 0;

	while (i > 0)
	{
		bits += (i & 1);
		i >>= 1;
	}

	return (bits);
}
