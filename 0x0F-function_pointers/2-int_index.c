#include "function_pointers.h"

/**
 * array_iterator - execute function on each elemnt of array
 * @array: array of element
 * @size: size of array:
 * @cmp: function pointer
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
