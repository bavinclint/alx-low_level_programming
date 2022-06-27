#include "main.h"
/**
 * _strlen - gets character string
 *
 * @s: character to getstring
 * Return: returns length
 */
int _strlen(char *s)
{
	int p;

	for (p = 0; s[p] != '\0'; p++)
	{}
	return (p);
}
