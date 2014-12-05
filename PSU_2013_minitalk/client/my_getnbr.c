/*
** my_getnbr.c for my_getnbr in /home/tran_2/rendu/PSU_2013_minitalk
** 
** Made by tran_2
** Login   <tran_2@epitech.net>
** 
** Started on  Wed Mar 19 10:49:07 2014 tran_2
** Last update Wed Mar 19 22:59:22 2014 tran_2
*/

int	my_getnbr(char *str)
{
  int	nb;

  nb = 0;
  while (*str)
    {
      if (*str >= '0' && *str <= '9')
	{
	  nb = nb * 10;
	  nb = nb + (*str) - '0';
	}
      else
	return (0);
      ++str;
    }
  return (nb);
}
