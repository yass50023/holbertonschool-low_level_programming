#include <stddef.h>

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s
 *           with the constant byte b
 *
 * @s: Pointer to the memory area to be filled
 * @b: The constant byte to fill the memory area with
 * @n: Number of bytes to fill
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *ptr = s;

    while (n-- > 0)
    {
        *ptr++ = b;
    }

    return s;
}
