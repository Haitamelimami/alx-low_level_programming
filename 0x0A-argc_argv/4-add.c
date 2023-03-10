#include <stdio.h>
#include <stdlib.h>
/**
 * main- entry point
 *
 * @argc: number of arguments
 *
 * @argv: array of arguments
 *
 * Return: always 0 if true
 */
int main(int argc, char *argv[])
{
	int sum, a, b, c, num;

	sum = 0;
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (c = 0; c < argc; c++)
	{
		num = atoi(argv[c]);
		if (num >= 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
