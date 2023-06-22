#include "monty.h"
/**
 * f_pall – it prints
 * @head: the stack
 * @counter: no
 * Return: no
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
