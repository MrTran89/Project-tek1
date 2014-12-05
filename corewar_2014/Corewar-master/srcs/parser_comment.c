/*
** parser_comment.c for parser_comment in /home/tran_2/rendu/corewar_2014/Corewar-master/srcs
** 
** Created by tran_2
** Login   <@epitech.eu>
** 
** Started on  Sat Apr 12 22:39:42 2014 tran_2
** Last update Sun Apr 13 10:53:03 2014 tran_2
*/

#include "../includes/main.h"
#include "../includes/op.h"

int	par_comment(t_open *par)
{
  char	*buffer;
  
  if ((par->name= read(par-fd, buffer, 128)) == -1)
    exit(my_putstr("Error"));
  
}
