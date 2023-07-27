#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/*
 * print_list -  prints all the elements of a list
 * @h: a pointer to the list
 * return: the number of nodes
 */
size_t print_list(const list_t *h);
{
int s= 0;
while(h)
{
if(h-> = 0)
	printf ("[0] (nil)");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
s++;
}

	return (s);
}
