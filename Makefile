
NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRC = ft_printf.c ft_printf_fun.c
OBJ = ft_printf.o ft_printf_fun.o

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o : %.c ft_printf.h
	$(CC) $(FLAGS) -c $<
   	
clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : clean fclean all 

.PHONY : all clean fclean re