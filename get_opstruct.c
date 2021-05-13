#include "monty.h"
/**
 * get_func -  Calls for the function needing
 * @head: Head of the list
 * @token: Parameters for entry
 * @line_count: Number of the line
 *
 * Return: Void - Nothing
 **/
void  get_func(stack_t **head, char *token, unsigned int line_count)
{
	instruction_t command[] = {
		{"pall", pall},
		{"push", push},
		{"pint", pint},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"pop", pop},
		{NULL, NULL}
	};

	int i;

  for (i = 0; command[i].opcode; i++)
	{
		if (strcmp(command[i].opcode, token) == 0)
		{
			command[i].f(head, line_count);
			return;
		}
	}
	if (token[0] != '#')
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_count, token);
		exit(EXIT_FAILURE);
	}
}
