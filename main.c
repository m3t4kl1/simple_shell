#include "main.h"

/**
 * main - main function
 * @ac: arg count
 * @av: arg vector
 * Return: 1
 */

int main(int ac __attribute__((unused)), char *av[])
{
	int ret_stat = EXIT_SUCCESS;
	char *line = NULL;
	char **array;
	size_t n = 0;
	int cnt = 1;

	while (1)
	{
		signal(SIGINT, manage_signal);  /* sends si to process if running*/
		if (isatty(STDIN_FILENO))  /** checks to see if fd is stdin */
			start();
		if (getline(&line, &n, stdin) == EOF) /* reads lines from stdin */
			break;
		array = strsplit(line, " \n\t");  /* toekizes the line*/
		if (array == NULL || array[0] == NULL)
		{
			free(array);
			ret_stat = EXIT_FAILURE;
			cnt++;
			continue;
		}
		if (_strcmp(array[0], "exit") == 0)
			ret_stat = exitfunc(array, av, line, cnt, ret_stat);
		if (_strcmp(array[0], "env") == 0)
		{
			ret_stat = print_env();
			free(array);
			cnt++;
			continue;
		}
		ret_stat = process(array, av, cnt);
		free(array);
		array = NULL;
		fflush(stdin);
		cnt++;
	}
	free(line);
	return (ret_stat);
}

