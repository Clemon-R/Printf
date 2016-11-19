/*
** my_printf.c for my_printf in /home/raphael.goulmot/rendu/PSU_2016_my_printf
** 
** Made by Raphaël Goulmot
** Login   <raphael.goulmot@epitech.net>
** 
** Started on  Mon Nov 14 14:10:22 2016 Raphaël Goulmot
** Last update Sun Nov 20 00:14:13 2016 Raphaël Goulmot
*/

#include "utils.h"
#include <stdarg.h>

void	ptrsFunction(char c, va_list *ap, char *arg, char arg2)
{
  int	value;

  if (c == 'c')
    my_putchar(va_arg(*ap, int));
  else if (c == 's' || c == 'S')
    (c == 's' ? my_putstr : my_putstr_print)(va_arg(*ap, char *));
  else if (c == 'i'|| c == 'd' || c == 'b' || c == 'u'
	   || c == 'o' || c == 'x' || c == 'X')
    {
      value = va_arg(*ap, int);
      if (c != 'i' && c != 'u' && c != 'd')
	my_putnbr_base(value, arg);
      else if (c != 'u' || value >= 0)
	my_put_nbr(value, c == 'i' && arg2 == '+');
    }
  else
    my_putchar('%');
}

char	*paramPrintf(char *str, int *i)
{
  char	base;

  base = 0;
  while (!((str[*i] >= 'a' && str[*i] <= 'z')
	|| (str[*i] >= 'A' && str[*i] <= 'Z')) && ++(*i))
    if (str[*i - 1] == '#')
      base = 1;
  if ((str[*i] == 'x' || str[*i] == 'X' || str[*i] == 'o') && base)
    my_putstr(str[*i] == 'o' ? "0" : str[*i] == 'x' ? "0x" : "0X");
  return (str[*i] == 'o' ? "01234567" : str[*i] == 'b' ? "01" : str[*i] == 'x'
	  ? "0123456789abcdef" : str[*i] == 'X' ? "0123456789ABCDEF" : "");
}

void	my_printf(char	*str, ...)
{
  va_list	ap;
  int	index;

  index  = 0;
  va_start(ap, str);
  while (str[index++])
    {
      if (str[index - 1] == '%')
	{
	  ptrsFunction(str[index], &ap, paramPrintf(str, &index), str[index - 1]);
	  index++;
	}
      else if (str[index - 1] > 0)
	my_putchar(str[index - 1]);
    }
  my_putchar('\n');
  va_end(ap);
}
