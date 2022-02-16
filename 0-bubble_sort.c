#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: array of integers
 * @size: size of array
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, k, aux;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j + 1] < array[j])
			{
				aux = array[j + 1];
				array[j + 1] = array[j];
				array[j] = aux;
				for (k = 0; k < size; k++)
				{
					if (k == size - 1)
					{
						printf("%d", array[k]);
					}
					else
					{
						printf("%d, ", array[k]);
					}
				}
				printf("\n");
			}
		}
	}
}
