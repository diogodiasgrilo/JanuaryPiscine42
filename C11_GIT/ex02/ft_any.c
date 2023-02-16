/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:52:51 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/14 09:49:39 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	is_lower(char *str)
// {
// 	while (*str != '\0')
// 	{
// 		if ('a' < *str || *str > 'z')
// 			return (1);
// 		++str;
// 	}
// 	return (0);
// }

// int	main(void)
// {
// 	char *tab0[] = {"213413", "AFfSDF", "__++_\\4132%", 0};
// 	char *tab1[] = {"213413", "ABF", "__++_\\4132%", 0};
// 	printf("tab0: %i\n", ft_any(tab0, is_lower));
// 	printf("tab1: %i\n", ft_any(tab1, is_lower));
// }