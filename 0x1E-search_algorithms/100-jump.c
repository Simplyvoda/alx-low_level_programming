#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in array using jump search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump_size = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (jump_size < size && array[jump_size] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", jump_size, array[jump_size]);
		i = jump_size;
		jump_size += sqrt(size);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, jump_size);

	jump_size = jump_size < size - 1 ? jump_size : size - 1;

	for (; i < jump_size && array[i] < value; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return ((int)i);
		}
	}
	return (-1);
}
