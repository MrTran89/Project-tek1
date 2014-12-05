/*
** list.h for list in 
** 
** Created by tran_2
** Login   <@epitech.eu>
** 
** Started on  Thu Apr 17 11:13:50 2014 tran_2
** Last update Thu Apr 17 11:50:10 2014 tran_2
*/

#ifndef	LIST_H_
# define LIST_H_

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct	s_list
{
  char		*data;
  struct s_list	*next;
}		t_list;

#endif
