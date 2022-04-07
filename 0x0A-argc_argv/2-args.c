#include "main.h"
#include <stdio.h>

/**
 * print_string - prints all characters in a string
 *
 * @str: string to be printed
 *
 * Return: Success
 */

void print_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
}

/**
 * main - prints all arguments
 *
 * @argc: argument count
 *
 * @argv: argument value/vector
 *
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		print_string(argv[i]);
		putchar('\n');
	}
	return (0);
}
