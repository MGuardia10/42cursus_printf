NAME	= libftprintf.a
FILES	=	ft_printf.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_putnbr.c \
			ft_printhexa.c \
			ft_printpointer.c
OBJS	= ${FILES:%.c=%.o}
CC		= gcc
FLAGS	= -Wall -Werror -Wextra
RM		= rm -f

${NAME}:
					${CC} -c ${FLAGS} ${FILES} -I ./
					ar -rc ${NAME} ${OBJS}

all:		${NAME}

clean:
					${RM} ${OBJS}

fclean:		clean
					${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re