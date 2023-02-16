/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:49:11 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/14 09:52:36 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*array;

	array = (int *)malloc(sizeof(int) * length);
	if (!array)
		return (0);
	i = 0;
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}

// #include <stdio.h>

// int		ft_square(int n)
// {
// 	return (n * n);
// }

// void	print_tab_nl(int *tab, int length)
// {
// 	int i;

// 	i = 0;
// 	printf("{");
// 	while (i < length)
// 		printf("%i, ", tab[i++]);
// 	printf("\b\b} \n");

// }

// int		main(void)
// {
// 	int tab[] = {1, 2, 3, 4, 5};
// 	int *res = ft_map(tab, 5, ft_square);
// 	print_tab_nl(res, 5);
// }