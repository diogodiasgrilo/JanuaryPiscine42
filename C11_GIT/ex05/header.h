/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:35:28 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/14 10:43:08 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <unistd.h>

void	ft_putnbr(int nb);
int		add(int x, int y);
int		sub(int x, int y);
int		div(int x, int y);
int		mult(int x, int y);
int		mod(int x, int y);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
int		whitespaces(char *str, int *ptr_i);
int		function_holder(int index, int x, int y);

#endif