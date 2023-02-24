#include "main.h"
/**
 * _isupper - Uppercase checks
 *
 * @c: integer or character
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
