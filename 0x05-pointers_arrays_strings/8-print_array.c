#include "main.h"
#include <stdio.h>
/**
 * print_array - a funtion that prints n elements of an array
 * @a: is the array.
 * @n: is the size.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
