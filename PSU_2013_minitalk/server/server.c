/*
** server.c for server in /home/tran_2/rendu/PSU_2013_minitalk
** 
** Made by tran_2
** Login   <tran_2@epitech.net>
** 
** Started on  Wed Mar 19 11:06:35 2014 tran_2
** Last update Sat Mar 22 18:41:23 2014 tran_2
*/

#include "server.h"

void		my_compose_text(int bin)
{
  unsigned char	l;
  unsigned char	b;

  l = l + (bin << b++);
  if (b > 7)
    {
      my_putchar((l == '\0') ? '\n' : l);
      l = 0;
      b = 0;
    }
}

void	send_sig(int signal)
{
  if (signal == SIGUSR1)
    my_compose_text(1);
  if (signal == SIGUSR2)
    my_compose_text(0);
}

void	check_signal_error()
{
  if (signal(SIGUSR1, send_sig) == SIG_ERR)
    exit(my_putstr("There are an error.\n"));
  if (signal(SIGUSR2, send_sig) == SIG_ERR)
    exit(my_putstr("There are an error.\n"));
}

int		main(int ac, char **av)
{
  if (ac == 1)
    {
      usleep(1000);
      check_signal_error();
      my_putstr("The server's PID is: ");
      my_putnbr(getpid());
      my_putchar(10);
      while (42)
	pause();
    }
  else
    {
      my_putstr("Verify your parameter: You need only one parameter.\n");
      exit(0);
    }
  return (0);
}
