/*
** parser_comment.c for parser_comment in /home/tran_1/test/test_corewar/srcs
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Sun Mar 30 12:42:36 2014 tran_1
** Last update Sun Mar 30 12:58:33 2014 tran_1
*/

#include "../includes/main.h"
#include "../includes/op.h"

void	parser_comment(header_t *h, t_open *opn, char *code_to_read)
{
  int	i;
  int	j;

  j = 0;
  i = 0;
  while (code_to_read[i])
    {
      if (code_to_read[i] == '#')
	{
	  while (code_to_read[i] != '\n' && j <= i)
	    {
	      h->prog_name[j] = '\0';
	      if (write(opn->fd2, &h->prog_name[j], 1) == -1)
		exit(0);
	      ++j;
	    }
	}
      ++i;
    }
}
