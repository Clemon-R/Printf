/*
** my_putstr.c for bootstrap in /home/raphael.goulmot/rendu/PSU_2016_my_printf_bootstrap/src
** 
** Made by Raphaël Goulmot
** Login   <raphael.goulmot@epitech.net>
** 
** Started on  Tue Nov  8 10:27:14 2016 Raphaël Goulmot
** Last update Sun Nov 20 21:25:31 2016 Raphaël Goulmot
*/

#include "utils.h"

void	my_putstr(char *str)
{
  int	index;

  index = 0;
  while (str[index++])
    my_putchar(str[index - 1]);
}
