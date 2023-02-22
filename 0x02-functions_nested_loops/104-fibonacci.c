#include <stdio.h>
/**
 * main- entry point
 *
 * Return: always 0
 */
int main(void)
{
	int fib1 = 1, fib2 = 2, fib;
	int count = 2;

	printf("%d, %d, ", fib1, fib2);
	while (count < 98)
	{
		fib = fib1 + fib2;
		printf("%d, ", fib);
		fib1 = fib2;
		fib2 = fib;
		count++;
	}
	fib = fib1 + fib2;
	printf("%d\n", fib);
	return (0);
}
