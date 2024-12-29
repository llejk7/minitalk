# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iinc

# Directories
SRC_DIR = src
OBJ_DIR = obj
LIBFT_PATH = libft

# Source files
SRCS = $(SRC_DIR)/client.c $(SRC_DIR)/server.c
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Executables
CLIENT_NAME = client
SERVER_NAME = server

# Libft
LIBFT_ARCHIVE = $(LIBFT_PATH)/libft.a

# Rules
all: $(LIBFT_ARCHIVE) $(CLIENT_NAME) $(SERVER_NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(CLIENT_NAME): $(OBJ_DIR)/client.o $(LIBFT_ARCHIVE)
	$(CC) $(CFLAGS) -o $@ $^ -L$(LIBFT_PATH) -lft

$(SERVER_NAME): $(OBJ_DIR)/server.o $(LIBFT_ARCHIVE)
	$(CC) $(CFLAGS) -o $@ $^ -L$(LIBFT_PATH) -lft

$(LIBFT_ARCHIVE):
	$(MAKE) -C $(LIBFT_PATH)

clean:
	$(MAKE) -C $(LIBFT_PATH) clean
	rm -rf $(OBJ_DIR)

fclean: clean
	$(MAKE) -C $(LIBFT_PATH) fclean
	rm -f $(CLIENT_NAME) $(SERVER_NAME)

re: fclean all

.PHONY: all clean fclean re
