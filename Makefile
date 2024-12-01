CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

MANDATORY = ft_putchar.c ft_putstr.c ft_strlen.c ft_putnbr.c ft_putuns.c \
			ft_puthex_low.c ft_puthex_upp.c ft_putptr.c ft_printf.c

OBJM = $(MANDATORY:.c=.o)

all : $(NAME)

$(NAME) : $(OBJM)
	$(AR) rc $(NAME) $(OBJM)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $<

clean :
	$(RM) $(OBJM)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean
