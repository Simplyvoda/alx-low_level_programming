#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: parameter
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
        int i, count = 0;
        unsigned long int pre_value;

        for (i = 63; i >= 0; i--)
        {
                pre_value = n >> i;

                if (pre_value & 1)
                {
                        _putchar('1');
                        count ++;
                }
                else if (count)
                        _putchar('0');
        }
        if (!count)
                _putchar('0');
}
