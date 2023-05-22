#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
*_strcmp - fucntion that compares string s1 to s2
*@s1: string variable to compare to s2
*@s2: string variable thats compared to by s1
*Return: 0 = strings are the same
*/
int _strcmp(char *s1, char *s2)
{
	int comp = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	if (comp == 0)
		return (0);
	else
		return (0);
}
/**
*_strcpy - function that copies a string
*@dest: destination variable
*@src: source variable
*Description: function copying string including null
*Return: 0 = Success
*/
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	for (j = 0; j < i; j++)
		dest[j] = src[j];
	dest[j] = '\0';

	return (dest);
}
/**
*_strcat - concatenates two strings function
*@dest: Destination variable
*@src: Source destination
*Description: Function that concatenates two strings
*Return: 0 = Success
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int len;

	for (i = 0; dest[i]; i++)

		;

		for (len = 0; src[len]; len++)
		{
			dest[i] = src[len];
			i++;
		}
		return (dest);
}
/**
*strsplit - splits string with strtok
*@string: string to split
*@delim: delimiter in string
*Return: double pointer array w/ string split
*/
char **strsplit(char *string, char *delim)
{
	char **array;
	char *tok;
	int i = 0;

	array = (char **) malloc(sizeof(char *) * 1024);
	if (array == NULL)
	{
		return (NULL);
	}
	tok = strtok(string, delim);
	while (tok != NULL)
	{
		array[i] = tok;
		tok = strtok(NULL, delim);
		i++;
	}
	array[i] = NULL;
	return (array);
}

/**
 * _strdup - copys a string
 * @str: str to copy
 * Return: dup or null
 */

char *_strdup(const char *str)
{
	int i, size;
	char *dup;

	if (str == NULL)
		return (NULL);

	for (i = 0 ; str[i] ; i++)
	{
	}
	size = i;

	dup = malloc(sizeof(char) * (size + 1));

	if (dup == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		dup[i] = str[i];
	dup[i] = '\0';

	return (dup);
}

/**
 * _strlen - returns leng of strin
 * @str: string
 * Return: i
 */

int _strlen(char *str)
{
	int i;

	for (i = 0 ; str[i] ; i++)
	{
	}
	return (i);
}


/**
 * _atoi - converts string to int
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
	int min, id_i = 0, i = 0;
	unsigned int nu_i = 0;

	while (s[i])
	{
		if (s[i] == '-')
			min *= -1;

		while (s[i] >= '0' && s[i] <= '9')
		{
			id_i = 1;
			(nu_i = (nu_i * 10) + (s[i] - '0'));
			 i++;
		}
		if (id_i == 1)
		break;

		i++;
	}

	nu_i *= min;
	return (nu_i);
}

/**
 * _isdigit  - checks if digit or not
 * @c: variable for dig
 * Return: 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * manage_signal - manage ctrl + c
 * @num_s: number for sig
 * Return: none
 */

void manage_signal(int num_s __attribute__((unused)))
{
	_putchar('\n');
	start();
}
