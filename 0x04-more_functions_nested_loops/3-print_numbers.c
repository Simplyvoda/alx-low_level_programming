#include "main.h"

/**
 * ch - character
 * 
 * print_numbers - prints numbers 0 to 9
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
