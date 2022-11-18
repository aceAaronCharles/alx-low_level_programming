#include <stddef.h>

/**
 * int_index - it is a function that saerches for an integer
 *
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to function call to check index in array
 * 	if it matches
 *
 * Return: Always 0 (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL && cmp == NULL && size <= 0)
		return(-1);
	/*iterate through array and call searching function */
	for (i = 0; i < size; i++)
		if (cmp(*(array + i))) /* if returned true */
			return (i);

	return(-1);
}
