# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/02 17:41:44 by csitja-b          #+#    #+#              #
#    Updated: 2022/10/02 18:21:22 by csitja-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables

NAME		= libftprintf.a
INCLUDE		= includeLIBFT		= libft
SRC_DIR		= src/
OBJ_DIR		= obj/
CFLAGS		= -Wall -Werror -Wextra -I
RM			= rm -f
AR			= ar rcs

#Sources

SRC_FILES	=	ft_printf ft_printf_utils ft_print_ptr ft_print_unsigned ft_print_hex


SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

// OBJF		=	.cache_exists
all:		$(NAME)

$(NAME):	$(OBJ)
			@make -C $(LIBFT)
			@cp libft/libft.a .
			@mv libft.a $(NAME)
			@$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
			@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJF):
			@mkdir -p $(OBJ_DIR)

.PHONY:		all clean fclean re 

clean:
			@$(RM) -rf $(OBJ_DIR)
			@make clean -C $(LIBFT)

fclean:		clean
			@$(RM) -f $(NAME)
			@$(RM) -f $(LIBFT)/libft.a

re:			fclean all 
