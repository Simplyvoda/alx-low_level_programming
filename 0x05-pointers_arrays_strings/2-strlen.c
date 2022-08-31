#include "main.h"

/**
 * _strlen - function to return length of a string
 *
 * @s: The character containing the string
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
