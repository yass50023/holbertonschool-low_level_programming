#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars, and initialize with specific char.
 * @c: a char
 * @size: size of char
 * Return: char pointer to malloc created memory address or NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int i;

	if (size == 0)
		return (NULL);

	b = malloc(size * sizeof(*b));
	if (b == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		b[i] = c;

	return (b);
}