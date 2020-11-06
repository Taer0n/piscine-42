# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbertran <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/27 16:12:35 by lbertran          #+#    #+#              #
#    Updated: 2020/10/28 11:12:52 by lbertran         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

gcc -Wall -Werror -Wextra -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar -rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
