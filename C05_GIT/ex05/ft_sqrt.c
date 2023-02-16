/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:55:39 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/02 12:18:03 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long int	starter;
	long int	lnb;

	lnb = nb;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	starter = 0;
	while (starter * starter <= lnb)
	{
		if (starter * starter == nb)
			return (starter);
		starter++;
	}
	return (0);
}

// void	ft_sqrt_test(void)
// {
// 	int res;
// 	int offset;
// 	int test_nums[11] = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 1000014129};
// 	int cheatsheet[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 31623};

// 	offset = 0;
// 	while (offset < 11)
// 	{
// 		res = ft_sqrt(test_nums[offset]);
// 		if (res == 0 || res != cheatsheet[offset])
// 		{
// 			printf("[1] KO, n = %d,expected: %d, got: %d.\n", test_nums[offset],
// 					cheatsheet[offset], res);
// 			return ;
// 		}
// 		offset++;
// 	}
// 	printf("[1] OK.\n");
// }

// void	ft_sqrt_error_test(void)
// {

// 	int res;
// 	int offset;
// 	int test_nums[11] = {-10, -5, 0, 2, 3, 13, 27, 29, 50, 99, 2147483647};

// 	offset = 0;
// 	while (offset < 11)
// 	{
// 		res = ft_sqrt(test_nums[offset]);
// 		if (res != 0)
// 		{
// 			printf("[2] KO, n = %d,expected: 0, got: %d.\n", test_nums[offset],
// 					res);
// 			return ;
// 		}
// 		offset++;
// 	}
// 	printf("[2] OK.\n");
// }

// int		main(void)
// {
// 	// mostrando apenas resultados diferentes de 0 para conferir
// 	printf("[1] Casos em que a raiz existe.\n");
// 	ft_sqrt_test();
// 	// mostrando apenas resultados iguais a zero(checar as condicoes de erro)
// 	printf("[2] Casos em que a raiz nao existe.\n");
// 	ft_sqrt_error_test();
// 	return (0);
// }