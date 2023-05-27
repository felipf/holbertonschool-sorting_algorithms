#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending order
 * @array: to be sort
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp, minimun, index;

	for (i = 0; i < size; i++)
	{
		minimun = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (minimun > array[j])
			{
				minimun = array[j];
				index = j;
			}
		}
		if (minimun != array[i])
		{
			tmp = array[i];
			array[i] = minimun;
			array[index] = tmp;
			print_array(array, size);
		}
	}
}
