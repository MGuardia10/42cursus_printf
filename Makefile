NAME	= libftprintf.a
FILES	=	ft_printf.c \
			ft_printf_utils.c
OBJS	= ${FILES:%.c=%.o}
CC		= gcc
FLAGS	= -Wall -Werror -Wextra
RM		= rm -f

all:		${NAME}

${NAME}:
		${CC} -c ${FLAGS} ${FILES} -I ./
		ar -rc ${NAME} ${OBJS}


clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re