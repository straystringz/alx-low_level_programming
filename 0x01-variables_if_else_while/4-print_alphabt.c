#include	<stdio.h>

/**
 * main - holds the function
 *
 * Return: if correct should return (0)
 *
 */
int main(void)
{
	char	c;

	for	(c = 'a'; c <= 'z'; c++)
	{
		if	(c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return	(0);
}
