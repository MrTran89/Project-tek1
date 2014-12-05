/*
** parser_header.c for parser_header in /home/tran_1/test/test_corewar/srcs
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Sat Mar 29 22:44:58 2014 tran_1
** Last update Sun Mar 30 12:59:35 2014 tran_1
*/

#include "../includes/main.h"
#include "../includes/op.h"

void		parser_header(header_t *h, t_open *opn, char *code_to_read)
{
  write_name(h, opn, code_to_read);
}


