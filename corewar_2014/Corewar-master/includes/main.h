/*
** main.h for main in /home/tran_1/test/test_shell
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Fri Mar 28 22:40:00 2014 tran_1
** Last update Sat Apr 12 14:51:10 2014 tran_1
*/

#ifndef		MAIN_H_
# define	MAIN_H_
# include	<fcntl.h>
# include	<stdio.h>
# include	<stdlib.h>
# include	<unistd.h>
# include	<string.h>
# include	"op.h"

typedef struct	s_open
{
  int		fd;
  int		fd2;
  char		**file;
  char		*name;

}		t_open;

typedef struct	s_list
{
  char		*name;
  struct s_list	*next;

}		t_list;

void		my_putchar(char c);
void		my_putstr(char *str);
int		my_strlen(char *str);
char		*my_strcpy(char *dest, char *src, int begin, int enb);
char		*my_strcat(char *dest, char *src);
int		my_strcmp(char *str1, char *str2);
char		*take_name(char *str);
void		xopen(char *str, t_open *opn, t_list *list);
void		xread(t_open *opn, t_list *list);
void		create_exe(t_open *opn, char *str);
void		add_elem(t_list **list, char *name);
void		show_list(t_list *list);
#endif		/* MAIN_H_ */
