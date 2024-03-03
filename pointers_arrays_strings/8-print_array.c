#include <stdio.h>
/**
 *print_array - prints elements of an array of integers.
 *@n: the number of elements of the array to be printed.
 *@a: the input
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
