#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates memory for a 2d array
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: Always 0
 */
int **alloc_grid(int width, int height)
{
	int i, j, count = 0;
	int **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(height * sizeof(int *));
		if (matrix == NULL)
		{
			free(matrix);
			return (NULL);
		}
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(width * sizeof(int));
			if (matrix[i] == NULL)
			{
				for (i--; i >= 0; i--)
					free(matrix[i]);
				free(matrix);
				return (NULL);
			}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			matrix[i][j] = count;
				return (matrix);
}
