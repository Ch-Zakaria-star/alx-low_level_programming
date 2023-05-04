#include "main.h"

/**
 * clear_bit - sets index to 0
 * @n: containing the decimal number
 * @index: containing the index
 * Return: the converted number
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 63)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
