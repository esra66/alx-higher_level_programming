#include "lists.h"

/**
 *  * reverseList - reverses the second half of the list
 *   *
 *    * @secondHalfHead: head of the second half
 *     * Return: no return
 */
void reverseList(listint_t **secondHalfHead)
{
	listint_t *prev;
	listint_t *current;
	listint_t *next;

	prev = NULL;
	current = *secondHalfHead;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*secondHalfHead = prev;
}

/**
 *  * compareLists - compares each element of the list
 *   *
 *    * @firstHalfHead: head of the first half
 *     * @secondHalfHead: head of the second half
 *      * Return: 1 if they are equal, 0 if not
 */
int compareLists(listint_t *firstHalfHead, listint_t *secondHalfHead)
{
	listint_t *temp1;
	listint_t *temp2;

	temp1 = firstHalfHead;
	temp2 = secondHalfHead;

	while (temp1 != NULL && temp2 != NULL)
	{
		if (temp1->n == temp2->n)
		{
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
		else
		{
			return (0);
		}
	}

	if (temp1 == NULL && temp2 == NULL)
	{
		return (1);
	}

	return (0);
}

/**
 *  * isPalindrome - checks if a singly linked list is a palindrome
 *   *
 *    * @head: pointer to head of list
 *     * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int isPalindrome(listint_t **head)
{
	listint_t *slow, *fast, *prevSlow;
	listint_t *secondHalf, *middle;
	int isPalindrome;

	slow = fast = prevSlow = *head;
	middle = NULL;
	isPalindrome = 1;

	if (*head != NULL && (*head)->next != NULL)
	{
		while (fast != NULL && fast->next != NULL)
		{
			fast = fast->next->next;
			prevSlow = slow;
			slow = slow->next;
		}

		if (fast != NULL)
		{
			middle = slow;
			slow = slow->next;
		}

		secondHalf = slow;
		prevSlow->next = NULL;
		reverseList(&secondHalf);
		isPalindrome = compareLists(*head, secondHalf);

		if (middle != NULL)
		{
			prevSlow->next = middle;
			middle->next = secondHalf;
		}
		else
		{
			prevSlow->next = secondHalf;
		}
	}

	return (isPalindrome);
}

