#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *new;

	temp = new = NULL;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = new;
		new = *head;
		*head = temp;
	}
	*head = new;
	return (*head);
}
