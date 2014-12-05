/*
** main.c for main in /home/tran_1/test/Lem-in/srcs
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Mon Apr 14 13:16:00 2014 tran_1
** Last update Thu Apr 17 17:55:49 2014 tran_1
*/

#include "main.h"
#include "get_next_line.h"
#include "get_file.h"

int		main(int ac, char **av)
{
  t_getf	*list;

  list = NULL;
  get_file(list);
  return (0);
}
