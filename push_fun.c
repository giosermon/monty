#include "monty.h"

/**
 * push - Function for push an element to the stack.
 * @head: Pointer head of the list.
 * @line_count: Number of the line
 * Return: Always nothing
 **/

void push(stack_t **head, unsigned int line_count)
{
	stack_t *new_node = NULL;
	int conter = 0;
	char *value = strtok(NULL, " \n");

	if (!value)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_count);
		exit(EXIT_FAILURE);
	}

	while (value[conter] != '\0')
	{
		if (!isdigit(value[conter]) && value[conter] != '-')
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_count);
			exit(EXIT_FAILURE);
		}
		conter++;
	}
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = atoi(value);
	new_node->prev = NULL;

	if (*head)
	{
		new_node->next = (*head);
		(*head)->prev = new_node;
		(*head) = new_node;
	}
	else
	{
		(*head) = new_node;
		new_node->next = NULL;
	}
}
