#include <stdlib.h>
#include "main.h"
/**
 * *array_range - fnx which makes array of ints
 * @min: min range of stored vals
 * @max: max range of stored vals and tot num of elements
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;

	int j, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; min <= max; j++)
		ptr[j] = min++;
	return (ptr);
}
