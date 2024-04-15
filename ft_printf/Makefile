# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/05 11:53:52 by mbany             #+#    #+#              #
#    Updated: 2024/04/12 13:31:40 by mbany            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c\
ft_put_c.c\
ft_put_d.c\
ft_put_n.c\
ft_put_p.c\
ft_put_s.c\
ft_put_u.c\
ft_put_x.c\
ft_strlen.c\

	

OBJS = $(SRCS:.c=.o)

HEADER = ./

.c.o:
	@$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $@

$(NAME): $(OBJS)
	@ar cr $(NAME) $(OBJS)

all: $(NAME)

fclean: clean
	@rm -f $(NAME)

clean:
	@rm -f $(OBJS)

re: fclean all

.PHONY: clean fclean re all