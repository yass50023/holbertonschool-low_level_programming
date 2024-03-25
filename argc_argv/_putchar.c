#include <unistd.h>

/**
 * _putchar - writes character
 * @c: character print
 *
 * Return: On error, returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}