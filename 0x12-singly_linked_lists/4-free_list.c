#include "lists.h"
/**
* free_list - function
* @head: ptr to beginning of list
*
* Description: function to free list
* Return: 0
*/
void free_list(list_t *head)
{
	list_t *temp = head; /* Will store head ->next*/

	while (head != NULL)
	{
		temp = head;
		/* free the stuff inside what head is pointing to*/
		free(temp->str);
		free(temp);
		head = head->next; /* goes to next node in list and repeat process*/
	}
}
