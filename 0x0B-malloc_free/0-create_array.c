#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array with mnalloc
 *
 * @size: size of an array
 * @c: the array
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));
	if (size == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
