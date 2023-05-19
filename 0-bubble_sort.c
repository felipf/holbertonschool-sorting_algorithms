#include "sort.h"
/**
 * bubble_sort - func that sorts an array of ints in ascending order
 * @size: size of array
 * @array: array to be sorted
 */
void bubble_sort(int *array, size_t size)
{
	int tmp, check = 0;
	size_t i, j, checkArr = size;

	if (!array || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 1; j < checkArr; j++)
		{
			if (array[j] < array[j - 1])
			{
				check = 1;
				tmp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = tmp;
				print_array(array, size);
			}
		}
		if (check == 0)
			break;
		check = 0;
		checkArr--;
	}
}
