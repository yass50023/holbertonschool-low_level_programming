#include "main.h"
#include <unistd.h> // for write function

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * puts_half - prints half of a string.
 * @str: the string.
 */
void puts_half(char *str)
{
    int i, n;

    i = 0;
    while (str[i] != '\0')
        i++;

    n = i / 2;

    if (i % 2 == 1)
        n++;

    while (n < i)
    {
        _putchar(str[n]);
        n++;
    }
    _putchar('\n');
}
