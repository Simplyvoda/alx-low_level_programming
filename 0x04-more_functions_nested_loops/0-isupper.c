#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * main - check the code for uppercase.
 *
 * Return: 1 or 0
 *
 * /

int _isupper(int c);
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
