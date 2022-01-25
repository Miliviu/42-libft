# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juhagon <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 10:37:25 by juhagon           #+#    #+#              #
#    Updated: 2021/11/27 16:03:22 by juhagon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
		   ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c\
		   ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c\
		   ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c\
		   ft_substr.c ft_tolower.c ft_toupper.c

BONUS_SRCS	= ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c\
			   ft_lstsize_bonus.c

OBJS	= ${SRCS:.c=.o}

BONUS_OBJS	= ${BONUS_SRCS:.c=.o}


INC = -I .
NAME	= libft.a

CC	= gcc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

AR = ar -rcs



.c.o:
		${CC} ${CFLAGS} $(INC) -c $< -o ${<:.c=.o} 

${NAME}:	${OBJS}
		${AR} ${NAME} ${OBJS}

all:		${NAME}

clean:
		${RM} ${OBJS} ${BONUS_OBJS}

bonus:	${BONUS_OBJS}
	${AR} ${NAME} ${BONUS_OBJS}

fclean: 	clean
		${RM} ${NAME}

re: 		fclean all

.PHONY:		all clean fclean re bonus
