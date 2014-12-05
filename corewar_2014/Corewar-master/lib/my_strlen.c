/*
** my_strlen.c for my_strlen in /home/tran_1/test/test_corewar/lib
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Sat Mar 29 21:11:40 2014 tran_1
** Last update Mon Mar 31 21:22:24 2014 tran_1
*/

#include "../includes/main.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    ++i;
  return (i);
}
