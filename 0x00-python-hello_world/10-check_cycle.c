#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A SLL (Singly Linked Lists).
 * Return: 0 -> no cycle | 1 -> there is a cycle.
 */
int check_cycle(listint_t *list)
{
	listint_t *slowPointer, *fastPointer;

	if (list == NULL || list->next == NULL)
		return (0);

	slowPointer = list->next;
	fastPointer = list->next->next;

	while (slowPointer && fastPointer && fastPointer->next)
	{
		if (slowPointer == fastPointer)
			return (1);

		slowPointer = slowPointer->next;
		fastPointer = fastPointer->next->next;
	}

	return (0);
}
