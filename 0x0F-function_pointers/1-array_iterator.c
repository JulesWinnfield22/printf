#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator-  executes a function given as a parameter on each
 * @array: the array of fn
 * @size:  the size of the array
 * @action: pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (size > 0 && array && action)
	{
		while (size--)
			action(*array++);
	}
}
