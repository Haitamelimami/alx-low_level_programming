#include "main.h"
/**
 * times_table(void)- prints the 9 times table
 *
 * Return: Always 0
 */
void times_table(void)
{
	int i;
	int j;
	int a;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			a = 1 * i * j;
			if (a < 10)
			{
				_putchar(a + '0');
			}
			else
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('$');
		_putchar('\n');
	}
}
