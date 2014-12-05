##
## Makefile for makefile in /home/tran_2/rendu/Colle_01
## 
## Made by tran_2
## Login   <tran_2@epitech.net>
## 
## Started on  Wed Apr 30 19:07:46 2014 tran_2
## Last update Wed Apr 30 22:13:28 2014 tran_2
##

CC	= gcc

NAME	= braille

SRCS	= my_function.c \
	my_tab.c \
	my_verifications.c \
	main.c

OBJ	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):$(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ) *~

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	clean fclean all re
