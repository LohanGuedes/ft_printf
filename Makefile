LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

SRCS =	ft_digit_count.c ft_push_char.c ft_push_percent.c
SRCS +=	ft_push_unsigned_decimal.c ft_isplaceholder.c ft_push_decimal.c
SRCS +=	ft_push_pointer.c ft_printf.c ft_push_hexa_low.c ft_push_right.c
SRCS +=	ft_push_hexa_upper.c ft_push_string.c

OBJECTS =	$(SRCS:.c=.o)

NAME =		libftftprintf.a

CC =		cc
CGLAGS =	-Wextra -Wall -Werror

ARFLAGS =	rc
AR =		ar
RM =		rm -f

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(LIBFT_PATH)

all:		$(LIBFT) $(NAME)

$(LIBFT):
			$(MAKE) -C $(LIBFT_PATH)
			$(MAKE) -C $(LIBFT_PATH) bonus

$(NAME):	 $(OBJECTS)
			cp	$(LIBFT) $(NAME)
			$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)


clean:
			$(MAKE) -C $(LIBFT_PATH) clean
			$(RM) $(OBJECTS)

fclean:		clean
			$(MAKE) -C $(LIBFT_PATH) fclean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re libft
