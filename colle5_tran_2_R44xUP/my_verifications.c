/*
** my_verifications.c for my_verifications in /home/tran_2/rendu/colle5_tran_2_R44xUP
** 
** Made by tran_2
** Login   <tran_2@epitech.net>
** 
** Started on  Wed May 28 21:29:26 2014 tran_2
** Last update Wed May 28 22:42:24 2014 tran_2
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "braille.h"

int	my_verifications(char **av)
{
  int	fd;
  int	error;

  error = 0;
  if (av[1][0] == '\0')
    {
      error = error + 1;
      my_putstr(2, "Error : there's empty\n");
    }
  if ((fd = open(av[2], O_RDONLY)) == -1)
    {
      error = error + 1;
      my_putstr(2, "Failed to open table file.\nFailed to load ");
      my_putstr(2, av[2]);
      my_putstr(2, ": The file must be in the current directory.\n");
      close(fd);
    }
  close(fd);
  return ((error == 0) ? (TRUE) : (FALSE));
}
