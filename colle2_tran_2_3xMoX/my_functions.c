/*
** my_functions.c for my_functions in /home/tran_2/rendu/colle2_tran_2_3xMoX
** 
** Made by tran_2
** Login   <tran_2@epitech.net>
** 
** Started on  Wed May  7 21:10:35 2014 tran_2
** Last update Wed May  7 21:18:53 2014 tran_2
*/

#include "carre.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	count;

  count = 0;
  while (str[count])
    {
      my_putchar(str[count]);
      count = count + 1;
    }
}

int	my_getnbr(char *str)
{
  int	count;
  int	number;

  count = 0;
  number = 0;
  while (str[count])
    {
      if (str[count] >= '0' && str[count] <= '9')
	number = number * 10 + (str[count] - 48);
      else
	return (number);
      count = count + 1;
    }
  return (number);
}
