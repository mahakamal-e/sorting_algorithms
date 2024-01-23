#include "sort.h"

/**
 * merge_subarrays - a function that used to merge.
 *
 * @array: input array
 * @low: left index
 * @high: right index
 * @temp_array: array to merge on original array.
 *
 */
void merge_subarrays(int *array, size_t low, size_t high, int *temp_array)
{
	size_t i = low;
	size_t j, k, middle;

	middle = (low + high) / 2;
	j = middle;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(array + low, middle - low);
	printf("[right]: ");
	print_array(array + middle, high - middle);

	for (k = low; k < high; k++)
	{
		if (i < middle && (j >= high || array[i] <= array[j]))
		{
			temp_array[k] = array[i++];
		}
		else
		{
			temp_array[k] = array[j++];
		}
	}
	printf("[Done]: ");
	print_array(temp_array + low, high - low);
}
/**
 * merge_sort_recursive - a function that called recursively.
 *
 * @array: arrry to be sorted.
 * @low: low index of the array in subarray
 * @high: high index of the array in subarray
 * @temp_arr: array temp.
 *
 */
void merge_sort_recursive(int *array, size_t low, size_t high, int *temp_arr)
{
	size_t middle;

	middle = (low + high) / 2;
	if (high - low < 2)
		return;
	merge_sort_recursive(temp_array, low, middle, array);
	merge_sort_recursive(temp_array, middle, high, array);
	merge_subarrays(array, low, high, temp_array);

}

/**
 * merge_sort - a function that sorts an array of integers.
 * in ascending order using the Merge sort algorithm.
 *
 * @array: pointer to array to sort.
 * @size: the size of input array.
 */
void merge_sort(int *array, size_t size)
{
	int *temp_array;
	size_t i;

	if (array == NULL || size < 2)
		return;
	temp_array = malloc(sizeof(int) * size);
	if (temp_array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		temp_array[i] = array[i];
	}
	merge_sort_recursive(temp_array, 0, size, array);
	free(temp_array);

}
