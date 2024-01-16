#include "monty.h"

/**
 * pall - prints the stack
 * @stack: pointer to the top of the stack
 * @line_number: current line number (not used)
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;  /* Start at the top of the stack */
	(void)line_number;  /* Unused parameter */

	/* Check if the stack is empty */
	if (current == NULL)
		return;

	/* Iterate through the stack and print each element */
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

