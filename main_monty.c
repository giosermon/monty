#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 *main - entry point for interpretor
 *@ac: the number of command line arguments
 *@av: the array of command line argument strings
 *Return: 0 always
 */

int main(int argc, char *argv[])
{
	char *opcomand, *line_num = NULL;
	unsigned int accounter = 0;
	stack_t *head = NULL;
	ssize_t read_char;
	size_t buffer_size;
	FILE *file;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((read_char = getline(&line_num, &buffer_size, file)) != -1)
	{
		opcomand = strtok(line_num," \n");
		accounter++;
		if (opcomand)
			 get_func(&head, opcomand, accounter);

		else if (!opcomand)
			continue;

	}
	if (line_num)
		free(line_num);
	free_all(&head);
	fclose(file);
	exit(EXIT_SUCCESS);
}
