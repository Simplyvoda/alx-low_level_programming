#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers 0 to 9
 *
 * ch - character
 *
 * Return: 0
 */

void print_numbers(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);

	return (0);
}
