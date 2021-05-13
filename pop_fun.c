#include "monty.h"
/**
 * pop - Removes the top element of the stack.
 * @head: Pointer head of the list.
 * @line_count: Number of the line
 * Return: Always nothing
 **/
void pop(stack_t **head, unsigned int line_count)
{
	stack_t *new_list = *head;

	/* Verify if the stack is empty */
	if (head == NULL || *head == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_count);
		exit(EXIT_FAILURE);
	}
	else
  { 
  new_list = (*head)->next;
	free(*head);
	*head = new_list;
  }
}
