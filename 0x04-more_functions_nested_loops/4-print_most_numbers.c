#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers 0 to 9 without 2 and 4
 *
 * ch - character
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch == 2 || ch == 4)
			continue;

		else
			putchar(ch);
	}
	putchar('\n');
}
