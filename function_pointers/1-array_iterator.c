void array_iterator(int *array, size_t size, void (*action)(int))
/**
 * array_iterator - execute a function pointer on each element of an array
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 **/

{
	size_t i;

	for (i = 0; size; i++)
		action(array[i];
}
