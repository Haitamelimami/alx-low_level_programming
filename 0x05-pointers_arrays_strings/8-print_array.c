#include "main.h"
/**
 * print_array(int *a, int n)-  prints n elements of an array of integers
 *
 * @a: entry 1
 *
 * @n: entry 2
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
