/*
** utils.h for bootstrap in /home/raphael.goulmot/rendu/PSU_2016_my_printf_bootstrap/include
** 
** Made by Raphaël Goulmot
** Login   <raphael.goulmot@epitech.net>
** 
** Started on  Tue Nov  8 09:42:54 2016 Raphaël Goulmot
** Last update Tue Nov 15 17:47:52 2016 Raphaël Goulmot
*/

#ifndef UTILS_H_
# define UTILS_H_

#include <stdarg.h>

void	my_putchar(char);
void	my_putstr(char *);
int	my_strlen(char *);
void	my_put_nbr(long, char);
int	my_power(int, int);
void	my_putnbr_base(int, char *);
void	my_putstr_print(char *);
void	ptrsFunction(char, va_list *, char *, char);
void	paramPrintf(char *, int *);
void	my_printf(char *, ...);

#endif /* !UTILS_H_ */
