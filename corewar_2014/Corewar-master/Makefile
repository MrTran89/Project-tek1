##
## Makefile for Makefile in /home/tran_1/test/test_shell
## 
## Created by tran_1
## Login   <tran_1@epitech.eu>
## 
## Started on  Sat Mar 29 10:00:19 2014 tran_1
## Last update Sat Apr 12 14:45:09 2014 tran_1
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
	  $(LIB)get_next_line.c\
	  $(DIR)main.c\
	  $(DIR)take_name.c\
	  $(DIR)xopen.c\
	  $(DIR)xread.c\
	  $(DIR)list.c\
	  $(DIR)struct_init.c\
	  $(DIR)create_exe.c\
	  $(DIR)check_file.c\

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
