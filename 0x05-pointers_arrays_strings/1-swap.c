#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: Integer to swap
 * @b: Integer to swap
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
