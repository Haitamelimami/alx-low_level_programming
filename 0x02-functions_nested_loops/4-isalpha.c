#include "main.h"
/**
 * _isalpha(int c)- checks for alpha character
 *
 * @c: letter being tested
 * Return: 1 if true 0 if false
 */
int _isalpha(int c)
{
	if (65 <= c >= 90 && 97 <= c >= 122)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
