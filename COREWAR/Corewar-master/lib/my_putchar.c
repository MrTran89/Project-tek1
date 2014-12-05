/*
** my_putchar.c for my_putchar in /home/tran_1/test/test_corewar
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Sat Mar 29 21:18:07 2014 tran_1
** Last update Sat Mar 29 21:18:26 2014 tran_1
*/

#include "../includes/main.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
