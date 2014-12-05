/*
** my_strlen.c for my_strlen in /home/tran_1/test/Lem-in/lib
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Mon Apr 14 13:14:43 2014 tran_1
** Last update Mon Apr 14 13:15:11 2014 tran_1
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    ++i;
  return (i);
}
