#include "main.h"
/**
 * _abs - absolute value of an integer
 *
 * @a: character
 *
 * Return: Always 0 (Success)
 */
int _abs(int a)
{
	int r = a;
	int absvalue;

	if (r < 0)
	{
		r = (-1) * r;

	}
	absvalue = r;
	return (absvalue);
}
