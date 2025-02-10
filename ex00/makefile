# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/10 12:28:48 by aszamora          #+#    #+#              #
#    Updated: 2025/02/10 12:28:53 by aszamora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Megaphone

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Megaphone.cpp

all: $(NAME)

$(NAME):
	clang++ $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)
	
fclean: clean

re: fclean all

.PHONY: all clean fclean re