#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the binary search algorithm, which repeatedly divides the search interval
 * in half until the target value is found or the interval becomes empty.
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for in the array
 *
 * Return: the index of the first occurrence of the target value in the array,
 * or -1 if the value is not found or if the array is NULL.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t i, mid;

	while (left <= right)
	{
		printf("Searching in array:");
		for (i = left; i < right; i++)
			printf(" %d,", array[i]);
		printf(" %d\n", array[right]);

		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
