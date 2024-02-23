#include "sort.h"
#include <stdio.h>
/**
 * element_swap - Swaps two element in an array.
 * @array: Array.
 * @a: first index
 * @b: second index
 * Return: Nothing
 */
void element_swap(int *array, int a, int b)
{
int mp;

if (array[a] != array[b])
{
mp = array[a];
array[a] = array[b];
array[b] = mp;
}
}

/**
 * shell_sort - Sort list and print changes
 * @array: Array.
 * @size: size of array
 * Return: -
 */
void shell_sort(int *array, size_t size)
{
size_t s = 0,  a, b;

if (size < 2)
return;

while (s <= size / 3)
s = s * 3 + 1;

while (s >= 1)
{
for (a = s; a < size; a++)
for (b = a; b >= s && array[b] < array[b - s]; b -= s)
element_swap(array, b, b - s);
s /= 3;
print_array(array, size);
}
}
