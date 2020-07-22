SRCS	=	atoi.c dict.c dict_remove.c file.c file_empty_line.c free_memory.c is.c main.c print.c process.c rush.c strlen.c
OBJS	=	${SRCS:.c=.o}
NAME	=	rush-02
CC		=	gcc
RM		=	rm -rf
CFLAGS	=	-Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
${NAME}:	${OBJS}
	${CC} -o ${NAME} ${OBJS}

all:	${NAME}

clean:
			${RM} ${OBJS}

fclean:	clean
			${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean .c.o re