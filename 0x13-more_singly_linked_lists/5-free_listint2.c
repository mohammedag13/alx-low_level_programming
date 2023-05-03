#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: pointer to the first node
 * REturn: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *new, *temp;

	if (head != NULL)
	{
		new = *head;
		while ((temp = new) != NULL)
		{
			new = new->next;
			free(temp);
		}
		*head = NULL;
	}
}
