# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flaouid <laouid.ferdaous@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/06 09:39:25 by flaouid           #+#    #+#              #
#    Updated: 2019/11/07 17:31:25 by flaouid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PATH_SRCS = ./libft/

SRCS = ./ft_isalnum.c  ./ft_memcmp.c ./ft_memmove.c ./ft_isprint.c  ./ft_memchr.c ./ft_putnbr_fd.c ./ft_putchar_fd.c  ./ft_strjoin.c  ./ft_strrchr.c ./ft_atoi.c  ./ft_isalpha.c  ./ft_memccpy.c    ./ft_putstr_fd.c  ./ft_strlen.c     ./ft_tolower.c ./ft_bzero.c     ./ft_isascii.c   ./ft_memcpy.c    ./ft_strchr.c    ./ft_strncmp.c  ./ft_toupper.c    ./ft_isdigit.c  ./ft_memset.c     ./ft_strdup.c    ./ft_strnstr.c\

INC = ./libft.h

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)
.c.o :
	gcc -c $(CFLAGS) -I $(INC) $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	@ar rc $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re :	fclean all
