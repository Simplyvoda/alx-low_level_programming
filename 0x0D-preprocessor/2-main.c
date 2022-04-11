#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: 0
 */

int main(void)
{
	printf("The file name of this program is %s\n", __FILE__);
	return (0);
}
