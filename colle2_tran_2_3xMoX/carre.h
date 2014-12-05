/*
** carre.h for carre in /home/tran_2/rendu/colle2_tran_2_3xMoX
** 
** Made by tran_2
** Login   <tran_2@epitech.net>
** 
** Started on  Wed May  7 19:53:01 2014 tran_2
** Last update Wed May  7 22:42:21 2014 tran_2
*/

#ifndef CARRE_H_

# define CARRE_H_

#include <unistd.h>
#include <stdlib.h>

typedef struct	s_dimension
{
  int		largeur;
  int		Longeur;
}		t_dimension;

void		my_putchar(char);
void		my_putstr(char *);
int		my_getnbr(char *);
void		my_line(t_dimension *, int, int);
void		my_carre(t_dimension *);
void		my_verification(char **);
void		my_verification_zero(char **);

#endif /* !CARRE_H_ */
