/*
** my_putstr.c for my_putstr in /home/tran_1/test/Lem-in/lib
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Mon Apr 14 13:14:14 2014 tran_1
** Last update Mon Apr 14 13:14:34 2014 tran_1
*/

void	my_putstr(char *str)
{
  while (*str)
    my_putchar(*(str++));
}
