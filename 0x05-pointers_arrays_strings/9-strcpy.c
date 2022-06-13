#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - copies the string
 * @dest: pointer to a buffer
 * @src: pointer to a string
 *
 * Return: dest - copy
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
