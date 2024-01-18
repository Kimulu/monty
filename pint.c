#include "monty.h"

/**
 * pint - Print the value at the top of the stack
 * @stack: Pointer to the top of the stack
 * @counter: Line number in the Monty file
 * Return: No return value
 */
void pint(stack_t **stack, unsigned int counter)
{
if (*stack == NULL)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*stack);
exit(EXIT_FAILURE);
}

printf("%d\n", (*stack)->n);
}
