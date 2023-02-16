/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 10:15:45 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/02 15:02:55 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	guide;

	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	guide = 1;
	factorial = 1;
	while (guide != nb)
	{
		factorial *= (guide + 1);
		guide++;
	}
	return (factorial);
}

// int	main(void)
// {
// 	int		n;
// 	int		res;

// 	n = -5;
// 	while (n <= 10)
// 	{
// 		res = ft_iterative_factorial(n);
// 		printf("n = %d, n! = %d\n", n, res);
// 		n++;
// 	}
// 	return (0);
// }
