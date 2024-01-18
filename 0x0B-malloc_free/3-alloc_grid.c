#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid-creates a 2 dimensional array of innts
 * @width:width of the matrix
 * @height:heoght of the matrix
 * Return: pointer to the craeted matrix(succes) or NULL
 */
int **alloc_grid(int width, int height)
{
int **array;
int i, j;
if (height <= 0 || width <= 0)
return (NULL);
array = (int **) malloc(sizeof(int *) * height);
if (array == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
array[i] = (int *) malloc(sizeof(int) * width);
if (array[i] == NULL)
{
free(array);
for (j  = 0; j < height; j++)
free(array[j]);
return (NULL);
}
}
return (array);
}
