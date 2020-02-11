# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmansing <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/22 11:03:46 by tmansing          #+#    #+#              #
#    Updated: 2019/08/12 13:26:02 by tmansing         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isascii.c \
      ft_memcmp.c \
      ft_strchr.c \
      ft_striter.c \
      ft_strncat.c \
      ft_isdigit.c \
      ft_memcpy.c \
      ft_strclr.c \
      ft_striteri.c \
      ft_strncmp.c \
      ft_strstr.c \
      ft_isprint.c \
      ft_memdel.c \
      ft_putnbr.c \
      ft_strcmp.c \
      ft_strjoin.c \
      ft_strncpy.c \
      ft_strsub.c \
      ft_atoi.c \
      ft_memmove.c \
      ft_strcpy.c \
      ft_strlcat.c \
      ft_strnequ.c \
      ft_bzero.c \
      ft_memalloc.c \
      ft_memset.c \
      ft_putstr.c \
      ft_strdel.c \
      ft_strlen.c \
      ft_strnew.c \
      ft_tolower.c \
      ft_isalnum.c \
      ft_memccpy.c \
      ft_putchar.c \
      ft_putstr_fd.c \
      ft_strdup.c \
      ft_strnstr.c \
      ft_toupper.c \
      ft_isalpha.c \
      ft_memchr.c \
      ft_putchar_fd.c \
      ft_strcat.c \
      ft_strequ.c \
      ft_strmapi.c \
      ft_strrchr.c \
	  ft_strtrim.c \
	  ft_strsplit.c \
	  ft_strmap.c \
	  ft_itoa.c \
	  ft_putendl_fd.c \
	  ft_putendl.c \
	  ft_putnbr.c \
	  ft_putnbr_fd.c \
	  ft_isspace.c \
	  ft_check.c \
	  ft_freestrjoin.c \
	  ft_freestrdup.c \

OBJ = ft_isascii.o \
	  ft_freestrjoin.o \
	  ft_freestrdup.o \
	  ft_isspace.o \
	  ft_strtrim.o \
	  ft_strsplit.o \
	  ft_strmap.o \
	  ft_putendl.o \
	  ft_putendl_fd.o \
	  ft_putnbr_fd.o \
	  ft_itoa.o \
      ft_memcmp.o \
      ft_strchr.o \
      ft_striter.o \
      ft_strncat.o \
      ft_isdigit.o \
      ft_memcpy.o \
      ft_strclr.o \
      ft_striteri.o \
      ft_strncmp.o \
      ft_strstr.o \
      ft_isprint.o \
      ft_memdel.o \
      ft_putnbr.o \
      ft_strcmp.o \
      ft_strjoin.o \
      ft_strncpy.o \
      ft_strsub.o \
      ft_atoi.o \
      ft_memmove.o \
      ft_strcpy.o \
      ft_strlcat.o \
      ft_strnequ.o \
      ft_bzero.o \
      ft_memalloc.o \
      ft_memset.o \
      ft_putstr.o \
      ft_strdel.o \
      ft_strlen.o \
      ft_strnew.o \
      ft_tolower.o \
      ft_isalnum.o \
      ft_memccpy.o \
      ft_putchar.o \
      ft_putstr_fd.o \
      ft_strdup.o \
      ft_strnstr.o \
      ft_toupper.o \
      ft_isalpha.o \
      ft_memchr.o \
      ft_putchar_fd.o \
      ft_strcat.o \
      ft_strequ.o \
      ft_strmapi.o \
      ft_strrchr.o \
	  ft_check.o \

INCL = libft.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC) $(INCL)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
