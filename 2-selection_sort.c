#include "sort.h"
/**
 * swaps - swap int in array
 * @a: 1st int
 * @b: 2nd int
*/
void swaps(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - sorting an array of integers
 * @array: array of integer
 * @size: size of array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
	swap(&array[min], &array[i]);
	}
}
