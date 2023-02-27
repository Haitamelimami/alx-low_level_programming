#include "main.h"
/**
 * swap_int- swaps the values of two integers
 *
 * @a: entry 1
 * @b: entry 2
 *
 * Return: always true
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
