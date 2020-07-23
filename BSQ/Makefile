CC = gcc
CFLAGS = -Wall -Wextra -Werror -I./includes

SRCS = $(wildcard ./srcs/*.c)
OBJS = $(SRCS:.c=.o)
NAME = BSQ

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
