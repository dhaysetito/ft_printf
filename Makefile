# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhde-lim <dhde-lim@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 17:42:43 by dhde-lim          #+#    #+#              #
#    Updated: 2025/11/29 19:50:11 by dhde-lim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# CONFIG

NAME 		= libftprintf.a

CC 			= cc
CFLAGS		= -Wall -Werror -Wextra
CPPFLAGS	= -Iincludes

SRCS		= 	src/ft_printf.c		\
				src/ft_putnbr_ft.c 	\
				src/ft_putstr_ft.c 	\
				src/ft_putchar_ft.c \
				src/ft_putvoid_ft.c	\
				src/ft_hexstr.c


OBJS		= $(SRCS:.c=.o)

EXEC = program

LIBFT = libft.a

# TARGET

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	ar rcs $(NAME) $(OBJS) $(LIBFT)

.c.o:
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) main.o

fclean: clean
	rm -f $(NAME)

re: fclean all

run: $(NAME) main.o
	$(CC) $(CFLAGS) main.o $(NAME) -o $(EXEC)
	./$(EXEC)

.PHONY: all clean fclean re