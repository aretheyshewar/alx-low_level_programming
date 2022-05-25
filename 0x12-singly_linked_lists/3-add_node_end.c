#include "lists.h"
/**
* add_node_end - function
* @head: double pointer - points to first element
* @str: string to be duplicated
*
* Description: function to add new node at the end of a list_t list
* Return: add of the new element, or NULL if fail
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *newNode;
	int length, index = 0;
	char *dupstr;

	dupstr = strdup(str);
	while (*str)
	{
		index++;
		str++;
	}
	length = index;
	if (dupstr == NULL)
		return (NULL);
	newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = dupstr;
	newNode->len = length;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = newNode;
	}
	return (newNode);
}
