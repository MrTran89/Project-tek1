/*
** my_verifications.c for my_verifications in /home/tran_2/rendu/colle2_tran_2_3xMoX
** 
** Made by tran_2
** Login   <tran_2@epitech.net>
** 
** Started on  Wed May  7 21:21:33 2014 tran_2
** Last update Wed May  7 22:03:39 2014 tran_2
*/

#include "carre.h"

void	my_verification(char **av)
{
  int	count;

  count = 0;
  while (av[1][count])
    {
      if (av[1][count] >= '0' && av[1][count] <= '9')
	count = count + 1;
      else
	{
	  my_putstr("Error: largeur invalid\n");
	  exit(-1);
	}
    }
  count = 0;
  while (av[2][count])
    {
      if (av[2][count] >= '0' && av[2][count] <= '9')
	count = count + 1;
      else
	{
	  my_putstr("Error: Longeur invalid\n");
	  exit(-1);
 	}
    }
}

void	my_verification_zero(char **av)
{
  if (av[1][0] == '0' && av[1][1] == '\0')
    {
      my_putstr("Error: argument must be different from 0\n");
      exit(-1);
    }
  if (av[2][0] == '0' && av[2][1] == '\0')
    {
      my_putstr("Error: argument must be different from 0\n");
      exit(-1);
    }
}
