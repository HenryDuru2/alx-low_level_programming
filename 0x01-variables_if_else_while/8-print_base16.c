#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry poin
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int l;
	char hexavalues[] = "0123456789abcdef";

	for (l = 0; l < 16; l++)
	putchar(hexavalues[l]);
	putchar('\n');
	return (0);
}
