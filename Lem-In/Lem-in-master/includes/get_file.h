/*
** get_file.h for get_file in /home/tran_1/test/Lem-in/includes
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Thu Apr 17 17:14:02 2014 tran_1
** Last update Thu Apr 17 17:54:09 2014 tran_1
*/

#ifndef		GET_FILE_
# define	GET_FILE_

typedef struct	s_getf
{
  char		*line;
  struct s_getf	*next;

}		t_getf;

int		get_file(t_getf *list);
struct s_getf		*get_file_list(char *line, t_getf *list);
#endif		/* GET_FILE_ */
