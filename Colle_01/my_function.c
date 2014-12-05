/*
** my_function.c for braille_translate in /home/tran_2/rendu/Colle_01
** 
** Made by tran_2
** Login   <tran_2@epitech.net>
** 
** Started on  Wed Apr 30 19:11:56 2014 tran_2
** Last update Wed Apr 30 22:27:04 2014 tran_2
*/

#include "colle1.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putchar_error(char c)
{
  write(2, &c, 1);
}

void	my_putstr(char *str)
{
  int	count;

  count = 0;
  while (str[count] != '\0')
    {
      my_putchar(str[count]);
      count = count + 1;
    }
}

void	my_putstr_error(char *str)
{
  int	count;

  count = 0;
  while (str[count] != '\0')
    {
      my_putchar_error(str[count]);
      count = count + 1;
    }
}

int	my_put_nbr(int number)
{
  if (number >= 10)
    {
      my_put_nbr(number / 10);
      my_put_nbr(number % 10);
    }
  else
    my_putchar(number + 48);
  return (number);
}
