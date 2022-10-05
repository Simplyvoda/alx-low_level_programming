#include "search_algos.h"

/**
  * linear_search - linear search
  *
  * @array: pointer to first element of search array
  *
  * @size: number of elements in array
  *
  * @value: value to search for
  *
  * Return: index where found or -1
  */

int linear_search(int *array, size_t size, int value)
{
	unsigned int j;

	if (array == NULL)
	{
		return (-1);
	}

	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
		{
			return (j);
		}
	}

	return (-1);
}
