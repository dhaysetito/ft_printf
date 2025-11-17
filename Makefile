# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhde-lim <dhde-lim@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 17:42:43 by dhde-lim          #+#    #+#              #
#    Updated: 2025/11/17 01:41:19 by dhde-lim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# CONFIG

NAME 		= libftprintf.a

CC 			= cc
CFLAGS		= -Wall -Werror -Wextra
CPPFLAGS	= -I.

SRCS		= 	ft_printf.c \
				ft_putnbr_ft.c \
				ft_putstr_ft.c

OBJS		= $(SRCS:.c=.o)

LIBFT_PATH = libft
LIBFT = ${LIBFT_PATH}/libft.a

# TARGET

all: $(NAME)

$(NAME): $(OBJS)
	make -C ${LIBFT_PATH} all
	cp ${LIBFT} ${NAME}
	ar rcs $(NAME) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean:
	make -C ${LIBFT_PATH} clean
	rm -f $(OBJS)

fclean: clean
	make -C ${LIBFT_PATH} fclean
	rm -f $(NAME)

re: fclean all

# Makefile should never use the names below as files, but rather as 
# the defined commands. 
.PHONY: all clean fclean re