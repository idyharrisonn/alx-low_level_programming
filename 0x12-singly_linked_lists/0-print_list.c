#include "lists.h"
/**
 * print_list - print all element in a singly linked list
 *
 * @h: head of the list
 * Return: total number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
			printf("[%1u] %s\n", (unsigned int)h->len, "(nil)");
		else
		{
			printf("[%1u] %s\n", (unsigned int)h->len, h->str);
		}
		h = h->next;
	}
	printf("[%1u] %s\n",(unsigned int)h->len, "(nil)");
	return (i);
}
