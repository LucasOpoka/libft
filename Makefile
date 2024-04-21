# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/20 13:52:43 by lopoka            #+#    #+#              #
#    Updated: 2024/04/21 20:30:04 by lucas            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_strlen.c \
	   ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strncmp.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strnstr.c \
	   ft_atoi.c \
	   ft_calloc.c \
	   ft_strdup.c \
	   ft_substr.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_split.c \
	   ft_itoa.c \
	   ft_strmapi.c \
	   ft_striteri.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \

BONUS_SRCS = ft_lstnew.c \
			 ft_lstadd_front.c \
			 ft_lstsize.c \
			 ft_lstlast.c \
			 ft_lstadd_back.c \
			 ft_lstdelone.c \
			 ft_lstclear.c \
			 ft_lstiter.c \
			 ft_lstmap.c \

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
CRLIB = ar rcs
OFILES = ${SRCS:c=o}
BONUS_OFILES = ${BONUS_SRCS:c=o}

${NAME} : ${OFILES}
	${CRLIB} ${NAME} ${OFILES}

bonus : ${OFILES} ${BONUS_OFILES}
	${CRLIB} ${NAME} ${OFILES} ${BONUS_OFILES}

all : ${NAME}

%.o : %.c libft.h
	${CC} ${CFLAGS} -c -o $@ $<

clean :
	rm -f ${OFILES} ${BONUS_OFILES}

fclean :
	rm -f ${NAME} ${OFILES} ${BONUS_OFILES}

re : fclean all

