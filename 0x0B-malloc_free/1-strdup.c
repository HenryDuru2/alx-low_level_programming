#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Duplicates strings in malloc
 *
 * @str: strng to duplicate
 *
 * Return: Always 0
 */
char *_strdup(char *str)
{
	int i, n = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[n] != '\0')
		n++;

	s = (char *) malloc(n * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		s[i] = str[i];

	return (s);
}
