#include "main.h"
/**
 * swap_int - swaps integers
 *
 * @a: character or integer
 * @b: character or integer
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *b;
	*b = *a;
	*a = x;
}
