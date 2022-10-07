#include "search_algos.h"
#include <limits.h>
/**
 * _binary_search - searches for a value in a sorted array
 *
 * @array: pointer to first element of array to search in
 *
 * @lo: lowest index of array to be searched
 *
 * @high : highest index number of the array to be searched
 *
 * @value: value to be searched for
 *
 * Return: Index of value
 */
int _binary_search(int *array, size_t lo, size_t high, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (high >= lo)
	{
		printf("Searching in array: ");
		for (i = lo; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = lo + (high - lo) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			high = i - 1;
		else
			lo = i + 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for value in sorted array
 *  using exponential search
 *
 *  @array: pointer to first element of array to search in
 *  @value: value to search for
 *  @size: size of array
 *  Return: index of value or -1 if not found or empty array
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t n = 1;
	size_t high;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	if (array[0] == value)
	{
		return (0);
	}
	else
	{
		while (n < size && array[n] <= value)
		{
			printf("Value checked array[%ld] = [%d]\n", n, array[n]);
			n = n * 2;
		}
	}

	high = n < size ? n : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", n / 2, high);
	return (_binary_search(array, n / 2, high, value));
}
