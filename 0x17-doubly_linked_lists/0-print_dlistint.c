#include "lists.h"
/**
 * print_dlistint - prints length and elements
 * @h: head of list
 * Return: size_t value
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}
