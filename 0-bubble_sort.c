#include "sort.h"
/**
 * bubble_sort - func that sorts an array of ints in ascending order
 * @size: size of array
 * @array: array to be sorted
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	if (array == NULL)
		return;

	for (i = 0; 1 < size - 1; i++)
	{
		for (j = 0; j < (size - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
