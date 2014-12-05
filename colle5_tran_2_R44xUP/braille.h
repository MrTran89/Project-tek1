/*
** braille.h for braille in /home/tran_2/rendu/colle5_tran_2_R44xUP
** 
** Made by tran_2
** Login   <tran_2@epitech.net>
** 
** Started on  Wed May 28 19:23:00 2014 tran_2
** Last update Wed May 28 22:36:43 2014 tran_2
*/

#ifndef BRAILLE_H_
# define BRAILLE_H_

# define TRUE 0
# define FALSE 1
# define UNKNOW 2

typedef	struct	s_braille
{
  char		buff[4096];
  int		upper;
}		t_braille;

void		my_putchar(char c);
void		my_putstr(int fd, char *str);
int		my_strlen(char *str);
int		my_read_file(t_braille *t, char *file);
int		my_call(char *str, char *file);
int		my_put_value(t_braille *t, char *str, int value);
int		my_value_upper(t_braille *t, char *str, int count, int count2);
int		my_value_number(t_braille *t, char *str, int count);
int		my_value(t_braille *t, char *str);
int		my_verifications(char **av);

#endif /* !BRAILLE_H_ */
