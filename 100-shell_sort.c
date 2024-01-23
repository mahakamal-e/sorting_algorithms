#include "sort.h"
/**
 * max_knuth_gap - aa function that calculates the maximum gap.
 *
 * @size: size of array.
 *
 * Return: return the maximum gap.
 */
size_t max_knuth_gap(size_t size)
{
	size_t gap = 1;

	while (gap < size / 3)
		gap = gap * 3 + 1;
	return (gap);
}
/**
 * shell_sort - a function that sorts an array of integers.
 *
 * @array: input array.
 * @size: size of array.
 */
void shell_sort(int *array, size_t size)
{
	size_t  i, j;
	size_t gap = max_knuth_gap(size);
	int temp;

	if (!array || size < 2)
		return;
	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			j = i;
			while (j >= gap && array[j - gap] > temp)
			{
				array[j] = array[j - gap];
				j -= gap;
			}
			array[j] = temp;
		}
		print_array(array, size);
		gap /= 3;
	}

}
