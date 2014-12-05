/*
** client.h for client in /home/tran_2/rendu/PSU_2013_minitalk
** 
** Made by tran_2
** Login   <tran_2@epitech.net>
** 
** Started on  Wed Mar 19 11:09:14 2014 tran_2
** Last update Sat Mar 22 18:49:44 2014 tran_2
*/

#ifndef CLIENT_H_
# define CLIENT_H_

#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

int	my_putstr(char *str);
int	my_getnbr(char *str);
int	my_send_to_server(int pid, char mess);

#endif /* !CLIENT_H_ */
