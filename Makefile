##
## Makefile for 101pong in /home/raphael.goulmot/rendu/101pong
## 
## Made by Raphaël Goulmot
## Login   <raphael.goulmot@epitech.net>
## 
## Started on  Mon Nov  7 16:40:32 2016 Raphaël Goulmot
## Last update Thu Nov 10 19:58:01 2016 Raphaël Goulmot
##

SRC	=	src/my_put_nbr.c		\
		src/my_strlen.c			\
		src/my_putchar.c		\
		src/my_putstr.c			\
		src/my_power.c			\
		src/my_putnbr_base.c

OBJ	=	$(SRC:.c=.o)

TMP	=	$(SRC:.c=.c~)

FOLDER_HEADER	=	include

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
