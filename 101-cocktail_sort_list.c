#include "sort.h"

/**
 * element_swap - Swaps two element of doubly linked list
 *
 * @elemen: element to change
 * @lis: dll head
 *
 * Return: -
 */
void element_swap(listint_t **elemen, listint_t **lis)
{
listint_t *mp = *elemen, *mp2, *mp3;


if (!(*elemen)->prev)
*lis = (*elemen)->next;

mp = mp3 = *elemen;
mp2 = mp->next;

mp->next = mp2->next;
mp3 = mp->prev;
mp->prev = mp2;
mp2->next = mp;
mp2->prev = mp3;

if (mp2->prev)
mp2->prev->next = mp2;


if (mp->next)
mp->next->prev = mp;

*elemen = mp2;

}
/**
 * cocktail_sort_list - function that sorts a doubly linked list
 * of int in ascending order using
 *
 * @list: head of list to be sort
 *
 * Return: -
 */
void cocktail_sort_list(listint_t **list)
{
listint_t *hd, *ax;
int s = 0, p = -1, o = -1;

if (!list || !(*list) || (!((*list)->prev) && !((*list)->next)))
return;

hd = *list;
while (o >= p)
{
p++;
while (hd->next && s != o)
{
if (hd->n > hd->next->n)
{
ax = hd;
element_swap(&ax, list);
print_list(*list);
hd = ax;
}

s++;
hd = hd->next;
}

if (p == 0)
o = s;
o--;
while (hd->prev && s >= p)
{
if (hd->n < hd->prev->n)
{
ax = hd->prev;
element_swap(&ax, list);
print_list(*list);
hd = ax->next;
}
s--;
hd = hd->prev;
}
}
}
