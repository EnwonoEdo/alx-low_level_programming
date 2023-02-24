#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 *
 * return: Always 0.
*/
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
			continue;
		_putchar(c + 48);
	}
	_putchar('\n');
}
