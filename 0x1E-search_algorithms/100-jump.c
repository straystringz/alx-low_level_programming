#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in an array of integers using the Jump search algorithm.
 *
 * @array: Pointer to the input array.
 * @size: Size of the array.
 * @value: The value to search for.
 *
 * Return: Index of the value in the array, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
    int jump = sqrt(size);  /* Calculate the block size to be jumped. */
    int left = 0;           /* Initialize the left and right boundaries of the block. */
    int right = 0;

    /* If array is NULL or size is 0, return -1. */
    if (array == NULL || size == 0)
        return (-1);

    /* Jump through the array until a block containing the value is found or the end of the array is reached. */
    while (right < (int)size && array[right] < value) {
        printf("Value checked array[%d] = [%d]\n", right, array[right]);
        left = right;       /* Save the index of the start of the previous block. */
        right += jump;      /* Jump to the start of the next block. */
    }

    /* If the value is not in the array, return -1. */
    if (left >= (int)size || array[left] > value)
        return (-1);

    /* Linear search within the block containing the value. */
    right = MIN(right, size - 1);    /* Set the right boundary of the block. */
    for (; left <= right; left++) {
        printf("Value checked array[%d] = [%d]\n", left, array[left]);
        if (array[left] == value)
            return (left);  /* If the value is found, return the index. */
    }

    return (-1);    /* If the value is not found, return -1. */
}
