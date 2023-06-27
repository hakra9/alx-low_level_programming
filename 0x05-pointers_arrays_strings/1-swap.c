#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @q: int to swap
 * @s: int to swap
 */
void swap_int(int *q, int *s)
{
	int m;

	m = *q;
	*q = *s;
	*s = m;
}


