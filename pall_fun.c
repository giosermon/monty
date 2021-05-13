#include "monty.h"
/**
 * pall - Prints all the values on the stack,
 * starting from the top of the stack.
 * @head: Pointer head of the list.
 * @line_count: Number of the line
 * Return: Always nothing
 **/

void pall(stack_t **head, unsigned int line_count __attribute__((unused)))
{
	/* Transfer values to not modify original list */
	stack_t *temp = *head;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
