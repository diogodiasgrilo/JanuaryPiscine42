/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 09:36:56 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/01 12:51:16 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	char *str;

// 	str = "";
// 	ft_putstr(str);
// 	str = "This is a test string.";
// 	ft_putstr(str);
// 	write(1, "\n", 1);
// 	str = "This is a gianormous test string,
//		testing to see whatever happens in here....";
// 	ft_putstr(str);
// 	write(1, "\n", 1);
// 	return (0);
// }