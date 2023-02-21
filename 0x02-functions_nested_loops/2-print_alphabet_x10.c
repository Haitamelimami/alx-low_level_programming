#include "main.h"
/**
 * print_alphabet_x10- print the alphabet 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char al = 'a';
	int i;

	for (i = 0; i < 10)
	{
		while (al <= 'z')
		{
			_putchar(al);
			al++;
		}
		_putchar('\n');
		i++;
	}
}
