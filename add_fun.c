#include "monty.h"

/**
* add - Adds the top two elements of the stack.
* @head: Pointer head of the list.
* @line_count: Number of the line
* Return: Always nothing
**/
void add(stack_t **head, unsigned int line_count)
{
	int add_elem;

	/* Verify If the stack contains less than two elements */
	if (!head || !(*head) || !(*head)->next)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_count);
		exit(EXIT_FAILURE);
	}

	add_elem = (*head)->n;
	add_elem += (*head)->next->n;
	pop(head, line_count);
	(*head)->n = add_elem;
}