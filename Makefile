# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atouba <atouba@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/26 16:16:24 by atouba            #+#    #+#              #
#    Updated: 2021/11/29 11:32:30 by atouba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

RM = rm -rf

C_FLAGS = -Wall -Wextra -Werror
CC = cc

FILES = ft_printf.c \
		ft_print_c.c \
		ft_print_d.c \
		ft_print_p.c \
		ft_print_s.c \
		ft_print_u.c \
		ft_print_upper_x.c \
		ft_print_lower_x.c \

OBJS_O = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS_O)
	ar -rc $(NAME) $(OBJS_O)
	
clean:
	$(RM) $(OBJS_O)

fclean: clean
	$(RM) $(NAME)

re: fclean all