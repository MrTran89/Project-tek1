/*
** client.c for client in /home/tran_2/rendu/PSU_2013_minitalk
** 
** Made by tran_2
** Login   <tran_2@epitech.net>
** 
** Started on  Wed Mar 19 11:08:37 2014 tran_2
** Last update Sat Mar 22 18:51:50 2014 tran_2
*/

#include "client.h"

int	my_send_to_server(int pid, char text)
{
  char	c;

  c = 0;
  while (c < 8)
    {
      usleep(1000);
      if (((text >> c) & 1) == 1)
	{
	  if (kill(pid, SIGUSR1) == -1)
	    exit(my_putstr("Verify your PDI numbers.\n"));
	}
      else
	if (kill(pid, SIGUSR2) == -1)
	  exit(my_putstr("Verify your PID numbers.\n"));
      c = c + 1;
    }
  return (0);
}

int	main(int ac, char **av)
{
  int	i;
  char	*mess;

  mess = av[2];
  i = 0;
  if (ac == 3)
    {
      while (mess[i] != '\0')
	{
	  my_send_to_server(my_getnbr(av[1]), mess[i]);
	  i = i + 1;
	}
      my_send_to_server(my_getnbr(av[1]), mess[i]);
    }
  else
    {
      my_putstr("Enter in order:./client/client ServerPID \"Your Text\".\n");
      exit(0);
    }
  return (0);
}
