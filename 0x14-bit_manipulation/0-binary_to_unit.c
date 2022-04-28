#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned integer
 *
 * @b: pointer to string
 *
 * Return: converted number or 0
 */


unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int base_ten = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		base_ten = 2 * base_ten + (b[i] - '0');
	}
	return (base_ten);
}
