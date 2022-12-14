#include "main.h"
#include <string.h>
/**
 * _strcat - appends src string to the dest
 *
 * @dest: destination character
 * @src: source characters
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
