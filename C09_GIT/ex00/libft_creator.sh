# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/08 10:14:39 by diogpere          #+#    #+#              #
#    Updated: 2023/02/12 10:53:00 by diogpere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/env bash

for i in *.c
do
    cc -Wall -Werror -Wextra $i -c -o ${i%.c}.o
done

ar rcs libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

