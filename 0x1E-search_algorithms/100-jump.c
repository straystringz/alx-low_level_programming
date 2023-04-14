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
    int jump = sqrt(size);
    int left = 0;
    int right = 0;

    if (array == NULL || size == 0)
        return (-1);

    while (right < (int)size && array[right] < value) {
        printf("Value checked array[%d] = [%d]\n", right, array[right]);
        left = right;
        right += jump;
    }

    printf("Value found between indexes [%d] and [%d]\n", left, right);

    right = MIN(right, size - 1);

    for (; left <= right; left++) {
        printf("Value checked array[%d] = [%d]\n", left, array[left]);
        if (array[left] == value)
            return (left);
    }

    return (-1);
}
