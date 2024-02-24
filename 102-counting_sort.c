#include "sort.h"
/**
 * counting_sort - sorts array of int in ascending
 * order using counting sort
 * @array: Ptr to array
 * @size: Size of array
 **/
void counting_sort(int *array, size_t size)
{
int K, L, *arr_count, *ax;
size_t a;

if (!array || size < 2)
return;
K = array[0];
for (a = 0; a < size; a++)
{
if (array[a] > K)
K = array[a];
}
arr_count = calloc((K + 1), sizeof(int));
for (a = 0; a < size; a++)
{
arr_count[array[a]]++;
}
for (L = 1; L < K; L++)
{
arr_count[L + 1] += arr_count[L];
}
print_array(arr_count, K + 1);
ax = malloc(sizeof(int) * size);
for (a = 0; a < size; a++)
{
arr_count[array[a]]--;
ax[arr_count[array[a]]] = array[a];
}
for (a = 0; a < size; a++)
{
array[a] = ax[a];
}
free(ax);
free(arr_count);
}
