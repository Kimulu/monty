#include "monty.h"
/**
 * execute - Executes the opcode
 * @content: Line content
 * @stack: Head of the linked list (stack)
 * @counter: Line counter
 * @file: Pointer to Monty file
 * Return: 0 on success, 1 on failure
 */
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
instruction_t opst[] = {
{"push", push}, {"pall", pall}, {"pint",pint}, {"pop",pop}, {"swap",swap},{"add",add}, {NULL, NULL}
};

unsigned int i = 0;
char *op;

op = strtok(content, " \n\t");

if (op && op[0] == '#')
return (0);

bus.arg = strtok(NULL, " \n\t");

while (opst[i].opcode && op)
{
if (strcmp(op, opst[i].opcode) == 0)
{
opst[i].f(stack, counter);
return (0);
}
i++;
}

if (op && opst[i].opcode == NULL)
{
fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
fclose(file);
free(content);
free_stack(*stack);
exit(EXIT_FAILURE);
}

return (2);
}

