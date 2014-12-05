/*
** get_file_list.c for get_file_list in /home/tran_1/test/Lem-in/srcs/get_file
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Thu Apr 17 17:17:40 2014 tran_1
** Last update Thu Apr 17 18:29:52 2014 tran_1
*/

#include "get_file.h"
#include <string.h>
#include "main.h"

struct s_getf		*get_file_list(char *line, t_getf *list)
{
  t_getf  *tmp;
  t_getf  *new;

  tmp = list;
  if ((new = malloc(sizeof(t_getf) * 1)) == NULL)
    exit (0);
  tmp->line = malloc(sizeof(char) * my_strlen(line) + 1);
  strcpy(tmp->line, line);
  tmp->next = new;
  return (tmp->next);
}

void		show_file(t_getf *list)
{
  t_getf	*tmp;

  tmp = list;
  while (tmp->next)
    {
      printf("%s\n", tmp->line);
      tmp = tmp->next;
    }
}