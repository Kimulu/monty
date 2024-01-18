#include "monty.h"

/**
 * swap - Swap the top two elements of the stack
 * @stack: Pointer to the top of the stack
 * @counter: Line number in the Monty file
 * Return: No return value
 */
void swap(stack_t **stack, unsigned int counter)
{
int temp;
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*stack);
exit(EXIT_FAILURE);
}

temp = (*stack)->n;
(*stack)->n = (*stack)->next->n;
(*stack)->next->n = temp;
}

