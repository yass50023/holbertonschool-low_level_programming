#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * main - prints 10 times the alphabet.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char alpha;
int i;

for (i = 0; i < 10; i++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
}
