#include "lists.h"
#include <stdio.h>

/**
 *  * is_palindrome - function that checks 
 *   * @list: double pointer
 *     * Return: 1 or 0
 */
int is_palindrome(listint_t **list)
{
	listint_t *slow = *list;
	listint_t *fast = *list;
	listint_t *mid = *list;
	listint_t *duplicate = NULL;

	if (*list == NULL || (*list)->next == NULL)
		return (1);

	while (1)
	{
		fast = fast->next->next;
		if (!fast)
		{
			duplicate = slow->next;
			break;
		}
		if (!fast->next)
		{
			duplicate = slow->next->next;
			break;
		}
		slow = slow->next;
	}
	reverse_list(&duplicate);

	while (duplicate && mid)
	{
		if (mid->data == duplicate->data)
		{
			duplicate = duplicate->next;
			mid = mid->next;
		}
		else
			return (0);
	}

	if (!duplicate)
		return (1);
	return (0);
}

/**
 *  * reverse_list - function that reverses
 *   * @list: pointer to the first node
 *     * Return: pointer
 */
void reverse_list(listint_t **list)
{
	listint_t *prev = NULL;
	listint_t *current = *list;
	listint_t *next = NULL;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*list = prev;
}

