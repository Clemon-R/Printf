/*
** my_putstr_print.c for mr_printf in /home/raphael.goulmot/rendu/PSU_2016_my_printf
** 
** Made by Raphaël Goulmot
** Login   <raphael.goulmot@epitech.net>
** 
** Started on  Sat Nov 12 23:31:36 2016 Raphaël Goulmot
** Last update Mon Nov 14 14:39:21 2016 Raphaël Goulmot
*/

#include "utils.h"

void	my_putstr_print(char *str)
{
  int	index;
  int	index2;

  index = 0;
  while (str[index])
    {
      if (str[index] >= 32 && str[index] < 127)
	my_putchar(str[index]);
      else
	{
	  my_putchar('\\');
	  index2 = str[index] <= 7 ? 2 : index <= 70 ? 1 : 0;
	  while (index2-- > 0)
	    my_putchar('0');
	  my_putnbr_base(str[index], "01234567");
	}
      index++;
    }
}
