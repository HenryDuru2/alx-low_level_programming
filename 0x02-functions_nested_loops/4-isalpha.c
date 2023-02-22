#include "main.h"
/**
 * _isalpha - to check alphabetic character
 *
 * @c: character to know a letter
 *
 * Return: 1 if it's a letter 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
