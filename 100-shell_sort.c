#include <stdio.h>

void print_array(int *array, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

void shell_sort(int *array, size_t size)
{
	size_t gap = 1;

	while (gap <= size / 3)
	{
		gap = gap * 3 + 1;
	}

	while (gap > 0)
	{
		for (size_t i = gap; i < size; i++)
		{
			int temp = array[i];
			size_t j;

			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = temp;
		}

		print_array(array, size);

		gap = (gap - 1) / 3;
	}
}

int main void
{

	int array[] = {64, 25, 12, 22, 11};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Original array: ");
	print_array(array, size);

	shell_sort(array, size);

	printf("Sorted array: ");
	print_array(array, size);

	return (0);
}
