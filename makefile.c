NAME	=	libft.a



SRC		=	ft_abs.c ft_adv_memcmp.c ft_atoi.c 


INC		=	libft.h includes/colors.h 



OBJ 	= 	$(SRC:.c=.o)



FLAGS 	=	-Wall -Wextra -Werror -Iincludes -I.



all: $(NAME) includes/



$(NAME): $(OBJ)

	@ar rcs $(NAME) $^



%.o: %.c $(INC)

	@gcc $(FLAGS) -o $@ -c $< 



re: fclean all



clean:

	@/bin/rm -Rf $(OBJ)



fclean: clean

	@/bin/rm -Rf $(NAME)