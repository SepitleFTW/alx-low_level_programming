#include "lists.h"

/**
 * listint_len - this will return the number of the elements in the linked list(s)
 * @h - linked list of the type listint_t
 *
 * Return - this will return the nodes
 * 
 *?
 size_t listint_len(const listint_t *h)
{
size_t num = 0;

while (h)
{
num++;
h = h->next;
}
return (num);
}
