# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llopez <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/12 18:15:23 by llopez            #+#    #+#              #
#    Updated: 2017/11/12 20:02:08 by llopez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
		  ft_memdel.c \
		  ft_strnew.c \
<<<<<<< HEAD
		  ft_strclr.c \
		  ft_strdel.c \
		  ft_striter.c \
		  ft_striteri.c \
		  ft_strmap.c \
		  ft_strmapi.c
=======
		  ft_strclr.c
>>>>>>> bdd0c2d7ef12ba81df0815af8dabc227c5e08368


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

