#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
char L;

for (L = 'a'; L <= 'z'; L++)
putchar(L);
for (L = 'A'; L <= 'Z'; L++)
putchar(L);
putchar('\n');
return (0);
}