/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:46:20 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/09 11:21:44 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *string)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;

	index = 0;
	dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!dest)
		return (0);
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*array;
	int			index;

	array = (t_stock_str *)malloc((sizeof(t_stock_str) * (ac + 1)));
	if (!array)
		return (NULL);
	index = 0;
	while (index < ac)
	{
		array[index].size = ft_strlen(av[index]);
		array[index].str = av[index];
		array[index].copy = ft_strdup(av[index]);
		index++;
	}
	array[index].str = 0;
	array[index].copy = 0;
	return (array);
}

// int	main()
// {
// 	char	*strings[] = {"string1", "string2",
//	 "stringmuitomaior1", "fim", "", "loucura", "issae"};
// 	struct s_stock_str *tab = ft_strs_to_tab(7, strings);
// 	struct s_stock_str *it = tab;

// 	tab[1].copy[3] = 'o';
// 	tab[3].copy[0] = 'S';

// 	while (it->str != 0)
// 	{
// 		printf("%s\n", it->str);
// 		printf("%i\n", it->size);
// 		printf("%s\n", it->copy);
// 		++it;
// 	}
// }