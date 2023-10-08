#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _realloc -  reallocates a memory block.
 *
 * Description: a function that  reallocates a memory block.
 * @ptr: min number in array
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer to the newly created array,
 * return NULL in fails or min > max
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *a;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size && ptr != NULL)
	{
		a = malloc(new_size);
		if (a != NULL)
		{
			for (i = 0; i < new_size; i++)
			{
				if (i < old_size)
				*(a + i) = *(ptr + i);
			}
			free(ptr);
			return (a);
		}
		return (NULL);
	}
	if (ptr == Null)
	{
		a = malloc(new_size);
		if (a != NULL)
			return (a);
		return (NULL);
	}
}
