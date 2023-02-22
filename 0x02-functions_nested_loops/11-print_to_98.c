#include <stdio.h>
/**
 * print_to_98(int n)- prints all natural numbers from n to 98
 *
 * @n: entry number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				puts(n);
				puts(", ");
				n++;
			}
			else
			{
				puts(n);
				n++;
			}
		}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				puts(n);
				puts(", ");
				n--;
			}
			else
			{
				puts(n);
				n--;
			}
		}
	}
	puts("\n");
}

