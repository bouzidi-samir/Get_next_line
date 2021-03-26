# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouzidi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/26 07:58:40 by sbouzidi          #+#    #+#              #
#    Updated: 2021/03/26 11:03:00 by sbouzidi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

CC = gcc

FLAGS = -Wall -Werror -Wextra

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	  ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	  ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c \
	  ft_strlen.c ft_strncmp.c ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c \
	  ft_strjoin.c ft_strnstr.c

OBJS = ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o ft_isascii.o \
	  ft_isdigit.o ft_isprint.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o \
	  ft_memmove.o ft_memset.o ft_strchr.o ft_strdup.o ft_strlcat.o ft_strlcpy.o \
	  ft_strlen.o ft_strncmp.o ft_strrchr.o ft_substr.o ft_tolower.o ft_toupper.o \
	  ft_strjoin.o ft_strnstr.o

all = $(NAME)


$(NAME) : $(OBJS)
	ar rc $(NAME)  $(OBJS)


$(OBJ) : $(SRCS)
	$(CC)	$(FLAGS)	-c	$(SRCS)

clean : 
	rm -f *.o        		

fclean : clean
	rm -f	$(NAME) 

re : fclean all
