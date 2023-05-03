#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at "index" of a linked list
 * @head: pointer to the first node
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *temp;
	unsigned int i;

	temp = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && temp != NULL; i++)
			temp = temp->next;
	}

	if (temp == NULL)
		return (-1);

	if (temp->next == NULL && index != 0)
		return (-1);

	new = temp->next;

	if (index != 0)
	{
		temp->next = new->next;
		free(new);
	}
	else
	{
		free(temp);
		*head = new;
	}
	return (1);
}
