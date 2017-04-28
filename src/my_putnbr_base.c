/*
** my_putnbr_base.c for my_printf in /home/raphael.goulmot/rendu/PSU_2016_my_printf/src
** 
** Made by Raphaël Goulmot
** Login   <raphael.goulmot@epitech.net>
** 
** Started on  Thu Nov 10 19:32:20 2016 Raphaël Goulmot
** Last update Sun Mar  5 00:52:11 2017 Raphaël Goulmot
*/

#include "utils.h"

void	my_putnbr_base(int nbr, char *base)
{
  int	size;
  int	n;

  size = my_strlen(base) - 1;
  n = 0;
  if (nbr < 0)
    {
      my_putchar('-');
      nbr *= -1;
    }
  while (my_power(size, n) <= nbr && ++n);
  while (n-- > 0)
    {
      my_putchar(base[(nbr / my_power(size, n))]);
      nbr = nbr % my_power(size, n);
    }
}


int	my_getnbr_base(char *str, char *base)
{
  int	value;
  int	i;
  int	b;
  char	check;

  value = 0;
  i = 0;
  while (str[i])
    {
      b = 0;
      check = 0;
      while (base[b] && !check && ++b)
	{
	  if (base[b - 1] == str[i])
	    check = 1;
	}
      value += b;
      i++;
    }
  return (value);
}
