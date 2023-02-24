#include "main.h"
/**
 * print_diagonal - diagonal lines
 *
 * @n: integer
 *
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int k, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (k = 0; k < n; k++)
	{
		for (j = 0; j < k; j++)
		{
			_putchar(92);
		}
		_putchar('\n');
	}
	}
}
