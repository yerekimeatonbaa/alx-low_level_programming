#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: an array of integers.
 * @n: the number of elements.
 */
void reverse_array(int *a, int n)
{
	int *ini = a, tmp;

	a += n - 1;

	while (ini < a)
	{
		tmp = *ini;
		*ini = *a;
		*a = tmp;
		ini++;
		a--;
	}
}
