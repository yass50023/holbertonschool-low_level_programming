
/**
 * main - Entry point of the program
 *
 * This function generates a random number and prints whether
 * the number is positive, negative, or zero.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
    srand(time(NULL)); /* Seed the random number generator */
    int n = rand() - RAND_MAX / 2; /* Generate a random number between -RAND_MAX/2 and RAND_MAX/2 */
    
    printf("The number %d ", n);
    
    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n == 0)
    {
        printf("is zero\n");
    }
    else
    {
        printf("is negative\n");
    }
    
    return 0;
}