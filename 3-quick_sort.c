#include "sort.h"

/**
 * element_swap - Swaps two element in an array.
 * @array: Array.
 * @ele: Index of left element.
 * @eri: Index of right element.
 */
void element_swap(int *array, size_t ele, size_t eri)
{
int mp;

if (array != NULL)
{
mp = array[ele];
array[ele] = array[eri];
array[eri] = mp;
}
}
/**
 * lomuto_quick_sort - Sorts a order array using the
 * quick sort algorithm and Lomuto's partition scheme.
 * @array: Array of integer to sort.
 * @down: Starting position to order.
 * @top: Ending position to order.
 * @size: Size of array.
 */
void lomuto_quick_sort(int *array, size_t down, size_t top, size_t size)
{
size_t h, j;
int spin;

if ((down >= top) || (array == NULL))
return;
spin = array[top];
h = down;
for (j = down; j < top; j++)
{
if (array[j] <= spin)
{
if (h != j)
{
element_swap(array, h, j);
print_array(array, size);
}
h++;
}
}
if (h != top)
{
element_swap(array, h, top);
print_array(array, size);
}
if (h - down > 1)
lomuto_quick_sort(array, down, h - 1, size);
if (top - h > 1)
lomuto_quick_sort(array, h + 1, top, size);
}

/**
 * quick_sort - Sorts an array using quick sort algorithm
 * and Lomuto.
 * @array: Array to sort.
 * @size: Size of array.
 */
void quick_sort(int *array, size_t size)
{
if (array != NULL)
{
lomuto_quick_sort(array, 0, size - 1, size);
}
}
