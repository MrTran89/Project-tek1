/*
** braille.c for braille_translate in /home/tran_2/rendu/Colle_01
** 
** Made by tran_2
** Login   <tran_2@epitech.net>
** 
** Started on  Wed Apr 30 19:26:47 2014 tran_2
** Last update Wed Apr 30 22:09:54 2014 tran_2
*/

#include "colle1.h"

int	my_init_tab1(t_tab *t)
{
  t->tab[0] = 3456;
  t->tab[1] = 16;
  t->tab[2] = 126;
  t->tab[3] = 146;
  t->tab[4] = 1456;
  t->tab[5] = 156;
  t->tab[6] = 1246;
  t->tab[7] = 12456;
  t->tab[8] = 1256;
  t->tab[9] = 246;
  t->tab[10] = 2;
  t->tab[11] = 25;
  t->tab[12] = 235;
  t->tab[13] = 256;
  t->tab[14] = 3;
  t->tab[15] = 1;
  t->tab[16] = 12;
  my_init_tab2(t);
}

int	my_init_tab2(t_tab *t)
{
  t->tab[17] = 14;
  t->tab[18] = 145;
  t->tab[19] = 15;
  t->tab[20] = 124;
  t->tab[21] = 1245;
  t->tab[22] = 125;
  t->tab[23] = 24;
  t->tab[24] = 245;
  t->tab[25] = 13;
  t->tab[26] = 123;
  t->tab[27] = 134;
  t->tab[28] = 1345;
  t->tab[29] = 135;
  t->tab[30] = 1234;
  t->tab[31] = 12345;
  t->tab[32] = 1235;
  t->tab[33] = 234;
  t->tab[34] = 2345;
  t->tab[35] = 136;
  t->tab[36] = 1236;
  t->tab[37] = 2456;
  t->tab[38] = 1346;
  t->tab[39] = 13456;
  t->tab[40] = 1356;
}
