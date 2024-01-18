#include "monty.h"

/**
 * add - Add the top two elements of the stack
 * @stack: Pointer to the top of the stack
 * @counter: Line number in the Monty file
 * Return: No return value
 */
void add(stack_t **stack, unsigned int counter)
{
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't add, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*stack);
exit(EXIT_FAILURE);
}

(*stack)->next->n += (*stack)->n;
pop(stack, counter); // Remove the top element
}
