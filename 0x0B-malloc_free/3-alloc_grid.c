/**
 * alloc_grid - two dimensional array of int
 * @width: width of grid
 * @height: height of grid
 * Return: NONE
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **z;
	int y = 0;
	int x = 0;
	int a = 0;
	int b = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	z = malloc(sizeof(int *) * height);

	if (z == NULL)
	{
		free(z);
		return (NULL);
	}

	for (y = 0; y < height; y++)
	{
		z[y] = malloc(sizeof(int) * width);
		if (z[y] == NULL)
		{
			for (x = y; x >= 0; x--)
			{
				free(z[x]);
			}
			free(z);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			z[a][b] = 0;
		}
	}
	return (z);
}
