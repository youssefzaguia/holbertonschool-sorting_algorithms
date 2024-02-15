#include "sort.h"
/**
 * swap - function that swaps two integers
 * @x: first int to swap
 * @y: second int to swap
 */
void swap(int *x, int *y)
{
	int aux = *x;

	*x = *y;
	*y = aux;
}
/**
 * bubble_sort - function that sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: array to sort
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 1)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
