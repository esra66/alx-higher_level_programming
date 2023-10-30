#include"lists.h"

int check_cycle(listint_t *list)
{
	listint_t *current = list;
	listint_t *runner = list;

	while (runner != NULL && runner->next != NULL) {
		current = current->next;
		runner = runner->next->next;

		if (current == runner) {
			return 1;
		}
	}

	return 0;
}

