#include "main.h"


/**
 * _strncat - concatenates two strings
 * @dest: pointer to a first string
 * @src: pointer to a second string
 * @n: length of src
 * Return: dest (pointer to the resulting string)
 */
char *_strncat(char *dest, char *src, int n)
{
	int y;
	int x;

	for (y = 0; dest[y] != 0; y++)
		;
	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[y + x] = src[x];
	return (dest);
}
