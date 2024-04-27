# Makefile NAME
NAME = libft.a

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Source files and object files
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
		ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_strnstr.c ft_atoi.c
OBJ = $(SRC:.c=.o)

# Main target
all: $(NAME)

# Compile executable
$(NAME): $(OBJ)
	ar rcs $(NAME) $^

# Compile object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files and executable
clean:
	rm -f $(OBJ)

# Clean object files, executable, and any additional generated files
fclean: clean
	rm -f $(NAME)

# Rebuild the project
re: fclean all

# Phony targets
.PHONY: all clean fclean re
