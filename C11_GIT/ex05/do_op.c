/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:15:33 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/14 17:32:42 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	checker_o(char *operator)
{
	if (operator == 0 && operator[0] != '+' && operator[0] != '-'
		&& operator[0] != '/' && operator[0] != '*' && operator[0] != '%')
		return (0);
	return (1);
}

int	error_sign_checker(int number, char sign)
{
	if (number == 0 && sign == '/')
	{
		write (1, "Stop : division by zero", 23);
		return (1);
	}
	else if (number == 0 && sign == '%')
	{
		write (1, "Stop : modulo by zero", 21);
		return (1);
	}
	return (0);
}

int	maker(char *argv[], int (*checker_o)(char *))
{
	if (!checker_o(argv[2]) || (ft_strlen(argv[2]) != 1))
		return (0);
	if (argv[2][0] == '+')
		return (function_holder(0, ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '-')
		return (function_holder(1, ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '/')
		return (function_holder(2, ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '*')
		return (function_holder(3, ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '%')
		return (function_holder(4, ft_atoi(argv[1]), ft_atoi(argv[3])));
	return (0);
}

int	main(int argc, char *argv[])
{
	int		to_return ;

	if (argc != 4)
		return (0);
	if (error_sign_checker(ft_atoi(argv[3]), argv[2][0]))
	{
		write(1, "\n", 1);
		return (0);
	}
	to_return = maker(argv, &checker_o);
	ft_putnbr(to_return);
	write(1, "\n", 1);
	return (0);
}
