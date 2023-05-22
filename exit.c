#include "main.h"
/**
*exitfunc - function that exits program
*@array: array of command
*@av: argument vector of main
*@line: getline buffer to free
*@cnt: execution count
*@ret_stat: last status to exit
*Return: status
*/
int exitfunc(char **array, char *av[], char *line, int cnt, int ret_stat)
{
   int i = 0, exit_stat, num;


   while (array[i] != NULL)
   {
       i++;
   }
   if (i == 1)
   {
       free(array);
       free(line);
       exit(ret_stat);
   }
   if (i >= 2)
   {
       for (i = 0; array[1][i] != '\0'; i++)
       {
           num = _isdigit(array[1][i]);
           if (num == 0)
           {
               error_print(array, av, cnt, 2);
               ret_stat = 2;
               return (ret_stat);
           }
       }
       exit_stat = _atoi(array[1]);
       free(array);
       free(line);
       exit(exit_stat);
   }


   return (ret_stat);
}