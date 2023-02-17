#include <stdio.h>

/**
 * main - prints the size of various types of computer
 * Return: 0 when successful
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("sife of int: %lu bytes(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0)
}

