/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:05:16 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/14 10:01:11 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sorted;

	i = 0;
	sorted = 1;
	while ((i < (length - 1)) && sorted)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			sorted = 0;
		i++;
	}
	if (sorted != 1)
	{
		i = 0;
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	return (1);
}

// #include <stdio.h>

// int	bigger_than(int a, int b)
// {
// 	if (a < b)
// 		return (-1);
// 	if (a == b)
// 		return (0);
// 	return (1);
// }

// int	main(void)
// {
// 	int tab0[] = {1, 1, 1, 2, 2, 2, 3, 4, 5};
// 	int tab1[] = {1, 7, 3, 4, 5};
// 	int tab2[] = {7, 7, 7, 7, 6, 6, 6, 6, 5, 5, 4, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2,
// 		2, 2, 1, 1, 1};

// 	printf("expect 1 got %i\n", ft_is_sort(tab0, 9, bigger_than));
// 	printf("expect 0 got %i\n", ft_is_sort(tab1, 5, bigger_than));
// 	printf("expect 1 got %i\n", ft_is_sort(tab2, 26, bigger_than));
// }