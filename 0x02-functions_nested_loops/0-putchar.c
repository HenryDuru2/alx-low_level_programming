#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main-Print _putchar
 *
 * print_alphabet
 * Return: Always 0 (Success)
*/
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
