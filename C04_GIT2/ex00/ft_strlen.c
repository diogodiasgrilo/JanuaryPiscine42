/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 09:33:23 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/01 12:46:26 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// void	ft_strlen_test(char *str)
// {
// 	int	size;
// 	int	ft_size;

// 	size = strlen(str);
// 	ft_size = ft_strlen(str);
// 	if (size != ft_size)
// 		printf("> KO,
// return (value of ft_strlen differs from expected. expected: %d,
// got: %d\n", size, ft_size);
// 	else
// 		printf("> OK. result: %d\n", ft_size);
// }

// int	main(void)
// {
// 	char *str;

// 	str = "";
// 	ft_strlen_test(str);
// 	str = "Test";
// 	ft_strlen_test(str);
// 	str = "Testing mored and more and more and more and more and more.";
// 	ft_strlen_test(str);
// 	return (0);
// }