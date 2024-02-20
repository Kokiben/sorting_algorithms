#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble sort algorithm
 *
 * @array: Array of int
 * @size: Size of array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
size_t j;
int mp, sor;

if (!array || size == 0)
return;

do {
sor = 1;
for (j = 0; j < size - 1; j++)
{
if (array[j] > array[j + 1])
{
sor = 0;
mp = array[j];
array[j] = array[j + 1];
array[j + 1] = mp;
print_array(array, size);
}
}

} while (sor == 0);
}
