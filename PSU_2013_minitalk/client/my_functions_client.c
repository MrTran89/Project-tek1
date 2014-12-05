/*
** my_functions_client.c for my_functions_client in /home/tran_2/rendu/PSU_2013_minitalk/client
** 
** Created by tran_2
** Login   <@epitech.eu>
** 
** Started on  Sat Mar 22 13:46:35 2014 tran_2
** Last update Sat Mar 22 13:47:52 2014 tran_2
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
