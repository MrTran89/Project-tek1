/*
** my_putnbr.c for my_putnbr in /home/tran_2/rendu/PSU_2013_minitalk
** 
** Made by tran_2
** Login   <tran_2@epitech.net>
** 
** Started on  Wed Mar 19 10:47:32 2014 tran_2
** Last update Sat Mar 22 13:45:29 2014 tran_2
*/

#include "server.h"

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

int	my_putnbr(int nb)
{
  if (nb >= 10)
    {
      my_putnbr(nb / 10);
      my_putnbr(nb % 10);
    }
  else
    my_putchar(nb + 48);
  return (nb);
}
