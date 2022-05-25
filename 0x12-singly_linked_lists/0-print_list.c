#include "lists.h"
/**
* print_list - function
* @h: string to print
*
* Description: Fnction to print all elelemtns of the list_t list.
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
