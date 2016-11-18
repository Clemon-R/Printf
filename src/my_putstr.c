/*
** my_putstr.c for bootstrap in /home/raphael.goulmot/rendu/PSU_2016_my_printf_bootstrap/src
** 
** Made by Raphaël Goulmot
** Login   <raphael.goulmot@epitech.net>
** 
** Started on  Tue Nov  8 10:27:14 2016 Raphaël Goulmot
** Last update Fri Nov 18 16:19:08 2016 Raphaël Goulmot
*/

#include "utils.h"
#include <unistd.h>

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str) - 1);
}
