#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
int n;

srand(time(NULL)); /* Seed the random number generator */
n = rand() - RAND_MAX / 2; /* Generate a random number between -RAND_MAX/2 and RAND_MAX/2 */

printf("%d ", n);

if (n > 0)
printf("is positive\n");
else if (n == 0)
printf("is zero\n");
else
printf("is negative\n");

return (0);
}
