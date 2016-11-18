/*
** my_putchar.c for 101pong in /home/raphael.goulmot/rendu/101pong/src/utils
** 
** Made by Raphaël Goulmot
** Login   <raphael.goulmot@epitech.net>
** 
** Started on  Mon Nov  7 16:37:47 2016 Raphaël Goulmot
** Last update Tue Nov 15 16:52:43 2016 Raphaël Goulmot
*/

#include <unistd.h>
#include <stdarg.h>
#include "utils.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
