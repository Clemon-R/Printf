/*
** my_power_it.c for emacs in /home/raphael.goulmot/delivery5
** 
** Made by Raphaël Goulmot
** Login   <raphael.goulmot@epitech.net>
** 
** Started on  Fri Oct  7 12:34:01 2016 Raphaël Goulmot
** Last update Thu Nov 10 19:48:16 2016 Raphaël Goulmot
*/

#include "utils.h"

int	my_power(int n, int p)
{
  int	i;
  int	value;

  value = 1;
  i = 0;
  if (n < 1 || n > 2147000000)
      return (0);
  else if (p < 1)
    return (1);
  while (i < p)
    {
      value *= n;
      i += 1;
    }
  return (value);
}
