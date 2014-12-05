/*
** struct_init.c for struct_init in /home/tran_1/test/test_corewar/srcs
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Sat Mar 29 12:56:20 2014 tran_1
** Last update Sat Mar 29 12:56:38 2014 tran_1
*/

#include "../includes/main.h"

void   	struct_init(t_open **opn)
{
  if ((*opn = malloc(sizeof(*opn))) == NULL)
    exit (0);
}
