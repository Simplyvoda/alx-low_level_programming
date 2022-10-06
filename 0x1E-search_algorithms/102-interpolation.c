#include "search_algos.h"

/**
 * interpolation_search - searches for value using interpolation algorithm
 * @array: pointer to first element in array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index to where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lo = 0;
	size_t hi = size - 1;
	size_t pos;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (lo <= hi && value >= array[lo] && value <= array[hi])
	{
		pos = lo + (((double)(hi - lo) / (array[hi] - array[lo])) *
				(value - array[lo]));
		if (pos < size)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
		{
			return (pos);
		}
		else if (array[pos] < value)
		{
			lo = pos + 1;
		}
		else if (array[pos] > value)
		{
			hi = pos - 1;
		}
	}
	return (-1);
}
