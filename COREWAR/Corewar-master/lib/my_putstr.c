/*
** my_putstr.c for my_putstr in /home/tran_1/test/test_corewar/lib
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Sat Mar 29 21:08:25 2014 tran_1
** Last update Sat Mar 29 21:12:08 2014 tran_1
*/

#include "../includes/main.h"

void	my_putstr(char *str)
{
  while (*str)
    my_putchar(*(str++));
}
