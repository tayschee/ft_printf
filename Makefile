NAME = libftprintf.a

FILES = ft_printf.c check_what_percent.c check_flags.c str_and_flags.c create_struct.c excep.c

OBJS = $(FILES:.c=.o)

OBJS : $(FILES)
	gcc -c -Wall -Wextra -Werror $(FILES) 
	
$(NAME) : $(OBJS)
	make all -C libft
	ar rc $(NAME) $(OBJS) ./libft/*.o
	ranlib $(NAME)

all : $(NAME)

compil : all
	gcc -o my.out $(NAME) main.c
	./my.out

clean : 
	rm -rf $(OBJS)
	make clean -C libft

fclean : clean
	rm -rf $(NAME)
	make fclean -C libft

re : fclean all

restart: fclean compil

.PHONY: all re clean fclean compil restart
