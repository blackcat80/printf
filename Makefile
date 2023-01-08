# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/02 17:41:44 by csitja-b          #+#    #+#              #
#    Updated: 2023/01/08 20:43:20 by csitja-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables

RM			= rm -rf 
AR			= ar -rcs
NAME		= libftprintf.a
CFLAGS		= -Wall -Werror -Wextra 
INCLUDE	    = -I ./
OBJ_DIR		= OBJ_DIR
DFLAGS		= -MT $@ -MMD -MP

#Sources

SRC			= functions_1.c \
			  functions_2.c \
			  functions_3.c \
			  ft_printf.c

# Bold Colors

DEF_COLOR   = \033[1;39m
GRAY 	   	= \033[1;90m
RED		    = \033[1;91m
GREEN	    = \033[1;32m
YELLOW	    = \033[1;93m
BLUE 		= \033[1;94m
MAGENTA     = \033[1;95m
CYAN        = \033[1;96m
WHITE       = \033[1;97m

# Backgrounds

BG_Black	=\033[40m   
BG_Red		=\033[0;101m     
BG_Green	=\033[0;102m   
BG_Yellow	=\033[0;103m  
BG_Blue		=\033[0;104m  
BG_Purple	=\033[45m
BG_Cyan		=\033[0;106m
BG_White	=\033[0;107m   

OBJ		    = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))
DEP			= $(addsuffix .d, $(basename $(OBJ)))

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.c $(OBJ_DIR)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)\n"
	$(CC) $(CFLAGS) $(DFLAGS) $(INCLUDE) -c $< -o $@

$(NAME):: $(OBJ)
	$(AR) $(NAME) $(OBJ)
	@echo "$(BG_Purple)$(GREEN)Project ft_printf compiled!$(DEF_COLOR)$(BG_Black)\n"

$(NAME)::
	@echo "$(WHITE)Nothing more to be done for library \033[1;31mlibftprint.a\n"
	
-include $(DEP)

.PHONY: all clean fclean re 

clean: 
	$(RM) $(OBJ_DIR)
	@echo "$(CYAN)ft_printf object files cleaned!$(DEF_COLOR)\n"
	
fclean: clean 
	$(RM) $(NAME)
	@echo "$(CYAN)ft_printf executable files and name cleaned!$(DEF_COLOR)\n"

re : fclean all
	@echo "$(GREEN)Cleaned and rebuilt everything for ft_printf!$(DEF_COLOR)\n"
