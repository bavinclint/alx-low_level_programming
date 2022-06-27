#include "main.h"
/**
 * _strcat - concats two arrays
 *
 * @dest: destination of concat
 * @src: source array to concat
 *
 * Return: char value
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int a;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (a = 0; src[a] != 0; a++)
		dest[i + a] = src[a];
	dest[i + a] = '\0';
	return (dest);
}
