#include "main.h"
/**
 * print_sign - Prints sign or zero
 *
 * @n: character or the number
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n != 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
