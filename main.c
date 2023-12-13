#include "monty.h"
go_Obj go = {NULL, NULL, NULL, 0};
/**
* main - main
* @argc: argc
* @argv: argv
* Return: int
*/
int main(int argc, char *argv[])
{

	size_t size = 0;
	ssize_t r_l = 1;
	stack_Obj *stack = NULL;
	unsigned int index = 0;
	char *content;
	FILE *file;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	go.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (r_l > 0)
	{
		content = NULL;
		r_l = getline(&content, &size, file);
		go.content = content;
		index++;
		if (r_l > 0)
		{
			execute(content, &stack, index, file);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
