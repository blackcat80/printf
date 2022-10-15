# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/02 17:41:44 by csitja-b          #+#    #+#              #
#    Updated: 2022/10/15 20:16:21 by csitja-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RM			= rm -f 
AR			= ar -rcs
HEADER		= printf.h
NAME		= libftprintf.a
CFLAGS		= -Wall -Werror -Wextra 

SRC			= functions_1.c \
			  functions_3.c \
			  functions_2.c \
			  ft_printf.c

OBJ = $(SRC:.c=.o)

INCLUDE = -I ./

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)


.PHONY: all clean fclean re 

clean: 
	$(RM) $(OBJ)
	
fclean: clean 
	$(RM) $(NAME)

re : fclean all
