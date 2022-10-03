#include "main.h"

#include <stdlib.h>

/**

 * str_concat - a function that concatenates two strings

 * @s1: input

 * @s2: input

 * Return: concat of s1 and s2

 */

char *str_concat(char *s1, char *s2)

{

	char *concat;

	int n, ci;



	if (s1 == NULL)

		s1 = "";

	if (s2 == NULL)

		s2 = "";



	n = ci = 0;

	while (s1[n] != '\0')

		n++;

	while (s2[ci] != '\0')

		ci++;

	concat = malloc(sizeof(char) * (n + ci + 1));



	if (concat == NULL)

		return (NULL);

	n = ci = 0;

	while (s1[n] != '\0')

	{

		concat[n] = s1[n];

		n++;

	}



	while (s2[ci] != '\0')

	{

		concat[n] = s2[ci];

		n++, ci++;

	}

	concat[n] = '\0';

	return (concat);

}
