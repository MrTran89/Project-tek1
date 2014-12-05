##
## Makefile for makefile in /home/tran_2/rendu/colle2_tran_2_3xMoX
## 
## Made by tran_2
## Login   <tran_2@epitech.net>
## 
## Started on  Wed May  7 19:02:09 2014 tran_2
## Last update Wed May  7 21:39:07 2014 tran_2
##

CC		= gcc

NAME		= carre

CFLAGS		= -Wall -Werror

SRCS		= my_functions.c \
		my_verifications.c \
		main.c

OBJ		= $(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ) *~

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		clean fclean all re
