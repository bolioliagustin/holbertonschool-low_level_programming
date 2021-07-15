#include <stdlib.h>

/**
 * alloc_grid - Create a 2 dimensionals array
 * @width: Width of grid, aka # of columns
 * @height: Height of grid, aka # of rows
 *
 * Return: Pointer to 2D array, NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int j, i;

	j = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	g = malloc(height * sizeof(*g));
	if (g == NULL)
	{
		free(g);
		return (NULL);
	}
	while (j < height)
	{
		g[j] = malloc(width * sizeof(**g));
		if (g[j] == NULL)
		{
			j--;
			while (j >= 0)
			{
				free(g[j]);
				j--;
			}
			free(g);
			return (NULL);
		}
		i = 0;
		while (i < width)
		{
			g[j][i] = 0;
			i++;
		}
		j++;
	}
	j = 0;
	return (g);
}
