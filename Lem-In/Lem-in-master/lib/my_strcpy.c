/*
** my_strcpy.c for my_strcpy in /home/tran_1/rendu/Piscine-C-Jour_06
** 
** Made by tran_1
** Login   <tran_1@epitech.net>
** 
** Started on  Mon Oct  7 18:12:27 2013 tran_1
** Last update Fri Apr 18 11:08:10 2014 tran_2
*/

#include <stdlib.h>

char	*my_strcpy(char *dest, char *src, int begin)
{
  int	i;

  i = 0;
  if (src == NULL)
    return (0);
  if ((dest = malloc(sizeof(char) * my_strlen(src) + 1)) == NULL)
    return (0);
  while (src[begin])
    {
      dest[i] = src[begin];
      i++;
      begin++;
    }
  dest[i] = '\0';
  return (dest);
}
