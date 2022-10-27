#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
* add_node - adds a new node to the begining of the SLL
* @head: pointer to first node
* @str: duplicated
* Return:  the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *node_to_add;
	int count;

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
	node_to_add->next = *head;
	*head = node_to_add;

	return (*head);
}
