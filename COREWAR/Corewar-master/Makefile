##
## Makefile for Makefile in /home/tran_1/test/test_shell
## 
## Created by tran_1
## Login   <tran_1@epitech.eu>
## 
## Started on  Sat Mar 29 10:00:19 2014 tran_1
## Last update Sun Mar 30 13:00:10 2014 tran_1
##

CC	= gcc

NAME	= asm

DIR	= srcs/

LIB	= lib/

SRCS	= $(LIB)my_putchar.c\
	  $(LIB)my_putstr.c\
	  $(LIB)my_strlen.c\
	  $(LIB)my_strcat.c\
	  $(LIB)my_strcpy.c\
	  $(LIB)my_strcmp.c\
	  $(DIR)main.c\
	  $(DIR)take_name.c\
	  $(DIR)xopen.c\
	  $(DIR)xread.c\
	  $(DIR)struct_init.c\
	  $(DIR)parser_header.c\
	  $(DIR)parser_comment.c\
	  $(DIR)write_name.c\

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
