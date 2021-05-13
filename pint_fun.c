#include "monty.h"
/**
 * pint - prints the value at the top of the stack,
 * followed by a new line.
 * @head: Pointer head of the list.
 * @line_count: Number of the line
 * Return: Always nothing
 **/

void pint(stack_t **head, unsigned int line_count)
{
	/* Verify if the stack is empty */
	if (head == NULL || *head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_count);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
