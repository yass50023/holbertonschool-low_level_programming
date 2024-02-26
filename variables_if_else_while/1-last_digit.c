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
    n = rand();
    
    printf("Last digit of %d is ", n);

    n %= 10; /* Get the last digit of n */

    if (n > 5)
        printf("and is greater than 5\n");
    else if (n == 0)
        printf("and is 0\n");
    else
        printf("and is less than 6 and not 0\n");

    return (0);
}