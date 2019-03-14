# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mqian <mqian@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/26 15:43:52 by mqian             #+#    #+#              #
#    Updated: 2019/03/06 17:55:37 by mqian            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#need $(NAME), clean, fclean, re, all

NAME = libft.a
CFILES = *.c
OFILES = *.o
FLAGS = gcc -c -Wall -Wextra -Werror $(CFILES) -I.

all: $(NAME)

$(NAME):
	$(FLAGS)
	ar -rc $(NAME) $(OFILES)

clean:
	/bin/rm -f $(OFILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
