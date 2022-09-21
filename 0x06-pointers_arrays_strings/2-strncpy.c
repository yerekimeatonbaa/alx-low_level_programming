#include "main.h"

/**
 * _strncpy - function that concatenates two strings.
 * @n: is the pointer is the origin.
 * @dest: is the pointer is the destiny.
 * @src: is the pointer is the destiny.
 * Return: d.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
