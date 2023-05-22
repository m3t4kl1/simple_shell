#include "main.h"
/**
*error_print - prints program errors
*@array: array of command and args
*@av: array from main
*@cnt: count the number of prompts
*@num: error number
*Return: void
*/
void error_print(char **array, char *av[], int cnt, int num)
{
	int lenav, lenarr;

	lenarr = _strlen(array[0]);
	lenav = _strlen(av[0]);

	if (num == 127 || num == 126)
	{
		write(STDOUT_FILENO, av[0], lenav);
		write(STDOUT_FILENO, " : ", 3);
		print_int(cnt);
		write(STDOUT_FILENO, ": ", 2);
		write(STDOUT_FILENO, array[0], lenarr);
		write(STDOUT_FILENO, ": ", 2);
		perror("");
	}
	if (num == 2)
	{
		write(STDOUT_FILENO, av[0], lenav);
		write(STDOUT_FILENO, ": ", 2);
	}
}
/**
*print_int - calls recursive w/ iterator
*@n: num to print
*Return: length of number
*/
int print_int(int n)
{
	int i = 1;

	return (recursive_int(n, i));
}
/**
*recursive_int - prints count of digits
*@n: number to receive to count
*@cnt: count the length of number
*Return: number of digits of n
*/
int recursive_int(int n, int cnt)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = (-1) * n;
		cnt++;
	}
	else
		num = n;

	if (num / 10)
	{
		cnt = recursive_int(num / 10, cnt = cnt + 1);
	}
	_putchar((num % 10) + '0');
	return (cnt);
}
/**
*_putchar - writes the character c to stdout
*@c: The character to print
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}


