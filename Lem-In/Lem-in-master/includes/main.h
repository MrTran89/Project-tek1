/*
** main.h for main in /home/tran_1/test/Lem-in/includes
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Mon Apr 14 13:16:36 2014 tran_1
** Last update Wed Apr 23 13:04:48 2014 tran_2
*/

#ifndef		MAIN_H_
# define	MAIN_H_
# include	<stdlib.h>
# include	<stdio.h>
# include	<unistd.h>

void		my_putchar(char c);
void		my_putstr(char *str);
int		my_strlen(char *str);
char		*my_strcpy(char *dest, char *src, int begin);

typedef struct s_room
{
	int num;
	char *name;
	int x;
	int y;
	struct t_link *links;
	struct t_room *next;
	struct t_room *prev;
}		t_room;

typedef struct s_link
{
	struct t_room *romm_num;
	int x;
	int y;
	int dist;
}		t_link;

#endif		/* MAIN_H_ */
