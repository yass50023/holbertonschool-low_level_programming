#include <stddef.h>

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 *
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination memory area (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *dest_ptr = dest;
    char *src_ptr = src;

    while (n--)
        *dest_ptr++ = *src_ptr++;

    return dest;
}
