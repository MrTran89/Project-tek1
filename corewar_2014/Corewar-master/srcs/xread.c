/*
** xread.c for xread in /home/tran_1/test/test_corewar/srcs
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Sat Mar 29 13:48:12 2014 tran_1
** Last update Sat Apr 12 15:04:01 2014 tran_1
*/

#include "../includes/main.h"
#include "../includes/get_next_line.h"

/*
** Read file
*/
void		xread(t_open *opn, t_list *list)
{
  while ((opn->name = get_next_line(opn->fd)))
    add_elem(&list, opn->name);
  show_list(list);
}
