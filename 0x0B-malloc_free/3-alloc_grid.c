#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: width 
 * @height: height 
 * Return: Pointer to 2 dimensional arrays
 */

int **alloc_grid(int width, int height)
{
	int **mtt;
	int a, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	mtt = malloc(sizeof(int *) * height);

	if (mtt == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		mtt[a] = malloc(sizeof(int) * width);

		if (mtt[a] == NULL)
		{
			for (; a >= 0; a--)
				free(mtt[a]);
			free(mtt);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			mtt[a][b] = 0;
		}
	}
	return (mtt);
}
