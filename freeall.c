#include "monty.h"
/**
 * free_all - Frees memory in stack
 * @head: Pointer head of the list.
 * Return: Always nothing
 **/

void free_all(stack_t **head)
{
	stack_t *temp;
	stack_t *head_list;

	head_list = *head;

	while (head_list)
	{
		temp = head_list;
		head_list = head_list->next;
		free(temp);
	}
}
