#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checkd for digits
 *
 * @c: number to be checked
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	char c;
	if (isdigit(c))
		return (1);
	else
		return (0);
}
