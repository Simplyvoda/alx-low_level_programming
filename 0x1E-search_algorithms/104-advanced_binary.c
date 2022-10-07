#include "search_algos.h"

/**
  * binary_recursive - Searches recursively for a value in a sorted
  *                             array of integers using binary search.
  * @array: A pointer to the first element of the [sub]array to search.
  * @lo: lowest index of subarray to be searched
  * @hi: highest index of subarray to be searched
  * @value: The value to search for.
  *
  * Return: index of value or -1 if not found
  */
int binary_recursive(int *array, size_t lo, size_t hi, int value)
{
	size_t i;

	if (hi < lo)
		return (-1);

	printf("Searching in array: ");
	for (i = lo; i < hi; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = lo + (hi - lo) / 2;
	if (array[i] == value && (i == lo || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (binary_recursive(array, lo, i, value));
	return (binary_recursive(array, i + 1, hi, value));
}

/**
  * advanced_binary - Searches for a value in a sorted array
  *                   of integers using advanced binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: index of value or -1 if not found
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (binary_recursive(array, 0, size - 1, value));
}
