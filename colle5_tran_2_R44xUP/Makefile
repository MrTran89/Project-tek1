##
## Makefile for makefile in /home/tran_2/rendu/colle5_tran_2_R44xUP
## 
## Made by tran_2
## Login   <tran_2@epitech.net>
## 
## Started on  Wed May 28 19:12:59 2014 tran_2
## Last update Wed May 28 22:41:23 2014 tran_2
##

CC		=	gcc

RM		=	rm -f

NAME		=	braille

SRCS		=	main.c \
			my_functions.c \
			my_verifications.c \
			my_value.c

CFLAGS		=	-Wall -Werror -Wextra

OBJ		= 	$(SRCS:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJ)
			$(CC) $(OBJ) -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:			clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:			all clean fclean re
