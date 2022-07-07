NAME	=	libftprintf.a

SRCS	=	ft_printf.c write_c.c write_s.c\
			write_d_or_i.c write_p.c write_u.c\
			write_x.c write_up_x.c 

HEADER	=	ft_printf.h
OBJS		=	$(SRCS:%.c=%.o)
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJS) $(HEADER)
		ar rcs $(NAME) $?

%.o : %.c $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@

clean	:
		@rm -f $(OBJS)

fclean	:	clean
		@$(RM) $(NAME)

re		:	fclean all