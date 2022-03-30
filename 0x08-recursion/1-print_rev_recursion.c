#include "main.h"

/**
 * _print_rev_recursion - prints the reverse of a string
 *
 * @s: string to be reversed
 *
 * Return: void
 */

void _print_rev_recursion(char *s);
{
	_putchar(s[sizeof(s)]);
	_print_rev_recursion(s - 1);
}
