# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/02 17:41:44 by csitja-b          #+#    #+#              #
#    Updated: 2022/10/20 20:20:14 by csitja-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables

RM			= rm -rf 
AR			= ar -rcs
NAME		= libftprintf.a
CFLAGS		= -Wall -Werror -Wextra 
INCLUDE	    = -I ./
OBJ_DIR		= OBJ_DIR

#Sources

SRC			= functions_1.c \
			  functions_3.c \
			  functions_2.c \
			  ft_printf.c

#Colors

DEF_COLOR   = \033[1;39m
GRAY 	   	= \033[1;90m
RED		    = \033[1;91m
GREEN	    = \033[1;32m
YELLOW	    = \033[1;93m
BLUE 		= \033[1;94m
MAGENTA     = \033[1;95m
CYAN        = \033[1;96m
WHITE       = \033[1;97m

OBJ		    = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)\n"
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME):: $(OBJ)
	$(AR) $(NAME) $(OBJ)
	@echo "$(GREEN)ft_printf compiled!$(DEF_COLOR)\n"

$(NAME)::
	@echo "$(WHITE)Nothing more to be done for library \033[1;31m.libftprint.a\n"
	
.PHONY: all clean fclean re 

clean: 
	$(RM) $(OBJ_DIR)
	@echo "$(CYAN)ft_printf object files cleaned!$(DEF_COLOR)\n"
	
fclean: clean 
	$(RM) $(NAME)
	@echo "$(CYAN)ft_printf executable files and name cleaned!$(DEF_COLOR)\n"

re : fclean all
	@echo "$(GREEN)Cleaned and rebuilt everything for ft_printf!$(DEF_COLOR)\n"
