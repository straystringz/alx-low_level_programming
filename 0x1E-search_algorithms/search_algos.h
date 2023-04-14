#ifndef SORTING_ALGOS_H
#define SORTING_ALGOS_H

#include <stddef.h>

/* Data structures */

/**
 * struct listint_s - singly linked list
 * @n: integer value stored in the node
 * @next: pointer to the next node in the list
 *
 * Description: node structure for a singly linked list
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - skip list
 * @n: integer value stored in the node
 * @express: pointer to the next node in the express lane
 * @next: pointer to the next node
 *
 * Description: node structure for a singly linked list with an express lane
 */
typedef struct skiplist_s
{
	int n;
	struct skiplist_s *express;
	struct skiplist_s *next;
} skiplist_t;

/* Functions */

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value in the array, or -1 if not found
 */
int linear_search(int *array, size_t size, int value);

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value in the array, or -1 if not found
 */
int binary_search(int *array, size_t size, int value);

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value in the array, or -1 if not found
 */
int jump_search(int *array, size_t size, int value);

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value in the array, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value);

/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value in the array, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value);

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value in the array, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value);

/**
 * jump_list - searches for a value in a singly linked list of ints
 * @list:
