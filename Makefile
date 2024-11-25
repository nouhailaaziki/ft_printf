CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

MANDATORY = ft_putchar.c ft_putstr.c #ft_putadd.c ft_putdec.c ft_putint.c \
			ft_putuns.c ft_puthex_low.c ft_puthex_upp.c ft_putper.c ft_printf.c

OBJM = $(MANDATORY:.c=.o)

all : $(NAME)

$(NAME) : $(OBJM)
	$(AR) rc $(NAME) $(OBJM)

%.o : %.c printf.h
	$(CC) $(CFLAGS) -c $< -o $@ 

clean :
	$(RM) $(OBJM)

fclean : clean
	$(RM) $(NAME)

re : fclean all