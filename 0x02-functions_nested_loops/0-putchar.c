#include "main.h"
/**
 * main - prints _putchar, fllowd by a new linees
 * Return: Alwys 0 (Success)
 */
int main(void)
{
	int a;
	char c[] = "_putchar";

	for (a = 0; a < 8; a++)
	{
		_putchar(c[a]);
	}
	_putchar('\n');
	return (0);
}
