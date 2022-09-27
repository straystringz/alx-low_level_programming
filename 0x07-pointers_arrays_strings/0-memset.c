#include "main.h"



/**

* _memset - will fill a memory block with a constant byte.

* @s: address to memory block.

* @b: character to be used.

* @n: number of bytes to be used.

*

* Return: Returns apointer to the memory block.

*/



char *_memset(char *s, char b, unsigned int n)



{

	while (n)

	{

		s[n - 1] = b;

		n--;

	}

	return (s);

}
