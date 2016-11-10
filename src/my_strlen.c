/*
** my_strlen.c for 101pong in /home/raphael.goulmot/rendu/101pong/src/utils
** 
** Made by Raphaël Goulmot
** Login   <raphael.goulmot@epitech.net>
** 
** Started on  Mon Nov  7 18:43:25 2016 Raphaël Goulmot
** Last update Tue Nov  8 11:28:06 2016 Raphaël Goulmot
*/

int	my_strlen(char *str)
{
  int	count;

  count = 0;
  while (str[count++]);
  return (count);
}
