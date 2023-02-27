#include "main.h"
/**
 * _strcpy(char *dest, char *src)- copies the string pointed to by src
 *
 * @dest: entry dest
 *
 * @src: entry src
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
