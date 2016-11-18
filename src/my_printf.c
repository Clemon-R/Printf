/*
** my_printf.c for my_printf in /home/raphael.goulmot/rendu/PSU_2016_my_printf
** 
** Made by Raphaël Goulmot
** Login   <raphael.goulmot@epitech.net>
** 
** Started on  Mon Nov 14 14:10:22 2016 Raphaël Goulmot
** Last update Fri Nov 18 09:43:05 2016 Raphaël Goulmot
*/

#include "utils.h"
#include <stdarg.h>

void	ptrsFunction(char c, va_list *ap, char *arg, char plus)
{
  int	value;

  if (c == 'c')
    my_putchar(va_arg(*ap, int));
  else if (c == 's' || c == 'S')
    (c == 's' ? my_putstr : my_putstr_print)(va_arg(*ap, char *));
  else if (c == 'i' || c == 'b' || c == 'u')
    {
      value = va_arg(*ap, int);
      if (c == 'b')
	my_putnbr_base(value, arg);
      else if (c != 'u' || value >= 0)
	my_put_nbr(value, plus);
    }
}

void	paramPrintf(char *str, int *i)
{
  if (!((str[*i] >= 'a' && str[*i] <= 'z')
	|| (str[*i] >= 'A' && str[*i] <= 'Z')))
    {
      if ((str[*i] == '#' || str[*i] == '+') && ++(*i)
	  && (str[*i] == 'x' || str[*i] == 'X' || str[*i] == 'o'))
	my_putstr(str[*i] == 'o' ? "0" : str[*i] == 'x' ? "Ox" : "0X");
    }
}

void	my_printf(char	*str, ...)
{
  va_list	ap;
  int	index;

  index  = 0;
  va_start(ap, str);
  while (str[index])
    {
      if (str[index] == '%' && ++index)
	{
	  paramPrintf(str, &index);
	  if (str[index] == 'X' || str[index] == 'x'
	      || str[index] == 'b' || str[index] == 'o')
	    ptrsFunction('b', &ap, str[index] == 'o' ? "01234567"
			 : str[index] == 'b' ? "01" : "", str[index - 1] != '%');
	  else if (str[index] == 's' || str[index] == 'S')
	    ptrsFunction(str[index], &ap, "", 0);
	  else if (str[index] == 'i' || str[index] == 'd' || str[index] == 'u')
	    ptrsFunction(str[index] != 'u' ? 'i' : 'u', &ap, ""
			 , str[index - 1] == '+');
	}
      else
	my_putchar(str[index]);
      index++;
    }
  va_end(ap);
}
