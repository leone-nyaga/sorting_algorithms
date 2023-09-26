#include "sort.h"

/**
 * @array: The array to be partitioned.
 * @size: The number of elements in the array.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 */
void lomuto_partition(int *array, size_t size, int low, int high)
{
    if (low < high)
    {
        int pivot_index = lomuto(array, size, low, high);
        if (pivot_index > 0)
            print_array(array, size);
        lomuto_partition(array, size, low, pivot_index - 1);
        lomuto_partition(array, size, pivot_index + 1, high);
    }
}

/**
 * lomuto - Performs the Lomuto partition.
 * @array: The array to be partitioned.
 * @size: The number of elements in the array.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 *
 * Return: The index of the pivot element after partition.
 */
int lomuto(int *array, size_t size, int low, int high)
{
    int pivot = array[high];
    int i = low - 1;
    int j, temp;

    for (j = low; j <= high - 1; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            if (i != j)
                print_array(array, size);
        }
    }

    temp = array[i + 1];
    array[i + 1] = array[high];
    array[high] = temp;
    if (i + 1 != high)
        print_array(array, size);

    return (i + 1);
}

/**
 * quick_sort - Sorts an array of integers in ascending order using
 *              the Quick sort algorithm with the Lomuto partition scheme.
 * @array: The array to be sorted.
 * @size: The number of elements in the array.
 */
void quick_sort(int *array, size_t size)
{
    if (size < 2)
        return;

    lomuto_partition(array, size, 0, size - 1);
}
