/*
** check_file.c for check_file in /home/tran_1/test/Corewar/srcs
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Tue Apr  1 11:11:12 2014 tran_1
** Last update Tue Apr  1 11:11:28 2014 tran_1
*/

#include "../includes/main.h"

/*
** Check if the file name has .s extension
** return 0 if it is and -1 if failed 
*/
int	check_file(char *str)
{
  int	i;

  i = my_strlen(str);
  if (str[i - 1] == 's' && str[i - 2] == '.')
    return (0);
  else
    return (-1);
}
