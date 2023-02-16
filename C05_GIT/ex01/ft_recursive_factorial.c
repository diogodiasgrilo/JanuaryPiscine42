/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 10:28:10 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/02 11:37:09 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	factorial = nb;
	if (nb == 1)
		return (1);
	factorial = factorial * ft_recursive_factorial(nb - 1);
	return (factorial);
}

// int	ft_recursive_factorial(int nb);

// int	main(void)
// {
// 	int n;
// 	int res;

// 	n = -5;
// 	while (n <= 10)
// 	{
// 		res = ft_recursive_factorial(n);
// 		printf("n = %d, n! = %d\n", n, res);
// 		n++;
// 	}
// 	return (0);
// }