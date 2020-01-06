NAME = libftprintf.a

l	= libft/

FILES = ft_printf.c check_what_percent.c check_flags.c str_and_flags.c create_struct.c excep.c

FILESLIBFT = ${l}ft_lstadd_back_bonus.c ${l}ft_memchr.c ${l}ft_strchr.c ${l}ft_strrchr.c ${l}ft_atoi.c ${l}ft_lstadd_front_bonus.c ${l}ft_memcmp.c ${l}ft_strdup.c ${l}ft_strtrim.c ${l}ft_bzero.c ${l}ft_lstclear_bonus.c ${l}ft_memcpy.c ${l}ft_strjoin.c ${l}ft_substr.c ${l}ft_calloc.c ${l}ft_lstdelone_bonus.c ${l}ft_memmove.c ${l}ft_strlcat.c ${l}ft_tolower.c ${l}ft_isalnum.c ${l}ft_lstiter_bonus.c ${l}ft_memset.c ${l}ft_strlcpy.c ${l}ft_toupper.c ${l}ft_isalpha.c ${l}ft_lstlast_bonus.c ${l}ft_putchar_fd.c ${l}ft_strldup.c ${l}ft_ultoa_base.c ${l}ft_isascii.c ${l}ft_lstmap_bonus.c ${l}ft_putendl_fd.c ${l}ft_strlen.c ${l}ft_utoa.c ${l}ft_isdigit.c ${l}ft_lstnew_bonus.c ${l}ft_putnbr_fd.c ${l}ft_strmapi.c ${l}ft_utoa_base.c ${l}ft_isprint.c ${l}ft_lstsize_bonus.c ${l}ft_putstr_fd.c ${l}ft_strncmp.c ${l}ft_itoa.c ${l}ft_memccpy.c ${l}ft_split.c ${l}ft_strnstr.c

OBJS = $(FILES:.c=.o)

OBJSLIBFT = $(FILESLIBFT:.c=.o)

.c.o : $(FILES)
	gcc -c -Wall -Wextra -Werror $(FILES) 
	
$(NAME) : $(OBJS)
	make bonus -C libft
	ar rc $(NAME) $(OBJS) $(OBJSLIBFT)
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
