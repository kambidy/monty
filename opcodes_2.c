#include "monty.h"
/**
 *add - adds the tw
 *@stack:pointer
 *@ln: line no
 *Return:void
 */
void add(stack_t **stack, unsigned int ln)
{
	stack_t *tmp = *stack;
	int sum;

	if (tmp == NULL || tmp->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't add, stack too short\n", ln);
		freer();
		exit(EXIT_FAILURE);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	sum = tmp->n + tmp->prev->n;
	tmp->prev->n = sum;
	tmp->prev->next = NULL;
	free(tmp);
}
/**
 *nop - does nothing
 *@stack:pointer
 *@ln:line no
 *Return:void
 */
void nop(stack_t **stack, unsigned int ln)
{
	(void)stack;
	(void)ln;
}
/**
 *sub - subtracts
 *element
 *@stack:pointer
 *@ln:line no
 *Return:void
 */
void sub(stack_t **stack , unsigned int ln)
{
	stack_t *tmp = *stack;
	int sub_n;

	if (tmp == NULL || tmp->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't sub, stack too short\n", ln);
		freer();
		exit(EXIT_FAILURE);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	sub_n = tmp->prev->n - tmp->n
	tmp->prev->n = sub_n;
	tmp->prev->next = NULL;
	free(tmp);
}
/**
 *div_op - divides the
 *@stack:pointer
 *@ln:line no
 *Return:void
 */
void div_op(stack_t **stack, unsigned int ln)
{
	stack_t *tmp = *stack;
	int div_n;

	if (tmp == NULL || tmp->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't div, stack too short\n", ln);
		freer();
		exit(EXIT_FAILURE);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	if (tmp->n == 0)
	{
		dprintf(STDERR_FILENO, "L%d: division by zero\n", ln);
		freer();
		exit(EXIT_FAILURE);
	}
	div_n = tmp->prev->n / tmp->n;
	tmp->prev-> = div_n;
	tmp->prev->next = NULL;
	free(tmp);
}
/**
 *mul - multiplies the
 *element
 *@stack:pointer
 *@ln: line no
 *Return:void
 */
void mul(stack_t **stack, unsigned int ln)
{
	stack_t *tmp = *stack;
	int mul_n;

	if (tmp == NULL || tmp->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't mul, stack too short\n", ln);
		freer();
		exit(EXIT_FAILURE);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	mul_n = tmp->prev->n * tmp->n;
	tmp->prev->n = mul_n;
	tmp->prev->next = NULL;
	free(tmp);
}









































































