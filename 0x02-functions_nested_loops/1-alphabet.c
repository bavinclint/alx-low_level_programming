#include "main.h"
/**
 * print_alphabet - printing the alphabet
 *
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	int q;

	for (q = 'a'; q <= 'z'; q++)
	{
		_putchar(q);
	}
	_putchar('\n');
}
