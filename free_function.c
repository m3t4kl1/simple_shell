#include "main.h"


/**
* free_2d_array - frees 2d array
* @array: pointer to mem adrsss fo array
*/


void free_2d_array(char **array)
{
   int i;


   for (i = 0 ; array[i] ; i++)
       free(array[i]);
   free(array);
}