#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: pointer to the 1st element of a singly linked list of
 *     structs of type list_t
 * Return: amount of nodes in the list
 */

size_t print_list(const list_t *h)
{
	unsigned int nodes = 1;

	if (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		if (h->next)
			nodes = nodes + print_list(h->next);

		return (nodes);
	}
	else
		return (0);
}
