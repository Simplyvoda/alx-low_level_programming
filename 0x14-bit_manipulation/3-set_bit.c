#include "main.h"

/**
 * set_bit - sets value of bit to 1
 *
 * @n: pointer to variable
 *
 * @index: index of bit to set, starts from 0
 *
 * Return: Success(1) or Failure(-1)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n |= (1 << index);
	return (1);
}
