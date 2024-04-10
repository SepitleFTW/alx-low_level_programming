#include "search_algos.h"

/**
 * linear_search: search for vale
 * in array of ints using linear search
 * @array: pointer to the first element
 * of array 2 search
 * @size: number of elements in the array
 * @value: value to search for
 * Return: NULL if no value else return
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Iterate over each element of the array */
	for (i = 0; i < size; i++)
	{
		/* Print the value being checked */
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		/* If the value is found */
		if (array[i] == value)

			/* Return the index of the value */
			return (i);
	}

	/* Value not found, return -1 */
	return (-1);
}

