#include "main.h"
/**
 * print_times_table(int n)- prints the n times table, starting with 0
 *
 * @n: entry number
 *
 * Return: table
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n > 15 || n < 0)
	{
		break;
	}
	else
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				c = a * b;
				_putchar(44);
				_putchar(32);
				if (c <= n)
				{
					_putchar(32);
					_putchar(c + 48);
				}
				else
				{
					_putchar((c / 10) + 48);
					_putchar((c % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
