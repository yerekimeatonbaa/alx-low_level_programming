#include "main.h"

/**
 * string_toupper - this fuction print in uppercase whit ascii code.
 * @str: is the string to comparate.
 * Return: i.
 */
char *string_toupper(char *str)
{
	char *i = str;

	for (; *str != '\0'; str++)
		if (*str >= 97 && *str <= 122)
			*str -= 32;
	return (i);
}
