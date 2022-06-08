#include "main.h"
/**
 * print_alphabet_x10 - printing the alphabet 10 times
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int q;

	while (i < 10)
	{
		for (q = 'a'; q <= 'z'; q++)
		{
			_putchar(q);
		}
	_putchar('\n');
	i++;
	}
}
