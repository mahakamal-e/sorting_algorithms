#include "sort.h"

/**
 * selection_sort - a function that sorts an array of integers
 * in ascending order using the Selection sort algorithm.
 *
 * @array: poiner to array.
 * @size: size of array.
 *
 * Return: void.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp = 0;
	int min_index = 0;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}
		tmp = array[i];
		array[i] = array[min_index];
		array[min_index] = tmp;
		print_array(array, size);
	}
}
