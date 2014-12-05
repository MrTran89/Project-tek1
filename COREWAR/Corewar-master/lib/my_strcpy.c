/*
** my_strcpy.c for my_strcpy in /home/tran_1/test/test_corewar/lib
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Sat Mar 29 21:15:40 2014 tran_1
** Last update Sat Mar 29 21:29:24 2014 tran_1
*/

#include "../includes/main.h"

char	*my_strcpy(char *dest, char *src, int begin, int end)
{
  int	i;

  i = 0;
  if (src == NULL)
    return (0);
  if ((dest = malloc(sizeof(*src) + 1)) == NULL)
    return (0);
  while (begin <= end)
    {
      dest[i] = src[begin];
      i++;
      begin++;
    }
  dest[i] = '\0';
  return (dest);
}
