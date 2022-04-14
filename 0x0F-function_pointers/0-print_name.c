#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string to print
 * @f: function pointer
 * Description: the function prints a name
 * Section header: the header of this section is function_pointers.h)*
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
