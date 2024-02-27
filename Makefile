NAME	= libftprintf.a

SRCS	= ft_printf.c \
	   	ft_printf_utils.c \

OFILES	= $(SRCS:.c=.o)

CC	= gcc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OFILES)
			ar rcs $(NAME) $(OFILES)

clean:
			$(RM) $(OFILES)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re