/*
** main.c for braille_translate in /home/tran_2/rendu/Colle_01
** 
** Made by tran_2
** Login   <tran_2@epitech.net>
** 
** Started on  Wed Apr 30 19:10:55 2014 tran_2
** Last update Wed Apr 30 22:56:59 2014 tran_2
*/

#include "colle1.h"

int	my_check_separated(char *str, int count)
{
  if (str[count + 1] == '\0')
    {
      my_putchar('\n');
      count = count + 1;
    }
  else if (str[count + 1] == ' ' || str[count + 1] == '\t')
    {
      my_putchar(' ');
      count = count + 1;
    }
  else if (str[count] == ' ' || str[count] == '\t')
    count = count + 1;
  else
    {
      my_putchar('-');
      count = count + 1;
    }
  return (count);
}

void	my_display_value(t_tab *t, char c)
{
  if (c >= 'A' && c <= 'Z')
    c = c + 32;
  else if (c >= 'a' && c <= 'z')
    my_put_nbr(t->tab[c - 82]);
  else if (c >= '0' && c <= '9')
    my_put_nbr(t->tab[c - 48]);
  else if (c == ',')
    my_put_nbr(t->tab[10]);
  else if (c == ':')
    my_put_nbr(t->tab[11]);
  else if (c == '!')
    my_put_nbr(t->tab[12]);
  else if (c == '.')
     my_put_nbr(t->tab[13]);
  else if (c == '\'')
    my_put_nbr(t->tab[14]);
}

int	my_braille(char *str)
{
  int	up_word;
  int	count;
  t_tab	t;

  count = 0;
  my_init_tab1(&t);
  while (str[count] != '\0')
    {
      if (count == 0 || str[count - 1] == ' ' || str[count - 1] == '\t')
	up_word = my_if_upper(str, count);
      if (str[count] >= 'A' && str[count] <= 'Z' && up_word == 0)
	my_putstr("46-");
      my_display_value(&t, str[count]);
      count = my_check_separated(str, count);
    }
  return (0);
}

int	main(int ac, char **av)
{
  if (ac != 2)
    my_putstr_error("invalid number of argument\n");
  else
    {
      if (my_if_char(av[1]) == -1)
	my_putstr_error("Error: char invalid\n");
      else
	my_braille(av[1]);
    }
  return (0);
}
