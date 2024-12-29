# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kjell <kjell@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/06 22:13:16 by krenken           #+#    #+#              #
#    Updated: 2024/12/29 00:38:03 by kjell            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Standard
NAME        = libft.a

# Directories
INC	:=	inc/
SRC_DIR	:=	src/
OBJ_DIR	:=	objs/

# Compiler and Flags
CC          = gcc
CFLAGS      = -Wall -Wextra -Werror -I$(INC)
RM          = rm -f
AR			= ar rcs	

# Source Files
FT_IS_DIR	:= $(wildcard $(SRC_DIR)ft_is/*.c)
FT_MEM_DIR	:= $(wildcard $(SRC_DIR)ft_mem/*.c)
FT_PRINTF_DIR := $(wildcard $(SRC_DIR)ft_printf/*.c)
FT_PUT_DIR	:= $(wildcard $(SRC_DIR)ft_put/*.c)
FT_STR_DIR	:= $(wildcard $(SRC_DIR)ft_str/*.c)
FT_TO_DIR	:= $(wildcard $(SRC_DIR)ft_to/*.c)
GNL_DIR	:= $(wildcard $(SRC_DIR)get_next_line/*.c)

# Concatenate all source files
SRC := $(FT_IS_DIR) $(FT_MEM_DIR) $(FT_PRINTF_DIR) $(FT_PUT_DIR) $(FT_STR_DIR) $(FT_TO_DIR) $(GNL_DIR)

# Object files
OBJ = $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRC))

# Build rules
all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) -r $(OBJ_DIR)
	@$(RM) .cache_exists

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
