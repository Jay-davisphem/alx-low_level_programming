#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return - pointer to an array of strings (words)
 */
char **strtow(char *str)
{
  if (str == (char *)"" || str == NULL)
    return NULL;

  char **words;


  int i = 0;
  int wd_space_count = 0;
  while (*(str + i)){
    if(i == 0 && *(str + i) == ' ')
      wd_space_count--;
    if(*(str + i) == ' ' && *(str + i + 1) != ' ' && *(str + i + 1) != '\0'){
      wd_space_count++;
    }
    i++;
  }

  words = malloc((wd_space_count + 1) * sizeof(char *));
  if (words == NULL)
    return NULL;
  int c = 0;
  for (int i = 0; i <= wd_space_count; i++)
  {
    if(*(str + c) == '\0') return words;
    int wd_size = 0;
    while(*(str + c) == ' ')
      c++;

    while (*(str + c + wd_size) != ' ')
      wd_size++;
    wd_size++;
    words[i] = malloc((wd_size) * sizeof(char));
    if (words[i] == NULL)
    {
      for (int j; j <= wd_space_count; j++)
        free(words[i]);
      free(words);
      return NULL;
    }
    for (int j = 0; j < wd_size; j++)
    {
      if(j == wd_size) words[j + c] = '\0';
      else words[j + c] = (char *)(str + j + c);
    }
  }
  printf("The numeber of space in the sentence is %d\n", wd_space_count);
  return words;
}
