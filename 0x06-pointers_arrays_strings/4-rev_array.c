#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j;
	int l;

	for (j = 0; j < n--; j++)
	{
		l = a[j];
		a[j] = a[n];
		a[n] =l;
	}
}

