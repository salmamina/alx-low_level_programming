#include "function_pointers.h"

/**
 * int_index - search for integer
 * @array: array of element
 * @size: size of array:
 * @cmp: function compare
 * Return: -1 if no element, 0 otherwise
*/

int int_index(int *array, int size, int (*cmp)(int));
{
	int i = 0;

	if (array && cmp && size)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
