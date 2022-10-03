#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of ints
 * @width: awidth of grid
 * @height: height of grid
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **array, n, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (n = 0; n < height; n++)
	{
		array[n] = malloc(sizeof(int) * width);

		if (array[n] == NULL)
		{
			for (; n >= 0; n--)
				free(array[n]);
			free(array);
			return (NULL);
		}
	}
	for (n = 0; n < height; n++)
	{
		for (j = 0; j < width; j++)
			array[n][j] = 0;
	}
	return (array);
}
