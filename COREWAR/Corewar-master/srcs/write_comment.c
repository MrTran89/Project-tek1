/*
** write_comment.c for Corewar in /home/tran_2/rendu/COREWAR/Corewar-master/srcs
** 
** Created by tran_2
** Login   <@epitech.eu>
** 
** Started on  Sun Mar 30 17:00:16 2014 tran_2
** Last update Wed Apr  2 10:46:35 2014 tran_2
*/

#include "../includes/main.h"
#include "../includes/op.h"

void	write_comment(header_t *h, t_open *opn, char *code_to_read)
{
  int	i;

  i = 0;
  while (code_to_read[i] != '\0')
    {
      if (code_to_read[i] == '.' && code_to_read[i + 1] == 'c' &&
	  code_to_read[i + 2] == 'o' && code_to_read[i + 3] == 'm' &&
	  code_to_read[i + 4] == 'm' && code_to_read[i + 5] == 'e' &&
	  code_to_read[i + 6] == 'n' && code_to_read[i + 7] == 't')
	{
	  while (i != COMMENT_LENGTH)
	    {
	      if (code_to_read[i] == '"')	
		my_putchar(code_to_read[i]);
	      else
		my_putchar('@');
	      ++i;
	    }
	}
    }
}
