#include "main.h"
/**
 * print_square - ptints squares
 *
 * @size: size of line
 *
 * Return: Always 0
 */
void print_square(int size)
{
	int k, j;

	for (k = 0; k < size; k++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		if (k != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
