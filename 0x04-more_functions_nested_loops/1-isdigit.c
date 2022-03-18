#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isdigit - Checks for digits
 *
 * @c: Number to be checked
 *
 * Return: 1 (Success) OR 0 (Failure)
 */

int _isdigit(int c)
{
  char c;	
  if (isdigit(c))
		return (1);
	else
		return (0);
}
