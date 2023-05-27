#include "sort.h"
/**
 * quick_sort - quicksort algorithm
 * @array: array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	ordenarA(array, 0, size - 1, size);
}

/**
 * ordenarA - recursion
 * @arr: array
 * @der: derecha de root
 * @izq: izquierda de root
 * @size: array size
 */
void ordenarA(int *arr, int der, int izq, size_t size)
{
	int pivot;

	if (izq < der)
	{
		pivot = split(arr, izq, der, size);
		ordenarA(arr, izq, pivot - 1, size);
		ordenarA(arr, pivot + 1, der, size);
	}
}

/**
 * split - split the array
 * @arr: array
 * @der: derecha de root
 * @izq: izquierda de root
 * @size: size of array
 */
int split(int *arr, int izq, int der, size_t size)
{
	int i, j, pivot, tmp;

	pivot = arr[der];
	i = izq;

	for(j = izq; j < der; j++) 
	{
		if (arr[j] < pivot)
		{
			if (i != j)
			{
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
				print_array(arr, size);
			}
			i++;
		}
	}
	if (arr[i] != arr[der])
	{
		tmp = arr[i];
		arr[i] = arr[der];
		arr[der] = tmp;
		print_array(arr, size);
	}
	return (i);
}
