/*
** my_verifications.c for braille_translate in /home/tran_2/rendu/Colle_01
** 
** Made by tran_2
** Login   <tran_2@epitech.net>
** 
** Started on  Wed Apr 30 21:08:10 2014 tran_2
** Last update Wed Apr 30 22:50:00 2014 tran_2
*/

#include "colle1.h"

int	my_if_char(char *str)
{
  int	count;

  count = 0;
  while (str[count] != '\0')
    {
      if (str[count] >= 'a' && str[count] <= 'z')
	count = count + 1;
      else if (str[count] >= 'A' && str[count] <= 'Z')
	count = count + 1;
      else if (str[count] >= '0' && str[count] <= '9')
	count = count + 1;
      else if (str[count] == ' ')
	count = count + 1;
      else if (str[count] == ',' || str[count] == ':'
	       || str[count] == '!' || str[count] == '.'
	       || str[count] == '\'')
	count = count + 1;
      else
	return (-1);
    }  
  return (0);
}

int	my_if_upper(char *str, int count)
{
  if (str[count] >= 'A' && str[count] <= 'Z')
    {
      while (str[count] >= 'A' && str[count] <= 'Z'
	     && str[count] != ' ' && str[count] != '\0')
	count = count + 1;
      if (str[count] == ' ' || str[count] == '\0')
	{
	  my_putstr("46-46-");
	  return (1);
	}
    }
  return (0);
}
