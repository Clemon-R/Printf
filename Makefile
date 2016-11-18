##
## Makefile for 101pong in /home/raphael.goulmot/rendu/101pong
## 
## Made by Raphaël Goulmot
## Login   <raphael.goulmot@epitech.net>
## 
## Started on  Mon Nov  7 16:40:32 2016 Raphaël Goulmot
## Last update Fri Nov 18 09:40:49 2016 Raphaël Goulmot
##

SRC	=	src/my_put_nbr.c		\
		src/my_strlen.c			\
		src/my_putchar.c		\
		src/my_putstr.c			\
		src/my_power.c			\
		src/my_putstr_print.c		\
		src/my_printf.c			\
		src/my_putnbr_base.c

OBJ	=	$(SRC:.c=.o)

TMP	=	$(SRC:.c=.c~)

CFLAGS	=	-Wextra -Wall -Werror -Iinclude

NAME	=	libmy.a

all:	${NAME}

${NAME}:$(OBJ)
	ar rc $(NAME) $(OBJ)

fclean:	clean
	rm -f $(NAME) $(NAME)~

clean:
	rm -f $(OBJ)
	rm -f $(TMP)
	rm -f Makefile~

re:	fclean ${NAME}
