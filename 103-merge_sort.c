#include "sort.h"

/**
 * merge_subarrays - a function that used to merge.
 *
 * @array: input array
 * @low: left index
 * @middle: middel index
 * @high: right index
 *
 */
void merge_subarrays(int *array, int low, int middle, int high)
{
	int i, j, k;
	int n1 = middle - low + 1;
	int n2 = high - middle;
	int *left_subarray = (int *)malloc(n1 * sizeof(int));
	int *right_subarray = (int *)malloc(n2 * sizeof(int));

	printf("Merging...\n");
	printf("[left]: ");
	print_array(array + low, n1);
	printf("[right]: ");
	print_array(array + middle + 1, n2);
	for (i = 0; i < n1; i++)
		left_subarray[i] = array[low + i];
	for (j = 0; j < n2; j++)
		right_subarray[j] = array[middle + 1 + j];
	i = j = 0;
	k = low;
	while (i < n1 && j < n2)
	{
		if (left_subarray[i] <= right_subarray[j])
			array[k] = left_subarray[i++];
		else
			array[k] = right_subarray[j++];
		k++;
	}
	while (i < n1)
	{
		array[k] = left_subarray[i];
		i++, k++;
	}
	while (j < n2)
	{
		array[k] = right_subarray[j];
		j++, k++;
	}
	printf("[Done]: ");
	print_array(array + low, high - low + 1);
	free(left_subarray);
	free(right_subarray);
}
/**
 * merge_sort_recursive - a function that called recursively.
 *
 * @array: arry to sort.
 * @low: low index of the array in subarray
 * @high: high index of the array in subarray
 *
 */
void merge_sort_recursive(int *array, int low, int high)
{
	int middle;

	if (low < high)
	{
		middle = low + (high - low) / 2;

		merge_sort_recursive(array, low, middle);
		merge_sort_recursive(array, middle + 1, high);
		merge_subarrays(array, low, middle, high);
	}
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
	merge_sort_recursive(array, 0, (int)size - 1);
}

