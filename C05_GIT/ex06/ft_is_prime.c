/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:15:06 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/02 11:37:34 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	div;

	if (nb < 2)
		return (0);
	div = 2;
	while (div != nb)
	{
		if ((nb % div == 0 && nb != 2))
			return (0);
		div++;
	}
	return (1);
}

// void	ft_is_prime_test(void)
// {
// 	int res;
// 	int counter;
// 	int primes[17] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47,
// 		53, 59};

// 	counter = 0;
// 	while (counter < 17)
// 	{
// 		res = ft_is_prime(primes[counter]);
// 		if (res != 1)
// 		{
// 			printf("[1] KO, %d is a prime number! returned: %d.\n",
// 					primes[counter], res);
// 			return ;
// 		}
// 		counter++;
// 	}
// 	printf("[1] OK.\n");
// }

// void	ft_is_prime_error_test(void)
// {
// 	int res;
// 	int counter;
// 	int non_primes[17] = {-1, 0, 1, 4, 8, 10, 12, 15, 18, 20, 28, 30, 36, 40,
// 		42, 48, 54};

// 	counter = 0;
// 	while (counter < 17)
// 	{
// 		res = ft_is_prime(non_primes[counter]);
// 		if (res == 1)
// 		{
// 			printf("[2] KO, %d is not a prime number! returned: %d\n",
// 					non_primes[counter], res);
// 			return ;
// 		}
// 		counter++;
// 	}
// 	printf("[2] OK.\n");
// }

// int		main(void)
// {
// 	printf("[1] Testing prime numbers up to 59.\n");
// 	ft_is_prime_test();
// 	printf("[2] Testing non-prime numbers up to 54.\n");
// 	ft_is_prime_error_test();
// 	return (0);
// }