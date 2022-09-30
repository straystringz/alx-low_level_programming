#include <unistd.h>

/**
 * _putchar - waaaa
 * @c: Santos
 *
 * Return: void
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
