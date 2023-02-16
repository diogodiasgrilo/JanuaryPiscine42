/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:03:16 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/02 11:37:19 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	total;
	int	original;

	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	original = power;
	total = 1;
	while (power > 0)
	{
		total = total * nb;
		power--;
	}
	return (total);
}

// void	ft_iterative_power_test(int nb, int power)
// {
// 	int	res;

// 	res = ft_iterative_power(nb, power);
// 	printf(" nb = %d, power = %d, result: %d\n", nb, power, res);
// }

// int	main(void)
// {
// 	int nb;
// 	int power;

// 	// testando potencias negativas(deve retornar 0)
// 	printf("[1] Potencias negativas(deve retornar 0)\n");
// 	nb = -4;
// 	while (nb <= 4)
// 	{
// 		power = -4;
// 		while (power < 0)
// 		{
// 			ft_iterative_power_test(nb, power);
// 			power++;
// 		}
// 		nb++;
// 	}
// 	// testando potencias 0(deve retornar 1)
// 	printf("[2] Potencias 0(deve retornar 1)\n");
// 	nb = -4;
// 	power = 0;
// 	while (nb <= 4)
// 	{
// 		ft_iterative_power_test(nb, power);
// 		nb++;
// 	}
// 	// testando potencias 0(deve retornar 1)
// 	printf("[3] Potencias positivas\n");
// 	nb = -4;
// 	while (nb <= 4)
// 	{
// 		power = 1;
// 		while (power <= 4)
// 		{
// 			ft_iterative_power_test(nb, power);
// 			power++;
// 		}
// 		nb++;
// 	}
// 	return (0);
// }