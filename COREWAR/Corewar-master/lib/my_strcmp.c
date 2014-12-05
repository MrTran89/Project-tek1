/*
** my_strcmp_char.c for my_strcmp in /home/tran_1/test/test_corewar/lib
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Sat Mar 29 23:41:46 2014 tran_1
** Last update Sat Mar 29 23:42:43 2014 tran_1
*/

int	my_strcmp(char *str1, char *str2)
{
  int	i;
  int	j;

  i = my_strlen(str1);
  j = my_strlen(str2);
  if (i != j)
    return (1);
  i = 0;
  while (str1[i] != '\0' && str2[i] != '\0')
    {
      if (str1[i] != str2[i])
	return (1);
      i++;
    }
  return (0);
}
