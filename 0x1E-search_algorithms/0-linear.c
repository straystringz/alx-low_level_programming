include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using
 * the linear search algorithm.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Size of the array.
 * @value: Value to search for.
 *
 * Return: Index of the value in the array if found, -1 otherwise.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			printf("Found %d at index: %lu\n", value, i);
			return (i);
		}
	}
	printf("Value %d not found\n", value);
	return (-1);
}
