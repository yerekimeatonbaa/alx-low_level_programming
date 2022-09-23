#include "main.h"

/**
*_strcat - concartenates 2 strings
*@dets: destination array
*@src: source array
*Return: destination array
*/

char *_strcat(char *dest, char *src)
{
char *ptr = dest;
while (*ptr !=0)
ptr++;
while (*src !=0)
*ptr++ = *src++;
*ptr =0;
return (dest);

}
