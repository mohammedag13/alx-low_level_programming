#include "lists.h"

/**
 * sum_listint - sums all the data of a linked list
 * @head: pointer to the first node
 * Return: the sum of all the data (n) of linked list, or 0 is list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head->next != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	sum = sum + head->n;
	return (sum);
}
