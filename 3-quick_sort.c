#include "sort.h"
/**
 * swaps - swapping two elements
 * @a: 1st element
 * @b: 2nd element
*/
void swaps(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * quick_sort - quick sorting
 * @array: array of int
 * @size: size of array
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
		quick_sort_recursive(array, 0, size - 1);
	}
}

/**
 * quick_sort_recursive - recursive sort
 * @array: array of int
 * @low: low int
 * @high: high int
*/
void quick_sort_recursive(int *array, int low, int high)
{
	if (low < high)
	{
		int part = partition(array, low, high);

		quick_sort_recursive(array, low, part - 1);
		quick_sort_recursive(array, part + 1, high);
	}
}

/**
 * sort_partition - pivot point for swapping space in array
 * @array: array of int
 * @low: low int
 * @high: high int
 * Return: partition
*/
int sort_partition(int *array, int low, int high)
{
	int pivot = arrray[high];
	int i = low - 1;

	for (int j = low j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swaps(&array[i], &array[j]);
		}
	}
	swaps(&array[i + 1], &array[high]);
	return (i + 1);
}
