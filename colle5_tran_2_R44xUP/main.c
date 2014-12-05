/*
** main.c for main in /home/tran_2/rendu/colle5_tran_2_R44xUP
** 
** Made by tran_2
** Login   <tran_2@epitech.net>
** 
** Started on  Wed May 28 19:16:56 2014 tran_2
** Last update Wed May 28 22:45:26 2014 tran_2
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "braille.h"

int	my_read_file(t_braille *t, char *file)
{
  int	fd;

  if ((fd = open(file, O_RDONLY)) == -1)
    return (FALSE);
  if (read(fd, t->buff, 4096) <= 0)
    return (FALSE);
  close(fd);
  return (TRUE);
}

int		my_call(char *str, char *file)
{
  t_braille	t;

  t.upper = UNKNOW;
  if (my_read_file(&t, file) == TRUE)
    my_value(&t, str);
  return (TRUE);
}

int	main(int ac, char **av)
{
  if (ac == 3)
    {
      if (my_verifications(av) == TRUE)
	my_call(av[1], av[2]);
      else
	return (FALSE);
    }
  else
    {
      my_putstr(2, "Usage: ./braille text tablefile\n");
      return (FALSE);
    }
  return (TRUE);
}
