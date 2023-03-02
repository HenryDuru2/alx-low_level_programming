#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: Destination
 * @src: Source
 * @n: integer
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	return (src);
}
