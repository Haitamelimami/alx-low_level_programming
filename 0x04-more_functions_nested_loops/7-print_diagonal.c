#include "main.h"
/**
 * print_diagonal(int n)- draws a diagonal line on the terminal
 *
 * @n: entry number
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b <= a; b++)
			{
				if (a == b)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
	}
}
