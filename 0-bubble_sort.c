#include "sort.h"
/**
 * swaps - swapping two integers
 * @a: First int
 * @b: Second int
*/
void swaps(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sort array of integers
 * @array: array of int to sort
 * @size: size of array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size - i - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
			swaps(&array[j], &array[j + 1]);
			print_array(array, size);
			}
		}
	}
}
