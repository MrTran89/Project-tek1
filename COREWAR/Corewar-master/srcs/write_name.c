/*
** write_name.c for write_name.c in /home/tran_1/test/test_corewar/srcs
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Sun Mar 30 05:38:08 2014 tran_1
** Last update Sun Mar 30 17:13:36 2014 tran_2
*/

#include "../includes/main.h"
#include "../includes/op.h"

void   	write_name(header_t *h, t_open *opn, char *code_to_read)
{
  int	i;
  int	j;

  i = 0;
  while (i != COMMENT_LENGHT)
    { 
      if (code_to_read[i] != ' ')
	  my_putchar(code_to_read[i]);
      else
	my_putstr("^@");
      ++i;
    }
}
