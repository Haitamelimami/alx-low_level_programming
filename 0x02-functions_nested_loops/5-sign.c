#include "main.h"
/**
 * print_sign(int n)- prints the sign of a number
 *
 * @n: number being tested
 * Return: 1 if posi 0 if null -1 if nega
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
