# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mciupek <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/24 22:28:04 by mciupek           #+#    #+#              #
#    Updated: 2019/06/25 23:01:09 by mciupek          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_cat
SRCS	= ft_cat.c ft_read.c ft_putstr.c
SRCDIR	= ./
INCDIR	= ./
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
OBJ		= $(addprefix $(SRCDIR), $(SRCS:.c=.o))

$(SRCDIR)%.o:	$(SRCDIR)%.c
				$(CC) $(FLAGS) -I $(INCDIR) -o $@ -c $<

$(NAME): 		$(OBJ)
				$(CC) -o $(NAME) $(OBJ)

all: 			$(NAME)

clean:
				rm -f $(OBJ)

fclean: 		clean
				rm -f $(NAME)

.PHONY:			all clean fclean re
