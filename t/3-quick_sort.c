#include "sort.h"
/**
 * swap - swaps two number in an array
 * @fv: first value
 * @sv: second value
 */
void swap(int *fv, int *sv)
{
        int tmp;

        tmp = *fv;
        *fv = *sv;
        *sv = tmp;
}

/** partition - splits an array into two
 * @l: lower index
 * @h: higher index
 * @arr: array
 *
 * Return: index
 */

int partition(int arr[], size_t h, size_t lo)
{
	size_t i, j; 
	int pivot;

	i = lo;
	pivot = arr[h];

	for (j = lo; j < h; j++)
	{
		if(arr[j] <= pivot)
		{
			swap(&arr[i], &arr[j]);
			i++;
		}
	}
	swap(&arr[i], &arr[h]);
	return i;
}

/**
 * recursion - recursively sorts an array
 * @array: array given
 * @l: lower index
 * @h: higher index
 */

void recursion(int *array, int lo , int h, size_t s)
{
	if (lo < h)
	{
		int pivot_index = partition(array, lo, h);
		recursion(array, lo, pivot_index - 1, s);
		recursion(array, pivot_index + 1, h, s);
		print_array(array, s);
	}
		
}
/**
 * quick_sort - sorts array using quick sort argorithm
 * @array: unsorted array given
 * @size: the size of the array
 */

void quick_sort(int *array, size_t size)
{
	recursion(array, 0, size - 1, size);
}
