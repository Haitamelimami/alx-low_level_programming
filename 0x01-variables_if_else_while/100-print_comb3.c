#include <stdio.h>
/**
 * main- Entry point
 *
 * program that prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0 ; b < 9 ; a++)
	{
		for (b = a + 1 ; b < 10 ; b++)
		{
			putchar(a + 48);
			putchar(b + 48);
			if (a != 8 && b != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

