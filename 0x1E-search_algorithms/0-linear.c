#include "search_algos.h"

/**
 * linear_search - searches for a given value in an array of integers
 * using the linear search algorithm, which iterates through the array
 * one element at a time until it finds the target value or reaches the
 * end of the array.
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for in the array
 *
 * Return: the index of the first occurrence of the target value in the array,
 * or -1 if the value is not found or if the array is NULL.
 */

int linear_search(int *array, size_t size, int value)
{
    if (array == NULL) {
        return -1;
    }

    for (size_t i = 0; i < size; i++) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            return i;
        }
    }

    return -1;
}
