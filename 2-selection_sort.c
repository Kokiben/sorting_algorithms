#include "sort.h"
#include <stdio.h>


/**
 * selection_sort - sorts an array of int in ascending order use Selection sort 
 * @array: Array
 * @size: Size of array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
size_t j, sp, in_m;
int mp;

for (sp = 0; sp < size - 1; sp++)
{
in_m = sp;
for (j = sp + 1; j < size; j++)
{
if (array[j] < array[in_m])
in_m = j;
}

if (in_m != sp)
{
mp = array[sp];
array[sp] = array[in_m];
array[in_m] = mp;
print_array(array, size);
}
}
}
