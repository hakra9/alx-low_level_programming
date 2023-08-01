#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 * Return: pointer to the abc node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	abc = malloc(sizeof(listint_t));
	if (!abc)
		return (NULL);

	abc->n = n;
	abc->next = NULL;

	if (*head == NULL)
	{
		*head = abc;
		return (abc);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = abc;

	return (abc);
}

