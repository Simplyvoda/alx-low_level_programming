#include "main.h"
#include <stdio.h>


/**
 * main - Prints its name
 *
 * @argc: Length of argv
 *
 * @argv: Arrays of strings of the program arguments
 *
 * Return: Success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	print_string(argv[0]);
	putchar('\n');

	return (0);
}
