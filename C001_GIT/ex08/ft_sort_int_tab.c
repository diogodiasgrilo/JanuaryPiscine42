/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:50:59 by diogpere          #+#    #+#             */
/*   Updated: 2023/01/27 08:18:42 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// int arr[10];
// int i = -1;

// 	while(++i < 10)
// 		arr[i] = rand() % 50;

// 	i = -1;
// 	while(++i < 10)
// 	printf("%d ", arr[i]);
// 	printf("\n");
// 	ft_sort_int_tab(arr, 10);
// 	i = -1;
// 	while(++i < 10)
// 		printf("%d ", arr[i]);
// 	printf("\n");
// }
