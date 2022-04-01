#include "main.h"
#include <stdio.h>

/**
 * print_string - prints all characters in a string
 *
 * Return: Success
 */

void print_string(char *s)
{
	int i = 0;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++
	}
}

/**
 * main - prints all arguments
 *
 * Return: Success
 */

int main(int argc __attribute((unused)), char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		print_string(argv[i]);
		putchar('\n');
		return;
	}
}
