/*
** my_strcat.c for my_strcat in /home/tran_1/test/test_corewar/lib
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Sat Mar 29 21:13:26 2014 tran_1
** Last update Sat Mar 29 21:32:17 2014 tran_1
*/

#include "../includes/main.h"

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  i = 0;
  j = my_strlen(dest);
  while (src[i])
    dest[j++] = src[i++];
  dest[j] = '\0';
  return (dest);
}
