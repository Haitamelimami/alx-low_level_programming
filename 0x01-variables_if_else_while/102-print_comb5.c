#include <stdio.h>
/**
 * main- Entry point
 *
 * program that prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b < 9 ; b++)
		{
			for (c = 0 ; c < 10 ; c++)
			{
				for (d = c + 1 ; d < 10 ; d++)
				{
					putchar(a + 48);
					putchar(b + 48);
					putchar(' ');
					putchar(c + 48);
					putchar(d + 48);
					if (a != 9 || b != 8 || c != 9 || d != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
