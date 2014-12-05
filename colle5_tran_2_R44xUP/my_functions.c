/*
** my_functions.c for my_functions in /home/tran_2/rendu/colle5_tran_2_R44xUP
** 
** Made by tran_2
** Login   <tran_2@epitech.net>
** 
** Started on  Wed May 28 19:19:24 2014 tran_2
** Last update Wed May 28 22:42:00 2014 tran_2
*/

#include <unistd.h>
#include "braille.h"

void	my_putchar(char c)
{
  if  (write(1, &c, 1) == -1)
    return ;
}

int	my_strlen(char *str)
{
  int	count;

  count = 0;
  while (str[count] != '\0')
    count = count + 1;
  return (count);
}

void	my_putstr(int fd, char *str)
{
  if (write(fd, str, my_strlen(str)) == -1)
      return ;
}
