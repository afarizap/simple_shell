#include "0_shell.h"

/**
 * main - Shell main function
 * @ac: Arguments to initialize shell (UNUSED)
 * @av: Program name
 * Return: 0 Success, Other Failed.
 */
int main(__attribute__((unused)) int ac, char **av)
{
	int cnt = 1, aux = 0;
	var_s vars;
	size_t in_len;

	start_shell(&vars, av[0], &cnt);

	for (; aux != EOF; cnt++)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", 3);
		aux = getline(&vars.in_line, &in_len, stdin);
		if (aux == -1)
			break;
		if (aux != 1)
		{
			tokenize(&vars);

			if (vars.tokens[0])
			{
				_pipes(&vars);
				if (vars.status != 0)
					print_error(&vars);
			}
			free(vars.tokens);
		}

	}
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "\n", 2);
	free_list(&vars.env);
	free(vars.in_line);
	cnt = vars.status;

	return (cnt);
}
