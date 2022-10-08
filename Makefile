# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/02 17:41:44 by csitja-b          #+#    #+#              #
#    Updated: 2022/10/08 20:54:05 by csitja-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RM			= rm -f 
AR			= ar -rcs
HEADER		= printf.h Libft/libft.h
NAME		= libftprintf.a
CFLAGS		= -Wall -Werror -Wextra 

SRC			= 

OBJ			=

OBJ = $(SRC:.c=.o)

INCLUDE = -I ./

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJ) $(HEADER)
	$(AR) $(NAME) $(OBJ)

bonus: $(BONUS)

$(BONUS): $(OBJ) $(HEADER)
	touch $@
	$(AR) $(NAME) $(OBJ)

.PHONY: all clean fclean re 

clean: 
	$(RM) $(OBJ)
	
fclean: clean 
	$(RM) $(NAME)

re : fclean all

