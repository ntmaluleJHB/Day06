# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntmalule <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/15 16:46:31 by ntmalule          #+#    #+#              #
#    Updated: 2020/07/15 16:58:59 by ntmalule         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



#! /bin/bash/

gcc -c ft_strcmp.c
gcc -c ft_swap.c
gcc -c ft_putchar.c
gcc -c ft_putstr.c
gcc -c ft_strlen.c

ar rc libft.a *.o
