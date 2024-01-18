#include "monty.h"

/**
 * pop - Remove the top element of the stack
 * @stack: Pointer to the top of the stack
 * @counter: Line number in the Monty file
 * Return: No return value
 */
void pop(stack_t **stack, unsigned int counter)
{
stack_t *temp;
if (*stack == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*stack);
exit(EXIT_FAILURE);
}
temp = *stack;
*stack = (*stack)->next;
free(temp);
}
