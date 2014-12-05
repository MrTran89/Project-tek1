/*
** main.c for main in /home/tran_2/rendu/colle2_tran_2_3xMoX
** 
** Made by tran_2
** Login   <tran_2@epitech.net>
** 
** Started on  Wed May  7 19:11:18 2014 tran_2
** Last update Sat May 10 14:01:20 2014 tran_2
*/

#include "carre.h"

void	my_line(t_dimension *dim, int l, int L)
{
  if ((L % 3) == 0)
    {
      while (l <= (dim->largeur * 6))
	{
	  ((l % 6) == 0) ? (my_putchar('+')) : (my_putchar('-'));
	  l = l + 1;
	}
    }
  else
    {
      while (l <= (dim->largeur * 6))
	{
	  ((l % 6) == 0) ? (my_putchar('|')) : (my_putchar(' '));
	  l = l + 1;
	}
    }
}

void	my_carre(t_dimension *dim)
{
  int	l;
  int	L;

  l = 0;
  L = 0;
  while (L <= (dim->Longeur * 3))
    {
      my_line(dim, l, L);
      my_putchar(10);
      l = 0;
      L = L + 1;
    }
}

int		main(int ac, char **av)
{
  t_dimension	dim;

  if (ac == 3)
    {
      my_verification(av);
      my_verification_zero(av);
      dim.largeur = my_getnbr(av[1]);
      dim.Longeur = my_getnbr(av[2]);
      my_carre(&dim);
    }
  else
    my_putstr("Usage: ./carre largeur Longeur\n");
  return (0);
}
