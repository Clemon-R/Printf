/*
** my_putnbr_base.c for my_printf in /home/raphael.goulmot/rendu/PSU_2016_my_printf/src
** 
** Made by Raphaël Goulmot
** Login   <raphael.goulmot@epitech.net>
** 
** Started on  Thu Nov 10 19:32:20 2016 Raphaël Goulmot
** Last update Thu Nov 10 20:17:40 2016 Raphaël Goulmot
*/

#include "utils.h"

void	my_putnbr_base(int nbr, char *base)
{
  int	size;
  int	n;

  size = my_strlen(base);
  n = 0;
  while (my_power(size, n) < nbr && ++n);
  while (n-- > 0)
    {
      //my_put_nbr(nbr / my_power(size, n));
      my_putchar(base[(nbr / my_power(size, n))]);
      nbr = nbr / my_power(size, n);
    }
}
