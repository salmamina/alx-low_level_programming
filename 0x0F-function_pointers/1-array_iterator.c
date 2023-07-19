#include "function_pointers.h"

/**
 * array_iterator - execute function on each elemnt of array
 * @array: array of element
 * @size: size of array:
 * @action: function pointer
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && action && size)
		while (array <= end)
			action(*array++);
}
