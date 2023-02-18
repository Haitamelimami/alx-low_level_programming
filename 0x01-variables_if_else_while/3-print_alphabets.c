#include <stdio.h>
/**
 *main- Entry point
 *
 *program that prints the alphabet in lowercase, and then in uppercase
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char d;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (d = 'A'; d <= 'D'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
