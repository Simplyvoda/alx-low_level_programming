#include "function_pointers.h"

/**
 * int_index - returns the index of the first element for
 * which the cmp function does not return 0
 *
 * @array: pointer variable
 *
 * @size: number of elements in the array
 *
 * @cmp: a pointer to the function to be used to compare
 * values
 *
 * Return: -1 or integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}

	return (-1);
}
