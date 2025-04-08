# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abardhan <abardhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/05 22:51:51 by abardhan          #+#    #+#              #
#    Updated: 2025/04/06 12:53:00 by abardhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar crs
RM = rm -f

INCLUDES = ft_printf.h

SRCS = printf.c \
       print_char.c \
       print_hex_X.c \
	   print_id.c \
	   print_ptr.c \
	   print_str.c \
	   print_uint.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

main: $(OBJS)
	$(CC) $(CFLAGS) main.c $(OBJS)

re: fclean all

.PHONY: all clean fclean re