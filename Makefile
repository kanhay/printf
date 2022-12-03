# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 13:51:01 by khanhayf          #+#    #+#              #
#    Updated: 2022/12/03 14:50:43 by khanhayf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRC = ft_printf.c ft_printf_fun.c ft_libft_fun.c
OBJ = ft_printf.o ft_printf_fun.o ft_libft_fun.o

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