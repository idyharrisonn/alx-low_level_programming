#ifndef _LIST_H_
#define _LIST_H_
#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - selr referential struct
 * for creating nodes of a singly linked list
 * @n: integer data
 * @next: self referential pointer
 * pointer to the next node of a list
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif
