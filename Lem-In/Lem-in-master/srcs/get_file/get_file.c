/*
** get_file.c for get_file in /home/tran_1/test/Lem-in/srcs/get_file
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Thu Apr 17 17:16:43 2014 tran_1
** Last update Fri Apr 18 11:11:16 2014 tran_2
*/

#include "get_file.h"
#include "main.h"
#include "get_next_line.h"

int		get_file(t_getf *list)
{
  t_getf	*first;
  char		*str;
  
  list = malloc(sizeof(t_getf));
  first = list;
  while ((str = get_next_line(0)))
    list = get_file_list(str, list);
  list->next = NULL;
  show_file(first);
}
