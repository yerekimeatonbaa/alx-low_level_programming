#include "main.h"

/**
 * len - function calculates the length of a given string.
 * @dest: pointer to destination.
 * Return: Always 0.
 */
int len(char *dest)
{
	return ((*dest != '\0') ? 1 + len(dest + 1) : 0);
}
/**
 * _strncat - Function that concatenates two strings.
 * @dest: the string where we want to append.
 * @src: the string from which ‘n’ characters are going to append.
 * @n:represents maximum number of character to be appended.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	const unsigned int log = len(dest);

	for (i = 0; i < n; i++)
	{
		*(dest + i + log) = *(src + i);
	}
	return (dest);
}
