#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 *
 * @n: parameter
 *
 * @index: index starting from 0
 *
 * Return: value of bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 64)
		return (-1);

	bit = n >> index;

	return (bit & 0x1);
}
