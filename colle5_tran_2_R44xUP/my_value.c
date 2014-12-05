/*
** my_value.c for my_value in /home/tran_2/rendu/colle5_tran_2_R44xUP
** 
** Made by tran_2
** Login   <tran_2@epitech.net>
** 
** Started on  Wed May 28 22:01:50 2014 tran_2
** Last update Wed May 28 22:51:57 2014 tran_2
*/

#include "braille.h"

int	my_put_value(t_braille *t, char *str, int val)
{
  int	count;
  int	count2;

  count = 0;
  count2 = 0;
  while (t->buff[count] != '\0')
    {
      if ((t->buff[count] == str[val] || ((t->buff[count] - 32) == str[val]))
	  && (count == 0 || t->buff[count - 1] == '\n'))
	count2 = count + 2;
      count = count + 1;
    }
  while (t->buff[count2] != '\n')
    my_putchar(t->buff[count2++]);
  if (str[val + 1] != ' ' && str[val + 1] != '\t')
    {
      if (str[val + 1] == '\0')
	my_putchar('\n');
      else
	my_putchar('-');
    }
  return (TRUE);
}

int	my_value_upper(t_braille *t, char *str, int count, int count2)
{
  if (t->upper == UNKNOW)
    {
      while (str[count2] >= 'A' && str[count2] <= 'Z')
	count2 = count2 + 1;
      if (str[count2] != ' ' && str[count2] != '\t' && str[count2] != '\0')
	{
	  my_putstr(1, "46-");
	  t->upper = FALSE;
	}
      else
	{
	  my_putstr(1, "46-46-");
	  t->upper = TRUE;
	}
      my_put_value(t, str, count);
    }
  else if (t->upper == FALSE)
    {
      my_putstr(1, "46-");
      my_put_value(t, str, count);
    }
  else
    my_put_value(t, str, count);
  return (TRUE);
}

int my_value_number(t_braille *t, char *str, int count)
{
  my_putstr(1, "6-");
  while (str[count] >= '0' && str[count] <= '9')
    {
      my_put_value(t, str, count);
      count = count + 1;
    }
  return (count - 1);
}

int	my_value(t_braille *t, char *str)
{
  int	count;

  count = 0;
  while (str[count])
    {
      if ((str[count] >= 'a' && str[count] <= 'z') ||
	  (str[count] == ',' || str[count] == ':' ||
	  str[count] == '!' || str[count] == '.' ||
	  str[count] == '\''))
	my_put_value(t, str, count);
      else if (str[count] >= 'A' && str[count] <= 'Z')
	my_value_upper(t, str, count, count);
      else if (str[count] >= '0' && str[count] <= '9')
	count = my_value_number(t, str, count);
      else
	{
	  if (str[count] == ' ' || str[count] == '\t')
	    t->upper = UNKNOW;
	  my_putchar(str[count]);
	}
      count = count + 1;
    }
  return (TRUE);
}
