/*
** get_next_line.c for get_next_line in /home/tran_1/test/Corewar
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Tue Apr  1 10:46:08 2014 tran_1
** Last update Tue Apr  1 10:48:49 2014 tran_1
*/

#include "../includes/get_next_line.h"

static char	*my_strncpy(char *dest, char *src, int nb)
{
  int		i;

  i = 0;
  while (*src != '\0' && nb > 0)
    {
      dest[i] = src[i];
      nb--;
      i++;
    }
  if (i == 0 || nb == 0)
    dest[i] = '\0';
  return (dest);
}

static char	*add_to_line(char *line, int i, char *buff, int *begin)
{
  char		*new_elem;
  int		old_len;

  if (line)
    old_len = my_strlen(line);
  else
    old_len = 0;
  if (!(new_elem = malloc((old_len + i + 1) * sizeof(*new_elem))))
    return (NULL);
  if (line)
    my_strncpy(new_elem, line, old_len);
  else
    my_strncpy(new_elem, "", old_len);
  my_strncpy(new_elem + old_len, buff + *begin, i);
  new_elem[old_len + i] = 0;
  if (line)
    free(line);
  *begin = *begin + (i + 1);
  return (new_elem);
}

char		*get_next_line(const int fd)
{
  static char	buff[BUFFER_SIZE];
  static int	k = 0;
  static int	begin = 0;
  int		i;
  char		*line;

  line = 0;
  i = 0;
  while (-1)
    {
      if (begin >= k)
	{
	  begin = 0;
	  if (!(k = read(fd, buff, BUFFER_SIZE)))
	    return (line);
	  if (k == -1)
	    return (NULL);
	  i = 0;
	}
      if (buff[begin + i] == '\n')
	return (line = add_to_line(line, i, buff, &begin));
      if (begin + i == k - 1)
	line = add_to_line(line, i + 1, buff, &begin);
      i++;
    }
}
