#include "main.h"
/**
 * print_last_digit(int)- print last degit
 *
 * @n: number to get his last
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int nm;
	int nc;
	int nd;

	if (n <= -1000 || n >= 1000)
	{
		nm = n % 1000;
		nc = nm % 100;
		nd = nc % 10;
		return (nd);
	}
	else if (n <= 100 || n >= 100)
	{
		nc = n % 100;
		nd = nc % 10;
		return (nd);
	}
	else
	{
		nd = n % 10;
		return (nd);
	}
}
