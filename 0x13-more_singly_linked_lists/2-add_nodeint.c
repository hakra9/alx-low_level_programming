#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 * Return: pointer to the abc node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *abc;

	abc = malloc(sizeof(listint_t));
	if (!abc)
		return (NULL);

	abc->n = n;
	new->abc = *head;
	*head = abc;

	return (abc);
}

