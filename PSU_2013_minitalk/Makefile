##
## Makefile for makefile in /home/tran_2/rendu/PSU_2013_minitalk
## 
## Made by tran_2
## Login   <tran_2@epitech.net>
## 
## Started on  Wed Mar 19 10:30:27 2014 tran_2
## Last update Mon Mar 31 23:13:42 2014 tran_2
##

CC		= gcc

CLIENT		= ./client/client

SERVER		= ./server/server

SRCCLIENT	= ./client/my_functions_client.c \
		./client/my_getnbr.c \
		./client/client.c

SRCSERVER	= ./server/my_functions_server.c\
		./server/server.c

OBJCLIENT	= $(SRCCLIENT:.c=.o)

OBJSERVER	= $(SRCSERVER:.c=.o)

all:		$(CLIENT) $(SERVER)

$(CLIENT):	$(OBJCLIENT)
		$(CC) $(OBJCLIENT) -o $(CLIENT)

$(SERVER):	$(OBJSERVER)
		$(CC) $(OBJSERVER) -o $(SERVER)

clean:
		rm -f $(OBJCLIENT) $(OBJSERVER) *~ ./server/*~ ./client/*~

fclean:		clean
		rm -f $(CLIENT) $(SERVER)

re:		fclean all

.PHONY:		clean fclean all re
