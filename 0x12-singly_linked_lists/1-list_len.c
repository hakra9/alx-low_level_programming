#include <stdio.h>
#include <stdlib.h>
#include "listes.h"

/*
 * list_len - returns the number of elements in a linked list
 * @ h : a pointer to the list
 * Return: number of elements in h
 */
size_t list_len(const list_t *h);
{
	size_t n = 0;

	while (h)
	{
		n=n+1;
		h = h->next;
	}
	return (n);
}



