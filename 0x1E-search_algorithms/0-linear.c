#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using
 *                 the Linear search algorithm.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Size of the array.
 * @value: Value to search for.
 *
 * Return: Index of the value in the array if found, -1 otherwise.
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;  // Declare a variable to store the index.

    // Check if the array is NULL.
    if (array == NULL)
        return (-1);

    // Loop through the array.
    for (i = 0; i < size; i++)
    {
        // Print the value being checked.
        printf("Value checked array[%lu] = [%d]\n", i, *(array + i));

        // Check if the current value matches the value being searched for.
        if (*(array + i) == value)
            return (i);  // Return the index of the value.
    }

    return (-1);  // The value was not found in the array.
}
