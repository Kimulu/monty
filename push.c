#include "monty.h"

/**
 * push - Add a node to the stack or queue
 * @head: Pointer to the head of the stack
 * @counter: Line number in the Monty file
 * Return: No return value
 */
void push(stack_t **head, unsigned int counter)
{
if (!bus.arg || !is_valid_number(bus.arg))
handle_error(counter);

int n = atoi(bus.arg);
bus.lifi == 0 ? addnode(head, n) : addqueue(head, n);
}

/**
 * is_valid_number - Check if a string is a valid integer
 * @str: String to check
 * Return: 1 if valid, 0 otherwise
 */
int is_valid_number(const char *str)
{
if (*str == '-')
str++;

while (*str)
{
if (!isdigit(*str))
return (0);
str++;
}

return (1);
}

/**
 * handle_error - Handle errors in the push function
 * @counter: Line number in the Monty file
 * Return: No return value
 */
void handle_error(unsigned int counter)
{
fprintf(stderr, "L%d: usage: push integer\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}

