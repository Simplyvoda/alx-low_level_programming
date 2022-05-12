#include "main.h"

/**
 * more_numbers - Print 10x the numbers 0-14
 *
 * Return: 10x the numbers 0-14
 */

void more_numbers(void)
{
    int i;
    int n;
    
    for (i = 0; i < 11; i++)
    {
        for (n = 0; n < 15; n++)
        {
            if (n > 9)
            {
                _putchar((b / 10) + '0');
            }
            
            _putchar((b % 10) + '0');
        }
        
        _putchar('\n');
    
    }
}
