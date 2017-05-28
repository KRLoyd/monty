#include "monty.h"
/**
 * free_pointers - function to free double pointers
 * @ptr: pointer to pointer passed to be freed
 * Return: void
 */
void free_pointers(char **ptr)
{
  int i;
  
  for (i = 0; ptr[i] != NULL; i++)
    {
      free(ptr[i]);
    }
  free(ptr);
}
