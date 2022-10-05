#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 *
 * @array: pointer to first element of array to search in
 *
 * @size: number of elements in array
 *
 * @value: value to be searched for
 *
 * Return: Index of value
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int l = 0;
	unsigned int h = size - 1;
	unsigned int m;

	if (array != NULL)
	{
		while (l <= h)
		{
			print_array(array, l, h);
			m = (l + h)/2;

			if (value == array[m])
			{
				return (m);
			}
			else if (value > arr[m])
			{
				l = m + 1;
			}
			else
			{
				h = m - 1;
			}
		}
	}
	return (-1);
}

/**
  * print_array - print array
  * @array: array
  * @left: starting print
  * @right: ending print
  */

void print_array(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}
