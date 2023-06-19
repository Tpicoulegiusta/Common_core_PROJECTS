# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 09:58:45 by tpicoule          #+#    #+#              #
#    Updated: 2023/02/20 16:17:46 by tpicoule         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= pipex

SOURCES		= pipex_utils.c \
			  pipex_utils_2.c \
			  pipex.c
SOURCES_B	= ./BONUS/pipex_bonus.c \
			  ./BONUS/pipex_utils_bonus.c \
			  ./BONUS/pipex_utils_2_bonus.c
			  
OBJECTS		= ${SOURCES:.c=.o}
OBJECTS_B	= ${SOURCES_B:.c=.o}

RM			= rm -f
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

ifdef	MAKEBONUS
	OBJECTS = ${OBJECTS_B}
endif

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: 		${NAME}

${NAME}: 	${OBJECTS}
	${CC} ${CFLAGS} ${OBJECTS} -o ${NAME}

bonus:
	@make MAKEBONUS=1 all

clean:
	${RM} ${OBJECTS}
	${RM} ${OBJECTS_B}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus