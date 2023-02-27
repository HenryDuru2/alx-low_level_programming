#include "main.h"
/**
 * _puts - a function
 *
 * @str: a character
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
		i++;
	}
}
