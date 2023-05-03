#include "lists.h"
/**
 * pop_listint - deletes the head node of the linked list
 * and returns the head node's data
 * @head: pointer to the first node
 * Return: head node’s data (n) or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *new;
	int a;

	if (*head == NULL)
		return (0);

	temp = *head;
	new = temp->next;
	a = temp->n;
	free(temp);
	*head = new;
	return (a);
}
