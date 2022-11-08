#include "sort.h"

/**
 * selection_sort - sorts array with selection sort algorithm
 * @array: array tobe sorted
 * @size: the size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[i] < array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
				continue;
			}
		}
	}
}
