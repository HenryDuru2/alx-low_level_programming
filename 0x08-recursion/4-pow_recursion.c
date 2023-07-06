#include "main.h"
/**
 * _pow_recursion - Raises to power
 *
 * @x: number
 * @y: number
 *
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
