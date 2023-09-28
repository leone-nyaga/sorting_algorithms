#include "sort.h"

/**
 * initialize_count_array - Initializes the count_array.
 * @array: The input array.
 * @size: The size of the input array.
 * @min: The minimum value in the input array.
 * @count_array: The count_array to be initialized.
 */
void initialize_count_array(int *array, size_t size, int min, int *count_array)
{
    size_t i;
    for (i = 0; i < size; i++)
    {
        count_array[array[i] - min]++;
    }
}

/**
 * update_count_array - Updates the count_array.
 * @count_array: The count_array to be updated.
 * @range: The range of values in the input array.
 */
void update_count_array(int *count_array, int range)
{
    int i;
    for (i = 1; i < range; i++)
    {
        count_array[i] += count_array[i - 1];
    }
}

/**
 * build_output_array - Builds the sorted output array.
 * @array: The input array.
 * @size: The size of the input array.
 * @min: The minimum value in the input array.
 * @count_array: The count_array.
 * @output: The output array to be built.
 */
void build_output_array(int *array, size_t size, int min, int *count_array, int *output)
{
    size_t i;
    for (i = size; i > 0; i--)
    {
        output[count_array[array[i - 1] - min] - 1] = array[i - 1];
        count_array[array[i - 1] - min]--;
    }
}

/**
 * counting_sort - Sorts an array of integers in ascending order using Counting sort.
 * @array: The array to be sorted.
 * @size: The number of elements in the array.
 */
void counting_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
    {
        return;
    }

    int max = array[0];
    int min = array[0];

    size_t i;
    for (i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    int range = max - min + 1;
    int *count_array = malloc(range * sizeof(int));
    int *output = malloc(size * sizeof(int));

    if (count_array == NULL || output == NULL)
    {
        free(count_array);
        free(output);
        return;
    }

    for (i = 0; i < range; i++)
    {
        count_array[i] = 0;
    }

    initialize_count_array(array, size, min, count_array);
    update_count_array(count_array, range);
    build_output_array(array, size, min, count_array, output);

    for (i = 0; i < size; i++)
    {
        array[i] = output[i];
    }

    printf("%d", count_array[0]);
    for (i = 1; i < range; i++)
    {
        printf(", %d", count_array[i]);
    }
    printf("\n");

    free(count_array);
    free(output);
}

