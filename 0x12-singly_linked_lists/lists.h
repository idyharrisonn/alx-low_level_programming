#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string (malloced string)
 * @len: length of the string
 * @next: pointer to the next node
 */
typedef struct list_s
{
        char *str;
        size_t len;
        struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
