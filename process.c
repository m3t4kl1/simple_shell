#include "main.h"


/**
* process - creates process
* @array: array of strings passed to new prog
* @av: args from main
* @cnt: number of times program is called
* Return: child exit status
*/


int process(char **array, char *av[], int cnt)
{
   int valstat, status;
   struct stat buf;
   pid_t ch;


   if (array == NULL || array[0] == NULL)
       return (EXIT_SUCCESS);


   if (stat(array[0], &buf) == -1)
   {
       error_print(array, av, cnt, 126);
       return (126);
   }
   ch = fork();


   if (ch == 0)
   {
       valstat = execve(array[0], array, environ);
   }
   else
   {
       wait(&status);
   valstat = WEXITSTATUS(status);
   }
   return (valstat);
}