/*
** colle.h for braille_translate in /home/tran_2/rendu/Colle_01
** 
** Made by tran_2
** Login   <tran_2@epitech.net>
** 
** Started on  Wed Apr 30 19:15:56 2014 tran_2
** Last update Wed Apr 30 22:54:56 2014 tran_2
*/

#ifndef COLLE_H_
# define COLLE_H_

#include <stdlib.h>
#include <unistd.h>

typedef struct	s_tab
{
  int		tab[41];
}		t_tab;

int		my_check_separated(char *, int);
void		my_display_value(t_tab *, char);
int		my_braille(char *);
void		my_putchar(char);
void		my_putstr(char *);
void		my_putchar_error(char);
void		my_putstr(char *);
void		my_putstr_error(char *);
int		my_put_nbr(int);
int		my_if_char(char *);
int		my_if_upper(char *, int);
int		my_init_tab1(t_tab *);
int		my_init_tab2(t_tab *);

#endif /* !COLLE_H_ */
