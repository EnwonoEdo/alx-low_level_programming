#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100 followed by
 * but for multiples of three prints Fizz instead of the
 * and the multiples of five prints Buz
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == o && i % 5 != o)
		{
			printf("Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf("%d", i);
		}
	}
	printf("\n");

	return (0);
}

