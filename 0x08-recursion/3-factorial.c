#include "main.h"
/**
 * factorial - returns factorial of given number
 *
 * @n: number given
 *
 * Return: integer
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
