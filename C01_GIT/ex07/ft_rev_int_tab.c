/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:37:29 by diogpere          #+#    #+#             */
/*   Updated: 2023/01/27 08:17:44 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	guide;
	int	top;
	int	tmp;

	guide = 0;
	top = size - 1;
	while (guide != size / 2)
	{
		tmp = tab[guide];
		tab[guide] = tab[top];
		tab[top] = tmp;
		top--;
		guide++;
	}
}

// int	main(void)
// {
// 	int *tab;
// 	int counter;

// 	tab = calloc(10, sizeof(int));
// 	counter = 0;
// 	while (counter < 10)
// 	{
// 		tab[counter] = counter;
// 		counter++;
// 	}
// 	counter = 0;
// 	while (counter < 10)
// 	{
// 		printf("%d ", tab[counter]);
// 		counter++;
// 	}
// 	printf("\n");
// 	ft_rev_int_tab(tab, 10);
// 	counter = 0;
// 	while (counter < 10)
// 	{
// 		printf("%d ", tab[counter]);
// 		counter++;
// 	}
// 	printf("\n");
// 	return (0);
// }