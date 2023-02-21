#include "main.h"
/**
 * print_alphabet- print the alphabet
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
}
