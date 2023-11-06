#include "lists.h"
#include <stdio.h>

int is_palindrome(listint_t **head)
{
	listint_t *new_head, *tortoise, *hare, *previous_tortoise;
	listint_t *cut = NULL, *half, *iterator1, *iterator2;

	if (!head || !*head)
		return (1);

	new_head = *head;
	if (new_head->next != NULL)
	{
		for (hare = new_head, tortoise = new_head; hare != NULL && hare->next != NULL;
				previous_tortoise = tortoise, tortoise = tortoise->next)
			hare = hare->next->next;
		if (hare != NULL)
		{
			cut = tortoise;
			tortoise = tortoise->next;
		}
		previous_tortoise->next = NULL;
		half = tortoise;
		iterator1 = reverse_listint(&half);
		for (iterator2 = *head; iterator2; iterator1 = iterator1->next, iterator2 = iterator2->next)
		{
			if (iterator2->n != iterator1->n)
				return (0);
		}
		if (cut == NULL)
			previous_tortoise->next = half;
		else
		{
			previous_tortoise->next = cut;
			cut->next = half;
		}
	}

	return (1);
}

/**
 *  * reverse_listint - Reverses a linked list in place
 *   * @head: Pointer to a pointer
 *     * Return: The new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node = NULL, *previous_node = NULL;

	if (!head || !*head)
		return (NULL);

	while ((*head)->next)
	{
		next_node = (*head)->next;

		(*head)->next = previous_node;

		previous_node = *head;

		*head = next_node;
	}

	(*head)->next = previous_node;

	return (*head);
}

