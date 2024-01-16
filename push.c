#include "monty.h"

/**
 * push - Add a node to the stack or queue
 * @head: Pointer to the head of the stack
 * @counter: Line number in the Monty file
 * Return: No return value
 */
void push(stack_t **head, unsigned int counter)
{
    int n;
    unsigned int j = 0;
    int flag = 0;

    if (!bus.arg)
    {
        fprintf(stderr, "L%d: usage: push integer\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    if (bus.arg[0] == '-')
    {
        j++;
    }

    while (bus.arg[j] != '\0')
    {
        if (bus.arg[j] > '9' || bus.arg[j] < '0')
        {
            flag = 1;
            break;
        }
        j++;
    }

    if (flag == 1)
    {
        fprintf(stderr, "L%d: usage: push integer\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    n = atoi(bus.arg);

    if (bus.lifi == 0)
    {
        addnode(head, n);
    }
    else
    {
        addqueue(head, n);
    }
}

