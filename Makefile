# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hatesfam <hatesfam@student.abudhabi42.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 10:03:26 by hatesfam          #+#    #+#              #
#    Updated: 2023/01/31 11:48:59 by hatesfam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libftprintf.a

SRCS 		=  ft_printf.c ft_parseflags.c ft_printchar.c ft_printnum.c ft_printhexa.c ft_printptr.c ft_printstr.c ft_printunum.c ft_itoa.c
OBJECTS		= $(SRCS:.c=.o)
RM			= rm -f
LIBCREATE	= ar -rcs		
CC 			= gcc
FLAGS 		= -Wall -Wextra -Werror

.c.o : $(CC) ${CC} ${FLAGS} $< -o ${<:.c=.o} 

$(NAME): $(OBJECTS)
	$(LIBCREATE) $(NAME) $(OBJECTS)

all : $(NAME)

clean :
	$(RM) $(OBJECTS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re