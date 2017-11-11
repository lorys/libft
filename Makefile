#  __  __       _         __ _ _        _______ ______  _____ _______ 
# |  \/  |     | |       / _(_) |      |__   __|  ____|/ ____|__   __|
# | \  / | __ _| | _____| |_ _| | ___     | |  | |__  | (___    | |   
# | |\/| |/ _` | |/ / _ \  _| | |/ _ \    | |  |  __|  \___ \   | |   
# | |  | | (_| |   <  __/ | | | |  __/    | |  | |____ ____) |  | |   
# |_|  |_|\__,_|_|\_\___|_| |_|_|\___|    |_|  |______|_____/   |_|   

NAME = libft.a

SOURCES = ft_atoi.c \
		  ft_bzero.c \
		  ft_isalnum.c \
		  ft_isalpha.c \
		  ft_isascii.c \
		  ft_isdigit.c \
		  ft_isprint.c \
		  ft_memccpy.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_memset.c \
		  ft_putchar.c \
		  ft_putstr.c \
		  ft_strlen.c \
		  ft_tolower.c \
		  ft_toupper.c \
		  ft_strncmp.c \
		  ft_strcmp.c \
		  ft_strnstr.c \
		  ft_strstr.c \
		  ft_strrchr.c \
		  ft_strchr.c \
		  ft_strcat.c \
		  ft_strncat.c \
		  ft_strlcat.c \
		  ft_strdup.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_strcpy.c \
		  ft_strncpy.c \
		  ft_memalloc.c \
		  ft_memdel.c


OBJ = $(SOURCES:%.c=$(OBJDIR)%.o)

FLAG = -Wall -Werror -Wextra

OBJDIR = obj/

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJDIR)%.o: %.c libft.h
	@mkdir -p $(OBJDIR)
	@gcc -o $@ $(FLAG) -c $<

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

