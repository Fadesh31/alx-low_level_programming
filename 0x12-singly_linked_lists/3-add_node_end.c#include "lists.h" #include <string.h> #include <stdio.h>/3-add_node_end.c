#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
* add_node_end - add a new node at the end of SLL
* @head: double pointer to the head of the SLL
* @str: string to copy to new node
* Return: NULL or Pointer of new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current_node;
	list_t *node_to_add;
	int count;

	current_node = *head;
	while (current_node && current_node->next != NULL)
		current_node = current_node->next;

	for (count = 0; str[count] != '\0'; count++)
		;

	node_to_add = malloc(sizeof(list_t));

	if (node_to_add == NULL)
	{
		free(node_to_add);
		return (NULL);
	}

	node_to_add->str = strdup(str);

	if (node_to_add->str == NULL)
	{
		free(node_to_add);
		return (NULL);
	}

	node_to_add->len = count;
	node_to_add->next = NULL;

	if (current_node)
		current_node->next = node_to_add;
	else
		*head = node_to_add;

	return (node_to_add);
}
