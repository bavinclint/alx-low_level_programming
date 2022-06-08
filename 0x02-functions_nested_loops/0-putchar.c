#include <stdio.h>
#include <unistd.h>

/**
 * main - printing a string with _putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	int s = 0;
	char h[] = "_putchar";

	while (h[s])
	{
		putchar(h[s]);
		s++;
	}
	putchar('\n');
	return (0);
}
