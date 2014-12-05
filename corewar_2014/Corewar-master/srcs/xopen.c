/*
** xopen.c for xopen in /home/tran_1/test/test_corewar/srcs
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Sat Mar 29 12:12:24 2014 tran_1
** Last update Sat Apr 12 14:50:45 2014 tran_1
*/

#include "../includes/main.h"

/*
** Open file
*/
void	xopen(char *str, t_open *opn, t_list *list)
{
  if ((opn->fd = open(str, O_RDONLY)) == -1)
    my_putstr("File doesn't exist\n");
  else
    {
      create_exe(opn, str);
      xread(opn, list);
    }
}
