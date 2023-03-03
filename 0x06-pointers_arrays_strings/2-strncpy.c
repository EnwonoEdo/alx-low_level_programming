#include "main.h"
/**
 * _strncpy - A function that copies a string.
 *
 * @dest: destination string
 * @src: source string
 * @n: number of strings
 *
 * Return: @dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
