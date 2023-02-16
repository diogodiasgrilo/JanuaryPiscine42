/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:55:58 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/02 12:18:55 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	finder(long int lnb)
{
	long int	div;

	div = 2;
	while (div * div <= lnb)
	{
		if (lnb % div == 0)
			return (1);
		div++;
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	long int	lnb;
	int			checker;

	lnb = nb;
	if (lnb <= 2)
		return (2);
	checker = 1;
	while (checker)
	{
		checker = finder(lnb);
		if (checker == 0)
			return (lnb);
		lnb++;
	}
	return (0);
}

// int	main(void)
// {
// 	long int x;

// 	x = 3;

// 	x = ft_find_next_prime(x);

// 	printf("%ld\n", x);
// }