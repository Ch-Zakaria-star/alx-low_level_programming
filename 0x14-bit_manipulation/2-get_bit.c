#include "main.h"

/**
 * get_bit - gets int to index number
 * @n: containing the decimal number
 * @index: containing the index
 * Return: the converted number
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return (n >> index & 1);
}
