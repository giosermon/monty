#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack.
 * @head:  Pointer head of the double linkedlist.
 * @line_count: Number of the line
 * Return: Void - Nothing
 **/

void swap(stack_t **head, unsigned int line_count)
{
	int temp; /* Temporal variable for swap */

	/* Verify If the stack contains less than two elements */
	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_count);
		exit(EXIT_FAILURE);
	}
  else
  {
	temp = (*head)->n;
	(*head)->n = (*head)->next->n;
	(*head)->next->n = temp;
  }
}
