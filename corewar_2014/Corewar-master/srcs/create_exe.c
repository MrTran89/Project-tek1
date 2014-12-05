/*
** create_exe.c for create_exe.c in /home/tran_1/test/Corewar/srcs
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Mon Mar 31 23:00:06 2014 tran_1
** Last update Sat Apr 12 13:16:00 2014 tran_1
*/

#include "../includes/main.h"
#include "../includes/op.h"

void		create_exe(t_open *opn, char *str)
{
  header_t	p;

  if (check_file(str) == 0)
    {
      opn->name = take_name(str);
      if ((opn->fd2 = 
	   open(opn->name, O_CREAT | O_WRONLY | O_RDONLY, 777)) == -1)
	exit(0);
      p.magic = COREWAR_EXEC_MAGIC;
      write(opn->fd2, &p, sizeof(header_t));
    }
  else
    my_putstr("Enter file with .s extension\n");
}
