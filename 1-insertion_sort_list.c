#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - sorts a doubly linked list of int in
 * ascending order using the insertion sort
 * algorithm
 *
 * @list: Doubly linked list
 * Return: -
 */
void insertion_sort_list(listint_t **list)
{
listint_t *sor, *mp;

if (!list)
return;

sor = *list;

while (sor)
{
while (sor->next && (sor->n > sor->next->n))
{
mp = sor->next;
sor->next = mp->next;
mp->prev = sor->prev;

if (sor->prev)
sor->prev->next = mp;

if (mp->next)
mp->next->prev = sor;

sor->prev = mp;
mp->next = sor;

if (mp->prev)
sor = mp->prev;
else
*list = mp;

print_list(*list);
}
sor = sor->next;
}
}
