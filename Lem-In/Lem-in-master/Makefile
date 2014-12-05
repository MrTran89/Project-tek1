##
## Makefile for Makefile in /home/tran_1/test/Lem-in
## 
## Created by tran_1
## Login   <tran_1@epitech.eu>
## 
## Started on  Mon Apr 14 13:11:51 2014 tran_1
## Last update Thu Apr 17 17:42:32 2014 tran_1
##

CC	= gcc -ggdb -g3

NAME	= lem_in

CFLAGS	= -Iincludes/

LIB	= lib/

DIR	= srcs/

FILE	= get_file/

SRCS	= $(LIB)get_next_line.c\
	  $(LIB)my_putchar.c\
	  $(LIB)my_putstr.c\
	  $(LIB)my_strlen.c\
	  $(LIB)my_strcpy.c\
	  $(DIR)$(FILE)get_file.c\
	  $(DIR)$(FILE)get_file_list.c\
	  $(DIR)main.c\

OBJS	= $(SRCS:.c=.o)

RM	= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
