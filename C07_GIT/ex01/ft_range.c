/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 08:37:45 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/07 09:12:01 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	size(int start, int end)
{
	if (start > end)
		return (start - end);
	else
		return (end - start);
}

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	array = (int *)malloc(sizeof(int) * size(min, max));
	if (!array)
		return (0);
	if (min >= max)
		return (0);
	if (size(min, max) == 1)
		array[0] = min;
	else
	{
		while (min != max)
		{
			array[i] = min;
			min++;
			i++;
		}
	}
	return (array);
}

// int		main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*tab;
// 	int	i = 0;
// 	int	size;

// 	min = 5;
// 	max = 10;
// 	size = max - min;
// 	tab = ft_range(min, max);
// 	while(i < size)
// 	{
// 		printf("%d, ", tab[i]);
// 		i++;
// 	}

// }