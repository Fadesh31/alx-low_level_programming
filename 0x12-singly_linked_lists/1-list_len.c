#include "lists.h"

/**
* list_len - a function that returns the number of nodes in a SLL
* @h: pointer to the head
* Return: number of nodes
*/

size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}

	return (count);
}
